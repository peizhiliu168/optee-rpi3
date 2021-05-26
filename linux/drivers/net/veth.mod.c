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
	{ 0xbba2b2fc, "ethtool_op_get_ts_info" },
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x2751b59e, "passthru_features_check" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x1d2ee0f4, "napi_complete_done" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x93b2e2dc, "skb_headers_offset_update" },
	{ 0xf5031e3c, "skb_copy_header" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xd115d6f0, "napi_gro_receive" },
	{ 0xb3231137, "bpf_redirect_info" },
	{ 0x20835a9f, "__xdp_release_frame" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x99cfb896, "skb_put" },
	{ 0x95925ab3, "build_skb" },
	{ 0xd653b126, "sched_clock" },
	{ 0xe1bc661c, "xdp_do_redirect" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xcb716c05, "xdp_convert_zc_to_xdp_frame" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x9e08d700, "__tracepoint_xdp_bulk_tx" },
	{ 0xd902bbc5, "xdp_return_frame_rx_napi" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x8123f065, "netdev_update_features" },
	{ 0x542f5f76, "bpf_prog_put" },
	{ 0xd26a07c4, "netif_napi_add" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x8ab0d507, "xdp_rxq_info_reg" },
	{ 0x8002109c, "xdp_rxq_info_reg_mem_model" },
	{ 0x2336f8e9, "xdp_rxq_info_is_reg" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9553ca85, "netif_rx" },
	{ 0xc27bd86c, "__napi_schedule" },
	{ 0x7ae03454, "napi_schedule_prep" },
	{ 0x4f25db23, "skb_tstamp_tx" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x24646300, "__dev_forward_skb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x50160a69, "__put_net" },
	{ 0xae88244a, "rtnl_configure_link" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xc8c36840, "register_netdevice" },
	{ 0xb2e0778e, "rtnl_create_link" },
	{ 0x9d753db9, "rtnl_link_get_net" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x9af7db4f, "xdp_rxq_info_unreg" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xb3d5245f, "netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x34843d8e, "napi_hash_del" },
	{ 0x8ca01852, "napi_disable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x2c0bd121, "xdp_return_frame" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A04ABDF64AF6251560FA7AF");
