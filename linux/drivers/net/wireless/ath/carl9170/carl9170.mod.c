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
	{ 0xd250bd8c, "ieee80211_rx_napi" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xc5b72bf8, "ieee80211_queue_work" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xab6b7c4f, "usb_get_from_anchor" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0xa0fd6736, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbdd9c4f1, "__ieee80211_get_assoc_led_name" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0x40d8df07, "ieee80211_stop_queues" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x6b5b5484, "ieee80211_stop_queue" },
	{ 0xf51135cb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0x446c7b26, "ieee80211_free_txskb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbd2bcda2, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbac4df0d, "ath_is_mybeacon" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x5792f848, "strlcpy" },
	{ 0x634e201b, "input_set_capability" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4db09129, "__dev_kfree_skb_irq" },
	{ 0x349ac811, "ieee80211_sta_block_awake" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x2116d007, "request_firmware_nowait" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x73500972, "ath_reg_notifier_apply" },
	{ 0x99883059, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x1d828886, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x6561ba51, "usb_queue_reset_device" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xa916b694, "strnlen" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x84a68123, "input_register_device" },
	{ 0x2ae38128, "ieee80211_tx_status_irqsafe" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0x503f0de3, "ieee80211_get_tx_rates" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x3743cdfb, "ieee80211_find_sta" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xf6fc3950, "__ieee80211_get_tx_led_name" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x91221da3, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3f1c890f, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9fed36bb, "ieee80211_restart_hw" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e90322c, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x86b13d2a, "usb_unpoison_anchored_urbs" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xc23454e5, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x93dbddd9, "usb_put_intf" },
	{ 0x95232ff0, "ieee80211_stop_tx_ba_session" },
	{ 0x13679108, "ieee80211_queue_stopped" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "mac80211,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7C910C24AAD5FBCEEB8437A");
