#!/usr/bin/perl -w
#
# This script parses remote_protocol.x and produces lots of boilerplate
# code for both ends of the remote connection.
#
# By Richard Jones <rjones@redhat.com>
#
# $Id$

use strict;

use Getopt::Std;

# Command line options.
our ($opt_c, $opt_d, $opt_i, $opt_s, $opt_v, $opt_w);
getopts ('cdisvw');

# Convert name_of_call to NameOfCall.
sub name_to_ProcName {
    my $name = shift;
    my @elems = split /_/, $name;
    @elems = map ucfirst, @elems;
    join "", @elems
}

# Read the input file (usually remote_protocol.x) and form an
# opinion about the name, args and return type of each RPC.
my ($name, $ProcName, %calls);
while (<>) {
    if (/^struct remote_(.*)_args/) {
	$name = $1;
	$ProcName = name_to_ProcName ($name);

	die "duplicate definition of remote_${name}_args"
	    if exists $calls{$name};

	$calls{$name} = {
	    name => $name,
	    ProcName => $ProcName,
	    UC_NAME => uc $name,
	    args => "remote_${name}_args",
	    ret => "void",
	};

    } elsif (/^struct remote_(.*)_ret/) {
	$name = $1;
	$ProcName = name_to_ProcName ($name);

	if (exists $calls{$name}) {
	    $calls{$name}->{ret} = "remote_${name}_ret";
	} else {
	    $calls{$name} = {
		name => $name,
		ProcName => $ProcName,
		UC_NAME => uc $name,
		args => "void",
		ret => "remote_${name}_ret"
	    }
	}
    }
}

# REMOTE_PROC_CLOSE has no args or ret.
$calls{close} = {
    name => "close",
    ProcName => "Close",
    UC_NAME => "CLOSE",
    args => "void",
    ret => "void",
};

#----------------------------------------------------------------------
# Output

print <<__EOF__;
/* Automatically generated by remote_generate_stubs.pl.
 * Do not edit this file.  Any changes you make will be lost.
 */

__EOF__

# Debugging.
if ($opt_d) {
    my @keys = sort (keys %calls);
    foreach (@keys) {
	print "$_:\n";
	print "\tname $calls{$_}->{name} ($calls{$_}->{ProcName})\n";
	print "\t$calls{$_}->{args} -> $calls{$_}->{ret}\n";
    }
}

# Prototypes for dispatch functions ("remote_dispatch_prototypes.h").
elsif ($opt_i) {
    my @keys = sort (keys %calls);
    foreach (@keys) {
	print "static int remoteDispatch$calls{$_}->{ProcName} (struct qemud_client *client, remote_message_header *req, $calls{$_}->{args} *args, $calls{$_}->{ret} *ret);\n";
    }
}

# Local variables used inside remoteDispatchClientRequest
# ("remote_dispatch_localvars.h").
elsif ($opt_v) {
    my @values = values %calls;
    foreach (@values) {
	if ($_->{args} ne "void") {
	    print "$_->{args} lv_$_->{args};\n";
	}
	if ($_->{ret} ne "void") {
	    print "$_->{ret} lv_$_->{ret};\n";
	}
    }
}

# Inside the switch statement, prepare the 'fn', 'args_filter', etc
# ("remote_dispatch_proc_switch.h").
elsif ($opt_w) {
    my @keys = sort (keys %calls);
    foreach (@keys) {
	print "case REMOTE_PROC_$calls{$_}->{UC_NAME}:\n";
	print "\tfn = (dispatch_fn) remoteDispatch$calls{$_}->{ProcName};\n";
	if ($calls{$_}->{args} ne "void") {
	    print "\targs_filter = (xdrproc_t) xdr_$calls{$_}->{args};\n";
	    print "\targs = (char *) &lv_$calls{$_}->{args};\n";
	    print "\tmemset (&lv_$calls{$_}->{args}, 0, sizeof lv_$calls{$_}->{args});\n"
	}
	if ($calls{$_}->{ret} ne "void") {
	    print "\tret_filter = (xdrproc_t) xdr_$calls{$_}->{ret};\n";
	    print "\tret = (char *) &lv_$calls{$_}->{ret};\n";
	    print "\tmemset (&lv_$calls{$_}->{ret}, 0, sizeof lv_$calls{$_}->{ret});\n"
	}
	print "\tbreak;\n";
    }
}

# Generate client stubs - just used to generate the first
# version of the stubs in remote_internal.c.  They need
# hand-hacking afterwards.
elsif ($opt_c) {
    my @keys = sort (keys %calls);

    foreach (@keys) {
	my $args = $calls{$_}->{args};
	my $argsvoid = $args eq "void";
	my $ret = $calls{$_}->{ret};
	my $retvoid = $ret eq "void";

	print "static @@\n";
	print "remote$calls{$_}->{ProcName} (@@)\n";
	print "{\n";
	if (!$argsvoid) {
	    print "    $args args;\n";
	}
	if (!$retvoid) {
	    print "    $ret ret;\n";
	}
	print "    GET_PRIVATE (conn, @@);\n";
	print "\n";
	if (!$argsvoid) {
	    print "    @@\n";
	    print "\n";
	}
	if (!$retvoid) {
	    print "    memset (&ret, 0, sizeof ret);\n";
	}
	print "    if (call (conn, priv, 0, REMOTE_PROC_$calls{$_}->{UC_NAME},\n";
	print "              (xdrproc_t) xdr_$args, (char *) ";
	if ($argsvoid) {
	    print "NULL";
	} else {
	    print "&args";
	}
	print ",\n";
	print "              (xdrproc_t) xdr_$ret, (char *) ";
	if ($retvoid) {
	    print "NULL";
	} else {
	    print "&ret";
	}
	print ") == -1)\n";
	print "        return -1;\n";
	print "\n    @@\n";
	print "}\n\n";
    }
}

# Generate server stubs - just used to generate the first
# version of the stubs in remote.c.  They need hand-hacking
# afterwards.
elsif ($opt_s) {
    my @keys = sort (keys %calls);

    foreach (@keys) {
	my $args = $calls{$_}->{args};
	my $argsvoid = $args eq "void";
	my $ret = $calls{$_}->{ret};
	my $retvoid = $ret eq "void";

	print "static int\n";
	print "remoteDispatch$calls{$_}->{ProcName} (struct qemud_client *client,\n";
	print "            remote_message_header *req,\n";
	print "            remote_get_max_vcpus_args *args,\n";
	print "            remote_get_max_vcpus_ret *ret)\n";
	print "{\n";
	if (!$argsvoid || !$retvoid) {
	    print "    @@\n";
	}
	print "    CHECK_CONN;\n";
	print "\n";
	if (!$argsvoid) {
	    print "    @@\n";
	    print "\n";
	}
	print "    @@ = vir$calls{$_}->{ProcName} (@@);\n";
	print "    if (@@) return -1;\n";
	print "\n";
	if (!$retvoid) {
	    print "    @@\n";
	    print "\n";
	}
	print "    return 0;\n";
	print "}\n\n";
    }
}
