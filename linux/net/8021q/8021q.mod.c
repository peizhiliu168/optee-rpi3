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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x49077ce9, "dev_change_flags" },
	{ 0x29512ff9, "vlan_filter_push_vids" },
	{ 0xb6c2bfdd, "dev_mc_unsync" },
	{ 0x9c35b56e, "vlan_filter_drop_vids" },
	{ 0x81f665d3, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xac05d0bf, "proc_create_single_data" },
	{ 0xd2f2133a, "garp_uninit_applicant" },
	{ 0xa497b461, "vlan_dev_vlan_id" },
	{ 0xabd1923, "dev_uc_add" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x41f5367b, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6941f29f, "vlan_uses_dev" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x5b4e1507, "dev_set_allmulti" },
	{ 0x22035953, "vlan_vid_del" },
	{ 0x1a5a00f5, "call_netdevice_notifiers" },
	{ 0x5c03439b, "linkwatch_fire_event" },
	{ 0x153c6b32, "vlan_vid_add" },
	{ 0x59a891c, "__netpoll_setup" },
	{ 0x82b02d45, "garp_init_applicant" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xbe112120, "proc_remove" },
	{ 0x4e0506f6, "vlan_ioctl_set" },
	{ 0x57e57125, "netpoll_send_skb_on_dev" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xa7e585a3, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x9f23e70c, "garp_register_application" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x7f0e42d4, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xb27d1e7f, "proc_mkdir_data" },
	{ 0x8b618418, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0x82d149cb, "__dev_get_by_index" },
	{ 0x3e0ab92d, "garp_request_leave" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9fb1514e, "eth_header_parse" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x90c9b5f9, "netdev_upper_dev_link" },
	{ 0x6cd078bb, "proc_create_net_data" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0x98a2f1e0, "dev_uc_unsync" },
	{ 0x8988b841, "__dev_get_by_name" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xb7a039a2, "garp_unregister_application" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0xc6dc229e, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x6b686dab, "dev_uc_del" },
	{ 0x5d161261, "dev_uc_sync" },
	{ 0x37c0810f, "__netpoll_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x8123f065, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xa59a8d02, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9102880f, "dev_get_stats" },
	{ 0xe268b1bf, "dev_set_mtu" },
};

MODULE_INFO(depends, "garp");


MODULE_INFO(srcversion, "90AC329A6F699640D74A137");
