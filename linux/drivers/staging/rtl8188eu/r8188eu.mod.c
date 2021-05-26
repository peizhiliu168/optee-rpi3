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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x52b07875, "skb_copy" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x9553ca85, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x8b0ae6e8, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xdc4da39, "wireless_send_event" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf843c5d1, "flush_signals" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x604697a0, "lib80211_get_crypto_ops" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x111c3b1e, "netif_device_attach" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xb386bc2, "dev_alloc_name" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x99cfb896, "skb_put" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x760a0f4f, "yield" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211,lib80211");

MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p18F0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApFFEFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "620543B7F6A9685E8F044A4");
