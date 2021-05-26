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
	{ 0xe899222d, "ieee80211_rx_irqsafe" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8af131a9, "_dev_notice" },
	{ 0x25087745, "skb_trim" },
	{ 0x40d8df07, "ieee80211_stop_queues" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x446c7b26, "ieee80211_free_txskb" },
	{ 0xbd2bcda2, "ieee80211_wake_queues" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x2ae38128, "ieee80211_tx_status_irqsafe" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x70f515db, "ieee80211_get_hdrlen_from_skb" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5aeaa276, "ieee80211_get_tkip_p2k" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v160Ap3184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D2898C3AE98C36E5001BA27");
