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
	{ 0x93007c53, "skb_queue_head" },
	{ 0xe899222d, "ieee80211_rx_irqsafe" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe64f444f, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbdd9c4f1, "__ieee80211_get_assoc_led_name" },
	{ 0xa356d9f3, "skb_unlink" },
	{ 0x25087745, "skb_trim" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x6b5b5484, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0x446c7b26, "ieee80211_free_txskb" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xe3a53f4c, "sort" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x7d976134, "__ieee80211_get_rx_led_name" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1dfadfa, "wiphy_rfkill_set_hw_state" },
	{ 0x2ae38128, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xf6fc3950, "__ieee80211_get_tx_led_name" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3f1c890f, "ieee80211_wake_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x161560e6, "__ieee80211_get_radio_led_name" },
	{ 0x70f515db, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e90322c, "regulatory_hint" },
	{ 0x21167e66, "ieee80211_beacon_loss" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x99cfb896, "skb_put" },
};

MODULE_INFO(depends, "mac80211,cfg80211,crc-ccitt");


MODULE_INFO(srcversion, "84903103E83875348030BD7");
