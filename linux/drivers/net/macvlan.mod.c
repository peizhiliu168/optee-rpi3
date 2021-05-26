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
	{ 0xc8c36840, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x3632de, "dev_forward_skb" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xb6c2bfdd, "dev_mc_unsync" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xabd1923, "dev_uc_add" },
	{ 0x24646300, "__dev_forward_skb" },
	{ 0x221c44a4, "dev_mc_add_excl" },
	{ 0x12c2829f, "netdev_rx_handler_register" },
	{ 0xe372a27a, "dev_uc_add_excl" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xab423eb0, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5b4e1507, "dev_set_allmulti" },
	{ 0x22035953, "vlan_vid_del" },
	{ 0x1a5a00f5, "call_netdevice_notifiers" },
	{ 0x5c03439b, "linkwatch_fire_event" },
	{ 0x153c6b32, "vlan_vid_add" },
	{ 0x59a891c, "__netpoll_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x57e57125, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x4a73db4b, "dev_set_mac_address" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x5698d7b1, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xa7e585a3, "__ethtool_get_link_ksettings" },
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbf2bd1d6, "dev_mc_del" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x7f0e42d4, "netdev_upper_dev_unlink" },
	{ 0xa2ae2c45, "ndo_dflt_fdb_dump" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8b618418, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0x82d149cb, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x8d29fc37, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf3d29f90, "netdev_rx_handler_unregister" },
	{ 0x9fb1514e, "eth_header_parse" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x2751b59e, "passthru_features_check" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x90c9b5f9, "netdev_upper_dev_link" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0x98a2f1e0, "dev_uc_unsync" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0xc6dc229e, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b1e28b0, "dev_change_proto_down_generic" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb673e9e, "eth_header_cache" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x6b686dab, "dev_uc_del" },
	{ 0x5d161261, "dev_uc_sync" },
	{ 0x37c0810f, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x8123f065, "netdev_update_features" },
	{ 0xb437f0fe, "dev_queue_xmit_accel" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x98bc1045, "netdev_is_rx_handler_busy" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa59a8d02, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xe268b1bf, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D37EBBED69D1EBDA3940F8");
