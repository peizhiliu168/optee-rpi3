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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x99f30429, "simple_attr_release" },
	{ 0xd41e02ae, "simple_attr_write" },
	{ 0xfce1fc17, "simple_attr_read" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc8c36840, "register_netdevice" },
	{ 0xb386bc2, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x9a775031, "__class_create" },
	{ 0x909aa57c, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xeca1aa47, "genl_register_family" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x8e90322c, "regulatory_hint" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xf658ca70, "wiphy_apply_custom_regulatory" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbb889b3b, "device_bind_driver" },
	{ 0x1cb9f182, "device_create" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x2311a62b, "ieee80211_probereq_get" },
	{ 0x3ed80e5a, "ieee80211_csa_finish" },
	{ 0x8ce54d55, "ieee80211_csa_is_complete" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0x503f0de3, "ieee80211_get_tx_rates" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x1999cf1b, "__skb_ext_put" },
	{ 0xc944ae01, "dst_release" },
	{ 0x35daae0d, "skb_add_rx_frag" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x52b07875, "skb_copy" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0xe899222d, "ieee80211_rx_irqsafe" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x2ae38128, "ieee80211_tx_status_irqsafe" },
	{ 0xa356d9f3, "skb_unlink" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0x4c5de0fb, "device_release_driver" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x311b5e8d, "netlink_broadcast" },
	{ 0xc815530c, "init_net" },
	{ 0xb3ddbf7d, "genl_notify" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0x446c7b26, "ieee80211_free_txskb" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x25087745, "skb_trim" },
	{ 0xeb629393, "genlmsg_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1d828886, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xc23454e5, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9f2aa12b, "ieee80211_scan_completed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x160be143, "ieee80211_ready_on_channel" },
	{ 0xc28efd67, "ieee80211_remain_on_channel_expired" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x47bd7db, "cfg80211_vendor_cmd_reply" },
	{ 0x51c12935, "__cfg80211_alloc_reply_skb" },
	{ 0x15430180, "__cfg80211_send_event_skb" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x7d5be58d, "__cfg80211_alloc_event_skb" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb66fbd47, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xeae0ba2e, "ieee80211_radar_detected" },
	{ 0x95bcaecf, "simple_attr_open" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xdcb764ad, "memset" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "cfg80211,mac80211");


MODULE_INFO(srcversion, "725F49FCDAC0BF6BE531D9C");
