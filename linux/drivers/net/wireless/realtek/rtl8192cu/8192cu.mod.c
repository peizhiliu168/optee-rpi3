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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xaf8c68cd, "wiphy_free" },
	{ 0x206df454, "cfg80211_connect_done" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x7b0798ac, "find_vpid" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x29a09ee6, "dev_get_by_name" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x52b07875, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xa21e8217, "cfg80211_rx_mgmt" },
	{ 0xa439c87b, "filp_close" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x18e82e6c, "cfg80211_mgmt_tx_status" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x9553ca85, "netif_rx" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x8b0ae6e8, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x86e81b9d, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xf842c779, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xdc4da39, "wireless_send_event" },
	{ 0x6c1e1653, "cfg80211_del_sta_sinfo" },
	{ 0xbd093a33, "ieee80211_get_channel" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x76a8173d, "cfg80211_michael_mic_failure" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x33049162, "kill_pid" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf843c5d1, "flush_signals" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x111c3b1e, "netif_device_attach" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x94068913, "cfg80211_roamed" },
	{ 0x292ccf36, "cfg80211_put_bss" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x6672460c, "wiphy_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xe386b089, "cfg80211_ready_on_channel" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xd8fcf8a0, "wiphy_new_nm" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xcc33237e, "cfg80211_disconnected" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x2f57b3b4, "cfg80211_new_sta" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xb386bc2, "dev_alloc_name" },
	{ 0xcf2a6966, "up" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x1486bac4, "cfg80211_remain_on_channel_expired" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa93b342b, "cfg80211_scan_done" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x760a0f4f, "yield" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x60277095, "filp_open" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
	{ 0x5d10ae27, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp17C0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0631d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCDABp8010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp1E1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp094Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCDABp8011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0A8Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp21F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp2E2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "471DB493C13E073DF4EBF64");
