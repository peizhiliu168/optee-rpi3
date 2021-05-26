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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x295b4935, "rtl_deinit_deferred_work" },
	{ 0x3515377e, "rtl_deinit_core" },
	{ 0xab6b7c4f, "usb_get_from_anchor" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x7916451, "_rtl_dbg_trace" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xdce67214, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x337c9427, "rtl_action_proc" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0xb864a652, "rtl_init_rx_config" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x2ae38128, "ieee80211_tx_status_irqsafe" },
	{ 0xef6d6b89, "rtl_ops" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x93e951e3, "rtl_beacon_statistic" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "D4E0FACB56D933F77934FAB");
