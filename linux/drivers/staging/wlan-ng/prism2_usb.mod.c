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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xaf8c68cd, "wiphy_free" },
	{ 0x206df454, "cfg80211_connect_done" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x8366596f, "netdev_notice" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xf00ba6e, "cfg80211_inform_bss_data" },
	{ 0x27f006ff, "usb_init_urb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe972806c, "usb_get_status" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xf842c779, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xbd093a33, "ieee80211_get_channel" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x94068913, "cfg80211_roamed" },
	{ 0x31c82fc2, "netif_device_detach" },
	{ 0x292ccf36, "cfg80211_put_bss" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x6672460c, "wiphy_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xd8fcf8a0, "wiphy_new_nm" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x126033ef, "netdev_err" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0xcc33237e, "cfg80211_disconnected" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xa93b342b, "cfg80211_scan_done" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v04BBp0922d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp3642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DEp7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0967p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F3p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v50C2p4013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C02p14EAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap168Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p6106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB2p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9016p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0543p0F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Cp1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "26534BD35470EEE2E15BB32");
