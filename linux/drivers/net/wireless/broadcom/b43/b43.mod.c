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
	{ 0x93007c53, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x611270e6, "ssb_dma_translation" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9657028e, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xc5b72bf8, "ieee80211_queue_work" },
	{ 0x1df60c51, "dma_set_mask" },
	{ 0x392e4a94, "ieee80211_rts_get" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x73689413, "ssb_commit_settings" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5ff02136, "dma_direct_sync_single_for_cpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x55ff21de, "ssb_bus_powerup" },
	{ 0xbf34e288, "dma_free_attrs" },
	{ 0xc5a90e2c, "wiphy_rfkill_start_polling" },
	{ 0xbdd9c4f1, "__ieee80211_get_assoc_led_name" },
	{ 0x7b8a7ac3, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9170ef6c, "__ssb_driver_register" },
	{ 0x63a22796, "param_ops_string" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x6b5b5484, "ieee80211_stop_queue" },
	{ 0x7819027d, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0xdbd7655f, "ssb_driver_unregister" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x467ac3df, "bcma_core_dma_translation" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0x446c7b26, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbd2bcda2, "ieee80211_wake_queues" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xbca5ed47, "ssb_device_enable" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x9d63b9a2, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xcd3be9f4, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6c09e771, "bcma_core_set_clockmode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3eb218d4, "__bcma_driver_register" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x3f9d12f6, "ieee80211_ctstoself_get" },
	{ 0x2116d007, "request_firmware_nowait" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3b402da0, "bcma_chipco_gpio_control" },
	{ 0xd9171401, "dma_direct_unmap_page" },
	{ 0x7d976134, "__ieee80211_get_rx_led_name" },
	{ 0x78b0648b, "bcma_core_is_enabled" },
	{ 0xbbd25fea, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb800c300, "ssb_device_disable" },
	{ 0xb5a25933, "bcma_core_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1dfadfa, "wiphy_rfkill_set_hw_state" },
	{ 0x14f83a41, "bcma_driver_unregister" },
	{ 0x3512f569, "bcma_core_pll_ctl" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xf6fc3950, "__ieee80211_get_tx_led_name" },
	{ 0xf75be0ac, "ssb_set_devtypedata" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3f1c890f, "ieee80211_wake_queue" },
	{ 0x4ff3e7b8, "ieee80211_generic_frame_duration" },
	{ 0x161560e6, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb4923b80, "dma_direct_sync_single_for_device" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0xc4464793, "ssb_bus_may_powerdown" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xcbf91908, "ssb_pmu_set_ldo_paref" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x99cfb896, "skb_put" },
	{ 0x9898c6a9, "ssb_device_is_enabled" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x67d0dd14, "bcma_core_disable" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x4b668bbe, "ieee80211_get_tkip_p1k_iv" },
	{ 0xd349171, "ieee80211_get_response_rate" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,bcma,cfg80211");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "910C8991748A1A6DE3883CF");
