/* Automatically generated by remote_generate_stubs.pl.
 * Do not edit this file.  Any changes you make will be lost.
 */

case REMOTE_PROC_CLOSE:
	fn = (dispatch_fn) remoteDispatchClose;
	break;
case REMOTE_PROC_DOMAIN_ATTACH_DEVICE:
	fn = (dispatch_fn) remoteDispatchDomainAttachDevice;
	args_filter = (xdrproc_t) xdr_remote_domain_attach_device_args;
	args = (char *) &lv_remote_domain_attach_device_args;
	memset (&lv_remote_domain_attach_device_args, 0, sizeof lv_remote_domain_attach_device_args);
	break;
case REMOTE_PROC_DOMAIN_CORE_DUMP:
	fn = (dispatch_fn) remoteDispatchDomainCoreDump;
	args_filter = (xdrproc_t) xdr_remote_domain_core_dump_args;
	args = (char *) &lv_remote_domain_core_dump_args;
	memset (&lv_remote_domain_core_dump_args, 0, sizeof lv_remote_domain_core_dump_args);
	break;
case REMOTE_PROC_DOMAIN_CREATE:
	fn = (dispatch_fn) remoteDispatchDomainCreate;
	args_filter = (xdrproc_t) xdr_remote_domain_create_args;
	args = (char *) &lv_remote_domain_create_args;
	memset (&lv_remote_domain_create_args, 0, sizeof lv_remote_domain_create_args);
	break;
case REMOTE_PROC_DOMAIN_CREATE_LINUX:
	fn = (dispatch_fn) remoteDispatchDomainCreateLinux;
	args_filter = (xdrproc_t) xdr_remote_domain_create_linux_args;
	args = (char *) &lv_remote_domain_create_linux_args;
	memset (&lv_remote_domain_create_linux_args, 0, sizeof lv_remote_domain_create_linux_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_create_linux_ret;
	ret = (char *) &lv_remote_domain_create_linux_ret;
	memset (&lv_remote_domain_create_linux_ret, 0, sizeof lv_remote_domain_create_linux_ret);
	break;
case REMOTE_PROC_DOMAIN_DEFINE_XML:
	fn = (dispatch_fn) remoteDispatchDomainDefineXml;
	args_filter = (xdrproc_t) xdr_remote_domain_define_xml_args;
	args = (char *) &lv_remote_domain_define_xml_args;
	memset (&lv_remote_domain_define_xml_args, 0, sizeof lv_remote_domain_define_xml_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_define_xml_ret;
	ret = (char *) &lv_remote_domain_define_xml_ret;
	memset (&lv_remote_domain_define_xml_ret, 0, sizeof lv_remote_domain_define_xml_ret);
	break;
case REMOTE_PROC_DOMAIN_DESTROY:
	fn = (dispatch_fn) remoteDispatchDomainDestroy;
	args_filter = (xdrproc_t) xdr_remote_domain_destroy_args;
	args = (char *) &lv_remote_domain_destroy_args;
	memset (&lv_remote_domain_destroy_args, 0, sizeof lv_remote_domain_destroy_args);
	break;
case REMOTE_PROC_DOMAIN_DETACH_DEVICE:
	fn = (dispatch_fn) remoteDispatchDomainDetachDevice;
	args_filter = (xdrproc_t) xdr_remote_domain_detach_device_args;
	args = (char *) &lv_remote_domain_detach_device_args;
	memset (&lv_remote_domain_detach_device_args, 0, sizeof lv_remote_domain_detach_device_args);
	break;
case REMOTE_PROC_DOMAIN_DUMP_XML:
	fn = (dispatch_fn) remoteDispatchDomainDumpXml;
	args_filter = (xdrproc_t) xdr_remote_domain_dump_xml_args;
	args = (char *) &lv_remote_domain_dump_xml_args;
	memset (&lv_remote_domain_dump_xml_args, 0, sizeof lv_remote_domain_dump_xml_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_dump_xml_ret;
	ret = (char *) &lv_remote_domain_dump_xml_ret;
	memset (&lv_remote_domain_dump_xml_ret, 0, sizeof lv_remote_domain_dump_xml_ret);
	break;
case REMOTE_PROC_DOMAIN_GET_AUTOSTART:
	fn = (dispatch_fn) remoteDispatchDomainGetAutostart;
	args_filter = (xdrproc_t) xdr_remote_domain_get_autostart_args;
	args = (char *) &lv_remote_domain_get_autostart_args;
	memset (&lv_remote_domain_get_autostart_args, 0, sizeof lv_remote_domain_get_autostart_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_get_autostart_ret;
	ret = (char *) &lv_remote_domain_get_autostart_ret;
	memset (&lv_remote_domain_get_autostart_ret, 0, sizeof lv_remote_domain_get_autostart_ret);
	break;
case REMOTE_PROC_DOMAIN_GET_INFO:
	fn = (dispatch_fn) remoteDispatchDomainGetInfo;
	args_filter = (xdrproc_t) xdr_remote_domain_get_info_args;
	args = (char *) &lv_remote_domain_get_info_args;
	memset (&lv_remote_domain_get_info_args, 0, sizeof lv_remote_domain_get_info_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_get_info_ret;
	ret = (char *) &lv_remote_domain_get_info_ret;
	memset (&lv_remote_domain_get_info_ret, 0, sizeof lv_remote_domain_get_info_ret);
	break;
case REMOTE_PROC_DOMAIN_GET_MAX_MEMORY:
	fn = (dispatch_fn) remoteDispatchDomainGetMaxMemory;
	args_filter = (xdrproc_t) xdr_remote_domain_get_max_memory_args;
	args = (char *) &lv_remote_domain_get_max_memory_args;
	memset (&lv_remote_domain_get_max_memory_args, 0, sizeof lv_remote_domain_get_max_memory_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_get_max_memory_ret;
	ret = (char *) &lv_remote_domain_get_max_memory_ret;
	memset (&lv_remote_domain_get_max_memory_ret, 0, sizeof lv_remote_domain_get_max_memory_ret);
	break;
case REMOTE_PROC_DOMAIN_GET_MAX_VCPUS:
	fn = (dispatch_fn) remoteDispatchDomainGetMaxVcpus;
	args_filter = (xdrproc_t) xdr_remote_domain_get_max_vcpus_args;
	args = (char *) &lv_remote_domain_get_max_vcpus_args;
	memset (&lv_remote_domain_get_max_vcpus_args, 0, sizeof lv_remote_domain_get_max_vcpus_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_get_max_vcpus_ret;
	ret = (char *) &lv_remote_domain_get_max_vcpus_ret;
	memset (&lv_remote_domain_get_max_vcpus_ret, 0, sizeof lv_remote_domain_get_max_vcpus_ret);
	break;
case REMOTE_PROC_DOMAIN_GET_OS_TYPE:
	fn = (dispatch_fn) remoteDispatchDomainGetOsType;
	args_filter = (xdrproc_t) xdr_remote_domain_get_os_type_args;
	args = (char *) &lv_remote_domain_get_os_type_args;
	memset (&lv_remote_domain_get_os_type_args, 0, sizeof lv_remote_domain_get_os_type_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_get_os_type_ret;
	ret = (char *) &lv_remote_domain_get_os_type_ret;
	memset (&lv_remote_domain_get_os_type_ret, 0, sizeof lv_remote_domain_get_os_type_ret);
	break;
case REMOTE_PROC_DOMAIN_GET_VCPUS:
	fn = (dispatch_fn) remoteDispatchDomainGetVcpus;
	args_filter = (xdrproc_t) xdr_remote_domain_get_vcpus_args;
	args = (char *) &lv_remote_domain_get_vcpus_args;
	memset (&lv_remote_domain_get_vcpus_args, 0, sizeof lv_remote_domain_get_vcpus_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_get_vcpus_ret;
	ret = (char *) &lv_remote_domain_get_vcpus_ret;
	memset (&lv_remote_domain_get_vcpus_ret, 0, sizeof lv_remote_domain_get_vcpus_ret);
	break;
case REMOTE_PROC_DOMAIN_LOOKUP_BY_ID:
	fn = (dispatch_fn) remoteDispatchDomainLookupById;
	args_filter = (xdrproc_t) xdr_remote_domain_lookup_by_id_args;
	args = (char *) &lv_remote_domain_lookup_by_id_args;
	memset (&lv_remote_domain_lookup_by_id_args, 0, sizeof lv_remote_domain_lookup_by_id_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_lookup_by_id_ret;
	ret = (char *) &lv_remote_domain_lookup_by_id_ret;
	memset (&lv_remote_domain_lookup_by_id_ret, 0, sizeof lv_remote_domain_lookup_by_id_ret);
	break;
case REMOTE_PROC_DOMAIN_LOOKUP_BY_NAME:
	fn = (dispatch_fn) remoteDispatchDomainLookupByName;
	args_filter = (xdrproc_t) xdr_remote_domain_lookup_by_name_args;
	args = (char *) &lv_remote_domain_lookup_by_name_args;
	memset (&lv_remote_domain_lookup_by_name_args, 0, sizeof lv_remote_domain_lookup_by_name_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_lookup_by_name_ret;
	ret = (char *) &lv_remote_domain_lookup_by_name_ret;
	memset (&lv_remote_domain_lookup_by_name_ret, 0, sizeof lv_remote_domain_lookup_by_name_ret);
	break;
case REMOTE_PROC_DOMAIN_LOOKUP_BY_UUID:
	fn = (dispatch_fn) remoteDispatchDomainLookupByUuid;
	args_filter = (xdrproc_t) xdr_remote_domain_lookup_by_uuid_args;
	args = (char *) &lv_remote_domain_lookup_by_uuid_args;
	memset (&lv_remote_domain_lookup_by_uuid_args, 0, sizeof lv_remote_domain_lookup_by_uuid_args);
	ret_filter = (xdrproc_t) xdr_remote_domain_lookup_by_uuid_ret;
	ret = (char *) &lv_remote_domain_lookup_by_uuid_ret;
	memset (&lv_remote_domain_lookup_by_uuid_ret, 0, sizeof lv_remote_domain_lookup_by_uuid_ret);
	break;
case REMOTE_PROC_DOMAIN_PIN_VCPU:
	fn = (dispatch_fn) remoteDispatchDomainPinVcpu;
	args_filter = (xdrproc_t) xdr_remote_domain_pin_vcpu_args;
	args = (char *) &lv_remote_domain_pin_vcpu_args;
	memset (&lv_remote_domain_pin_vcpu_args, 0, sizeof lv_remote_domain_pin_vcpu_args);
	break;
case REMOTE_PROC_DOMAIN_REBOOT:
	fn = (dispatch_fn) remoteDispatchDomainReboot;
	args_filter = (xdrproc_t) xdr_remote_domain_reboot_args;
	args = (char *) &lv_remote_domain_reboot_args;
	memset (&lv_remote_domain_reboot_args, 0, sizeof lv_remote_domain_reboot_args);
	break;
case REMOTE_PROC_DOMAIN_RESTORE:
	fn = (dispatch_fn) remoteDispatchDomainRestore;
	args_filter = (xdrproc_t) xdr_remote_domain_restore_args;
	args = (char *) &lv_remote_domain_restore_args;
	memset (&lv_remote_domain_restore_args, 0, sizeof lv_remote_domain_restore_args);
	break;
case REMOTE_PROC_DOMAIN_RESUME:
	fn = (dispatch_fn) remoteDispatchDomainResume;
	args_filter = (xdrproc_t) xdr_remote_domain_resume_args;
	args = (char *) &lv_remote_domain_resume_args;
	memset (&lv_remote_domain_resume_args, 0, sizeof lv_remote_domain_resume_args);
	break;
case REMOTE_PROC_DOMAIN_SAVE:
	fn = (dispatch_fn) remoteDispatchDomainSave;
	args_filter = (xdrproc_t) xdr_remote_domain_save_args;
	args = (char *) &lv_remote_domain_save_args;
	memset (&lv_remote_domain_save_args, 0, sizeof lv_remote_domain_save_args);
	break;
case REMOTE_PROC_DOMAIN_SET_AUTOSTART:
	fn = (dispatch_fn) remoteDispatchDomainSetAutostart;
	args_filter = (xdrproc_t) xdr_remote_domain_set_autostart_args;
	args = (char *) &lv_remote_domain_set_autostart_args;
	memset (&lv_remote_domain_set_autostart_args, 0, sizeof lv_remote_domain_set_autostart_args);
	break;
case REMOTE_PROC_DOMAIN_SET_MAX_MEMORY:
	fn = (dispatch_fn) remoteDispatchDomainSetMaxMemory;
	args_filter = (xdrproc_t) xdr_remote_domain_set_max_memory_args;
	args = (char *) &lv_remote_domain_set_max_memory_args;
	memset (&lv_remote_domain_set_max_memory_args, 0, sizeof lv_remote_domain_set_max_memory_args);
	break;
case REMOTE_PROC_DOMAIN_SET_MEMORY:
	fn = (dispatch_fn) remoteDispatchDomainSetMemory;
	args_filter = (xdrproc_t) xdr_remote_domain_set_memory_args;
	args = (char *) &lv_remote_domain_set_memory_args;
	memset (&lv_remote_domain_set_memory_args, 0, sizeof lv_remote_domain_set_memory_args);
	break;
case REMOTE_PROC_DOMAIN_SET_VCPUS:
	fn = (dispatch_fn) remoteDispatchDomainSetVcpus;
	args_filter = (xdrproc_t) xdr_remote_domain_set_vcpus_args;
	args = (char *) &lv_remote_domain_set_vcpus_args;
	memset (&lv_remote_domain_set_vcpus_args, 0, sizeof lv_remote_domain_set_vcpus_args);
	break;
case REMOTE_PROC_DOMAIN_SHUTDOWN:
	fn = (dispatch_fn) remoteDispatchDomainShutdown;
	args_filter = (xdrproc_t) xdr_remote_domain_shutdown_args;
	args = (char *) &lv_remote_domain_shutdown_args;
	memset (&lv_remote_domain_shutdown_args, 0, sizeof lv_remote_domain_shutdown_args);
	break;
case REMOTE_PROC_DOMAIN_SUSPEND:
	fn = (dispatch_fn) remoteDispatchDomainSuspend;
	args_filter = (xdrproc_t) xdr_remote_domain_suspend_args;
	args = (char *) &lv_remote_domain_suspend_args;
	memset (&lv_remote_domain_suspend_args, 0, sizeof lv_remote_domain_suspend_args);
	break;
case REMOTE_PROC_DOMAIN_UNDEFINE:
	fn = (dispatch_fn) remoteDispatchDomainUndefine;
	args_filter = (xdrproc_t) xdr_remote_domain_undefine_args;
	args = (char *) &lv_remote_domain_undefine_args;
	memset (&lv_remote_domain_undefine_args, 0, sizeof lv_remote_domain_undefine_args);
	break;
case REMOTE_PROC_GET_CAPABILITIES:
	fn = (dispatch_fn) remoteDispatchGetCapabilities;
	ret_filter = (xdrproc_t) xdr_remote_get_capabilities_ret;
	ret = (char *) &lv_remote_get_capabilities_ret;
	memset (&lv_remote_get_capabilities_ret, 0, sizeof lv_remote_get_capabilities_ret);
	break;
case REMOTE_PROC_GET_MAX_VCPUS:
	fn = (dispatch_fn) remoteDispatchGetMaxVcpus;
	args_filter = (xdrproc_t) xdr_remote_get_max_vcpus_args;
	args = (char *) &lv_remote_get_max_vcpus_args;
	memset (&lv_remote_get_max_vcpus_args, 0, sizeof lv_remote_get_max_vcpus_args);
	ret_filter = (xdrproc_t) xdr_remote_get_max_vcpus_ret;
	ret = (char *) &lv_remote_get_max_vcpus_ret;
	memset (&lv_remote_get_max_vcpus_ret, 0, sizeof lv_remote_get_max_vcpus_ret);
	break;
case REMOTE_PROC_GET_TYPE:
	fn = (dispatch_fn) remoteDispatchGetType;
	ret_filter = (xdrproc_t) xdr_remote_get_type_ret;
	ret = (char *) &lv_remote_get_type_ret;
	memset (&lv_remote_get_type_ret, 0, sizeof lv_remote_get_type_ret);
	break;
case REMOTE_PROC_GET_VERSION:
	fn = (dispatch_fn) remoteDispatchGetVersion;
	ret_filter = (xdrproc_t) xdr_remote_get_version_ret;
	ret = (char *) &lv_remote_get_version_ret;
	memset (&lv_remote_get_version_ret, 0, sizeof lv_remote_get_version_ret);
	break;
case REMOTE_PROC_LIST_DEFINED_DOMAINS:
	fn = (dispatch_fn) remoteDispatchListDefinedDomains;
	args_filter = (xdrproc_t) xdr_remote_list_defined_domains_args;
	args = (char *) &lv_remote_list_defined_domains_args;
	memset (&lv_remote_list_defined_domains_args, 0, sizeof lv_remote_list_defined_domains_args);
	ret_filter = (xdrproc_t) xdr_remote_list_defined_domains_ret;
	ret = (char *) &lv_remote_list_defined_domains_ret;
	memset (&lv_remote_list_defined_domains_ret, 0, sizeof lv_remote_list_defined_domains_ret);
	break;
case REMOTE_PROC_LIST_DEFINED_NETWORKS:
	fn = (dispatch_fn) remoteDispatchListDefinedNetworks;
	args_filter = (xdrproc_t) xdr_remote_list_defined_networks_args;
	args = (char *) &lv_remote_list_defined_networks_args;
	memset (&lv_remote_list_defined_networks_args, 0, sizeof lv_remote_list_defined_networks_args);
	ret_filter = (xdrproc_t) xdr_remote_list_defined_networks_ret;
	ret = (char *) &lv_remote_list_defined_networks_ret;
	memset (&lv_remote_list_defined_networks_ret, 0, sizeof lv_remote_list_defined_networks_ret);
	break;
case REMOTE_PROC_LIST_DOMAINS:
	fn = (dispatch_fn) remoteDispatchListDomains;
	args_filter = (xdrproc_t) xdr_remote_list_domains_args;
	args = (char *) &lv_remote_list_domains_args;
	memset (&lv_remote_list_domains_args, 0, sizeof lv_remote_list_domains_args);
	ret_filter = (xdrproc_t) xdr_remote_list_domains_ret;
	ret = (char *) &lv_remote_list_domains_ret;
	memset (&lv_remote_list_domains_ret, 0, sizeof lv_remote_list_domains_ret);
	break;
case REMOTE_PROC_LIST_NETWORKS:
	fn = (dispatch_fn) remoteDispatchListNetworks;
	args_filter = (xdrproc_t) xdr_remote_list_networks_args;
	args = (char *) &lv_remote_list_networks_args;
	memset (&lv_remote_list_networks_args, 0, sizeof lv_remote_list_networks_args);
	ret_filter = (xdrproc_t) xdr_remote_list_networks_ret;
	ret = (char *) &lv_remote_list_networks_ret;
	memset (&lv_remote_list_networks_ret, 0, sizeof lv_remote_list_networks_ret);
	break;
case REMOTE_PROC_NETWORK_CREATE:
	fn = (dispatch_fn) remoteDispatchNetworkCreate;
	args_filter = (xdrproc_t) xdr_remote_network_create_args;
	args = (char *) &lv_remote_network_create_args;
	memset (&lv_remote_network_create_args, 0, sizeof lv_remote_network_create_args);
	break;
case REMOTE_PROC_NETWORK_CREATE_XML:
	fn = (dispatch_fn) remoteDispatchNetworkCreateXml;
	args_filter = (xdrproc_t) xdr_remote_network_create_xml_args;
	args = (char *) &lv_remote_network_create_xml_args;
	memset (&lv_remote_network_create_xml_args, 0, sizeof lv_remote_network_create_xml_args);
	ret_filter = (xdrproc_t) xdr_remote_network_create_xml_ret;
	ret = (char *) &lv_remote_network_create_xml_ret;
	memset (&lv_remote_network_create_xml_ret, 0, sizeof lv_remote_network_create_xml_ret);
	break;
case REMOTE_PROC_NETWORK_DEFINE_XML:
	fn = (dispatch_fn) remoteDispatchNetworkDefineXml;
	args_filter = (xdrproc_t) xdr_remote_network_define_xml_args;
	args = (char *) &lv_remote_network_define_xml_args;
	memset (&lv_remote_network_define_xml_args, 0, sizeof lv_remote_network_define_xml_args);
	ret_filter = (xdrproc_t) xdr_remote_network_define_xml_ret;
	ret = (char *) &lv_remote_network_define_xml_ret;
	memset (&lv_remote_network_define_xml_ret, 0, sizeof lv_remote_network_define_xml_ret);
	break;
case REMOTE_PROC_NETWORK_DESTROY:
	fn = (dispatch_fn) remoteDispatchNetworkDestroy;
	args_filter = (xdrproc_t) xdr_remote_network_destroy_args;
	args = (char *) &lv_remote_network_destroy_args;
	memset (&lv_remote_network_destroy_args, 0, sizeof lv_remote_network_destroy_args);
	break;
case REMOTE_PROC_NETWORK_DUMP_XML:
	fn = (dispatch_fn) remoteDispatchNetworkDumpXml;
	args_filter = (xdrproc_t) xdr_remote_network_dump_xml_args;
	args = (char *) &lv_remote_network_dump_xml_args;
	memset (&lv_remote_network_dump_xml_args, 0, sizeof lv_remote_network_dump_xml_args);
	ret_filter = (xdrproc_t) xdr_remote_network_dump_xml_ret;
	ret = (char *) &lv_remote_network_dump_xml_ret;
	memset (&lv_remote_network_dump_xml_ret, 0, sizeof lv_remote_network_dump_xml_ret);
	break;
case REMOTE_PROC_NETWORK_GET_AUTOSTART:
	fn = (dispatch_fn) remoteDispatchNetworkGetAutostart;
	args_filter = (xdrproc_t) xdr_remote_network_get_autostart_args;
	args = (char *) &lv_remote_network_get_autostart_args;
	memset (&lv_remote_network_get_autostart_args, 0, sizeof lv_remote_network_get_autostart_args);
	ret_filter = (xdrproc_t) xdr_remote_network_get_autostart_ret;
	ret = (char *) &lv_remote_network_get_autostart_ret;
	memset (&lv_remote_network_get_autostart_ret, 0, sizeof lv_remote_network_get_autostart_ret);
	break;
case REMOTE_PROC_NETWORK_GET_BRIDGE_NAME:
	fn = (dispatch_fn) remoteDispatchNetworkGetBridgeName;
	args_filter = (xdrproc_t) xdr_remote_network_get_bridge_name_args;
	args = (char *) &lv_remote_network_get_bridge_name_args;
	memset (&lv_remote_network_get_bridge_name_args, 0, sizeof lv_remote_network_get_bridge_name_args);
	ret_filter = (xdrproc_t) xdr_remote_network_get_bridge_name_ret;
	ret = (char *) &lv_remote_network_get_bridge_name_ret;
	memset (&lv_remote_network_get_bridge_name_ret, 0, sizeof lv_remote_network_get_bridge_name_ret);
	break;
case REMOTE_PROC_NETWORK_LOOKUP_BY_NAME:
	fn = (dispatch_fn) remoteDispatchNetworkLookupByName;
	args_filter = (xdrproc_t) xdr_remote_network_lookup_by_name_args;
	args = (char *) &lv_remote_network_lookup_by_name_args;
	memset (&lv_remote_network_lookup_by_name_args, 0, sizeof lv_remote_network_lookup_by_name_args);
	ret_filter = (xdrproc_t) xdr_remote_network_lookup_by_name_ret;
	ret = (char *) &lv_remote_network_lookup_by_name_ret;
	memset (&lv_remote_network_lookup_by_name_ret, 0, sizeof lv_remote_network_lookup_by_name_ret);
	break;
case REMOTE_PROC_NETWORK_LOOKUP_BY_UUID:
	fn = (dispatch_fn) remoteDispatchNetworkLookupByUuid;
	args_filter = (xdrproc_t) xdr_remote_network_lookup_by_uuid_args;
	args = (char *) &lv_remote_network_lookup_by_uuid_args;
	memset (&lv_remote_network_lookup_by_uuid_args, 0, sizeof lv_remote_network_lookup_by_uuid_args);
	ret_filter = (xdrproc_t) xdr_remote_network_lookup_by_uuid_ret;
	ret = (char *) &lv_remote_network_lookup_by_uuid_ret;
	memset (&lv_remote_network_lookup_by_uuid_ret, 0, sizeof lv_remote_network_lookup_by_uuid_ret);
	break;
case REMOTE_PROC_NETWORK_SET_AUTOSTART:
	fn = (dispatch_fn) remoteDispatchNetworkSetAutostart;
	args_filter = (xdrproc_t) xdr_remote_network_set_autostart_args;
	args = (char *) &lv_remote_network_set_autostart_args;
	memset (&lv_remote_network_set_autostart_args, 0, sizeof lv_remote_network_set_autostart_args);
	break;
case REMOTE_PROC_NETWORK_UNDEFINE:
	fn = (dispatch_fn) remoteDispatchNetworkUndefine;
	args_filter = (xdrproc_t) xdr_remote_network_undefine_args;
	args = (char *) &lv_remote_network_undefine_args;
	memset (&lv_remote_network_undefine_args, 0, sizeof lv_remote_network_undefine_args);
	break;
case REMOTE_PROC_NODE_GET_INFO:
	fn = (dispatch_fn) remoteDispatchNodeGetInfo;
	ret_filter = (xdrproc_t) xdr_remote_node_get_info_ret;
	ret = (char *) &lv_remote_node_get_info_ret;
	memset (&lv_remote_node_get_info_ret, 0, sizeof lv_remote_node_get_info_ret);
	break;
case REMOTE_PROC_NUM_OF_DEFINED_DOMAINS:
	fn = (dispatch_fn) remoteDispatchNumOfDefinedDomains;
	ret_filter = (xdrproc_t) xdr_remote_num_of_defined_domains_ret;
	ret = (char *) &lv_remote_num_of_defined_domains_ret;
	memset (&lv_remote_num_of_defined_domains_ret, 0, sizeof lv_remote_num_of_defined_domains_ret);
	break;
case REMOTE_PROC_NUM_OF_DEFINED_NETWORKS:
	fn = (dispatch_fn) remoteDispatchNumOfDefinedNetworks;
	ret_filter = (xdrproc_t) xdr_remote_num_of_defined_networks_ret;
	ret = (char *) &lv_remote_num_of_defined_networks_ret;
	memset (&lv_remote_num_of_defined_networks_ret, 0, sizeof lv_remote_num_of_defined_networks_ret);
	break;
case REMOTE_PROC_NUM_OF_DOMAINS:
	fn = (dispatch_fn) remoteDispatchNumOfDomains;
	ret_filter = (xdrproc_t) xdr_remote_num_of_domains_ret;
	ret = (char *) &lv_remote_num_of_domains_ret;
	memset (&lv_remote_num_of_domains_ret, 0, sizeof lv_remote_num_of_domains_ret);
	break;
case REMOTE_PROC_NUM_OF_NETWORKS:
	fn = (dispatch_fn) remoteDispatchNumOfNetworks;
	ret_filter = (xdrproc_t) xdr_remote_num_of_networks_ret;
	ret = (char *) &lv_remote_num_of_networks_ret;
	memset (&lv_remote_num_of_networks_ret, 0, sizeof lv_remote_num_of_networks_ret);
	break;
case REMOTE_PROC_OPEN:
	fn = (dispatch_fn) remoteDispatchOpen;
	args_filter = (xdrproc_t) xdr_remote_open_args;
	args = (char *) &lv_remote_open_args;
	memset (&lv_remote_open_args, 0, sizeof lv_remote_open_args);
	break;
