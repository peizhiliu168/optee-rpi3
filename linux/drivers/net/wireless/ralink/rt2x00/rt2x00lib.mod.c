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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc5b72bf8, "ieee80211_queue_work" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x392e4a94, "ieee80211_rts_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xd62064fb, "led_classdev_resume" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb66fbd47, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xc5a90e2c, "wiphy_rfkill_start_polling" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0x40d8df07, "ieee80211_stop_queues" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x6b5b5484, "ieee80211_stop_queue" },
	{ 0x7819027d, "ieee80211_tx_status" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0x446c7b26, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9d63b9a2, "dma_direct_map_page" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x3f9d12f6, "ieee80211_ctstoself_get" },
	{ 0xdb6331ad, "wiphy_rfkill_stop_polling" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd9171401, "dma_direct_unmap_page" },
	{ 0xf9eaf0d, "of_get_mac_address" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1dfadfa, "wiphy_rfkill_set_hw_state" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4f0df7cb, "ieee80211_get_buffered_bc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3f1c890f, "ieee80211_wake_queue" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x70f515db, "ieee80211_get_hdrlen_from_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe324a495, "ieee80211_tx_status_ext" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x18e0fb9b, "led_classdev_suspend" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8aa2ee68, "ieee80211_iterate_interfaces" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5d4571b, "release_firmware" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "08B2F501C8DCDEAADAAA626");
