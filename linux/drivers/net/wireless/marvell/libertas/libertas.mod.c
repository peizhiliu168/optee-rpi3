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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x54c86ed0, "ieee80211_get_num_supported_channels" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xaf8c68cd, "wiphy_free" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x206df454, "cfg80211_connect_done" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x275867e8, "ieee80211_bss_get_elem" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xf00ba6e, "cfg80211_inform_bss_data" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xa02d4dfb, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9553ca85, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x86e81b9d, "cfg80211_get_bss" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xf842c779, "wiphy_unregister" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xbd093a33, "ieee80211_get_channel" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x1b572e30, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x76a8173d, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x1dd80e82, "simple_open" },
	{ 0x2116d007, "request_firmware_nowait" },
	{ 0x2f2da724, "cfg80211_ibss_joined" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x111c3b1e, "netif_device_attach" },
	{ 0x31c82fc2, "netif_device_detach" },
	{ 0x292ccf36, "cfg80211_put_bss" },
	{ 0x6672460c, "wiphy_register" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd8fcf8a0, "wiphy_new_nm" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x126033ef, "netdev_err" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xcc33237e, "cfg80211_disconnected" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e90322c, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xa93b342b, "cfg80211_scan_done" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5d4571b, "release_firmware" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "A7E1D24F8889D8F55590B69");
