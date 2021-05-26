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
	{ 0x85262532, "ieee80211_rts_duration" },
	{ 0x884deb9d, "eeprom_93cx6_read" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe899222d, "ieee80211_rx_irqsafe" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc5a90e2c, "wiphy_rfkill_start_polling" },
	{ 0xa356d9f3, "skb_unlink" },
	{ 0x25087745, "skb_trim" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4db09129, "__dev_kfree_skb_irq" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xdb6331ad, "wiphy_rfkill_stop_polling" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x7d976134, "__ieee80211_get_rx_led_name" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0xf1dfadfa, "wiphy_rfkill_set_hw_state" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x2ae38128, "ieee80211_tx_status_irqsafe" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xf6fc3950, "__ieee80211_get_tx_led_name" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4ff3e7b8, "ieee80211_generic_frame_duration" },
	{ 0x161560e6, "__ieee80211_get_radio_led_name" },
	{ 0xcbb11ec6, "ieee80211_ctstoself_duration" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x99cfb896, "skb_put" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x13679108, "ieee80211_queue_stopped" },
};

MODULE_INFO(depends, "mac80211,eeprom_93cx6,cfg80211");

MODULE_ALIAS("usb:v0B05p171Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8198d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p6A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0pCA02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D1pABE6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p8187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0073d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F89BC343FBD244925CC3EC0");
