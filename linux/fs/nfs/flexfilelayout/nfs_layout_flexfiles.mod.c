#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x79fd1a73, "pnfs_unregister_layoutdriver" },
	{ 0x1da9ce54, "nfs4_schedule_session_recovery" },
	{ 0xa73464ad, "pnfs_nfs_generic_sync" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd7fdeaaf, "xdr_init_encode" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xedd13202, "nfs4_pnfs_ds_connect" },
	{ 0xdc29230a, "__tracepoint_pnfs_mds_fallback_pg_get_mirror_count" },
	{ 0x8114f42f, "pnfs_generic_clear_request_commit" },
	{ 0x93e9ed87, "nfs42_proc_layouterror" },
	{ 0x95e3f632, "nfs4_setup_sequence" },
	{ 0xbbf030e, "prepare_kernel_cred" },
	{ 0x770e4c23, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa319bfee, "__tracepoint_pnfs_mds_fallback_pg_init_read" },
	{ 0x5954fa4c, "nfs_initiate_commit" },
	{ 0x1d88c676, "pnfs_error_mark_layout_for_return" },
	{ 0x87e6f4ca, "nfs4_pnfs_ds_put" },
	{ 0xd6ed7dda, "__tracepoint_pnfs_mds_fallback_write_done" },
	{ 0x54bef45, "layoutstats_timer" },
	{ 0xca93221b, "nfs4_delete_deviceid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0xeb42baa9, "nfs4_mark_deviceid_unavailable" },
	{ 0xdf05942f, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0x43642761, "nfs4_decode_mp_ds_addr" },
	{ 0x565d24dc, "nfs_initiate_pgio" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x34408d38, "pnfs_generic_commit_pagelist" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0x50a01bac, "pnfs_generic_recover_commit_reqs" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0xdc8c1bc8, "nfs4_sequence_done" },
	{ 0x111dc82, "xdr_reserve_space" },
	{ 0x35375594, "pnfs_generic_pg_test" },
	{ 0xddee8086, "pnfs_update_layout" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0xf105ce0f, "rpc_exit" },
	{ 0x6ae64537, "pnfs_generic_pg_cleanup" },
	{ 0xc6686e3f, "pnfs_generic_write_commit_done" },
	{ 0xe65d6e38, "rpc_delay" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x8c34bd82, "pnfs_generic_layout_insert_lseg" },
	{ 0xbcc86f40, "xdr_init_decode_pages" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xee960d9f, "__tracepoint_pnfs_mds_fallback_read_done" },
	{ 0x546b0680, "rpc_call_start" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x7de365b4, "pnfs_read_resend_pnfs" },
	{ 0x91b6b408, "nfs4_find_get_deviceid" },
	{ 0xef2857f7, "nfs4_find_or_create_ds_client" },
	{ 0x99b4d0d6, "rpc_max_payload" },
	{ 0xbcb23727, "nfs_pageio_reset_write_mds" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x310ffd92, "pnfs_layout_mark_request_commit" },
	{ 0x8342ff79, "pnfs_destroy_layout" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7b206700, "nfs4_pnfs_ds_add" },
	{ 0x4e8fc8f, "pnfs_layoutcommit_inode" },
	{ 0xad37122c, "pnfs_put_lseg" },
	{ 0x4f81c4a4, "nfs4_put_deviceid_node" },
	{ 0x98fb67e, "pnfs_report_layoutstat" },
	{ 0x5308ad33, "pnfs_set_layoutcommit" },
	{ 0x8eaa3e83, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x208f5c30, "__tracepoint_pnfs_mds_fallback_read_pagelist" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4719c367, "nfs4_test_deviceid_unavailable" },
	{ 0x6085edbd, "nfs_map_string_to_numeric" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x3af4045d, "__put_cred" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0x1307be6, "pnfs_generic_pg_readpages" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0x6c61a69d, "pnfs_read_done_resend_to_mds" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x9d010c0e, "rpc_restart_call_prepare" },
	{ 0xc382c72f, "pnfs_generic_pg_writepages" },
	{ 0xa1be0a05, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0xadf57995, "pnfs_generic_pg_check_layout" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1cdde079, "__tracepoint_nfs4_pnfs_read" },
	{ 0x7f59fc5e, "pnfs_write_done_resend_to_mds" },
	{ 0x71bc40e3, "rpc_wake_up" },
	{ 0x3dee5d7b, "rpc_count_iostats_metrics" },
	{ 0x2899fd80, "xdr_inline_decode" },
	{ 0x163831c3, "__tracepoint_nfs4_pnfs_write" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x669fe96d, "param_ops_ushort" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xdc43593d, "xdr_write_pages" },
	{ 0x73d99ee8, "nfs_pageio_reset_read_mds" },
	{ 0x3c7d84cc, "__tracepoint_pnfs_mds_fallback_write_pagelist" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x968a8ede, "nfs4_init_deviceid_node" },
	{ 0x78ecf37b, "__tracepoint_pnfs_mds_fallback_pg_init_write" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdfd74f93, "xdr_set_scratch_buffer" },
	{ 0x63c982a3, "nfs_writeback_update_inode" },
	{ 0xfebd4bac, "nfs4_mark_deviceid_available" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x562596d8, "pnfs_register_layoutdriver" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FD5B8DDB1B0B02162E86FE2");
