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
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x3632de, "dev_forward_skb" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x49077ce9, "dev_change_flags" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xb6c2bfdd, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x58d07c94, "ip_local_out" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0x12c2829f, "netdev_rx_handler_register" },
	{ 0xc944ae01, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xab423eb0, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x5b4e1507, "dev_set_allmulti" },
	{ 0x22035953, "vlan_vid_del" },
	{ 0x1a5a00f5, "call_netdevice_notifiers" },
	{ 0x153c6b32, "vlan_vid_add" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x92588d10, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x9553ca85, "netif_rx" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xa7e585a3, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb2a2f3ee, "nf_unregister_net_hooks" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xffb7c514, "ida_free" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x7f0e42d4, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8b618418, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0x82d149cb, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x20ed1506, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xf6a849e5, "ip6_route_output_flags" },
	{ 0xe42eeb37, "nf_register_net_hooks" },
	{ 0x8d29fc37, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9fb1514e, "eth_header_parse" },
	{ 0xf3d29f90, "netdev_rx_handler_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x90c9b5f9, "netdev_upper_dev_link" },
	{ 0x126033ef, "netdev_err" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0x98a2f1e0, "dev_uc_unsync" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb673e9e, "eth_header_cache" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x5d161261, "dev_uc_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa5bab0b7, "ip6_local_out" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x8123f065, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x98bc1045, "netdev_is_rx_handler_busy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xa59a8d02, "dev_mc_sync" },
	{ 0x2d132a18, "dev_pre_changeaddr_notify" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x92e2617e, "ip6_route_input_lookup" },
	{ 0x4198ca95, "__do_once_done" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "212B3D0C11545A5CB3F5A03");
