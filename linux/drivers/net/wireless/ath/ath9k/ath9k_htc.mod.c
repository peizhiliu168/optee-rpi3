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
	{ 0x2d3385d3, "system_wq" },
	{ 0xaba3525f, "ath9k_hw_set_txq_props" },
	{ 0x3ed80e5a, "ieee80211_csa_finish" },
	{ 0x7078477d, "ath9k_hw_init" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x153268cb, "ath9k_cmn_get_channel" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xf804711a, "ath9k_hw_deinit" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x4c5de0fb, "device_release_driver" },
	{ 0x39d05de0, "ath9k_hw_set_gpio" },
	{ 0x7ae279aa, "ath9k_cmn_init_crypto" },
	{ 0xc5b72bf8, "ieee80211_queue_work" },
	{ 0xe28e19f3, "ath9k_cmn_process_rate" },
	{ 0x8ce54d55, "ieee80211_csa_is_complete" },
	{ 0xf77d6c25, "ath9k_hw_btcoex_enable" },
	{ 0x1e7813e3, "ath9k_hw_wait" },
	{ 0x351a1093, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0xdb746f7d, "ath9k_hw_stopdmarecv" },
	{ 0x1dcd71c4, "ath_key_delete" },
	{ 0x58b3c7ba, "ath9k_cmn_update_txpow" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0x22880dfc, "ath9k_hw_gpio_get" },
	{ 0xa0fd6736, "ath_regd_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb66fbd47, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xf21a70e7, "ath9k_hw_setrxfilter" },
	{ 0xdf28d3b7, "ath9k_hw_get_txq_props" },
	{ 0xa8dff4e3, "ath9k_hw_releasetxqueue" },
	{ 0xb543a354, "ath9k_hw_reset_tsf" },
	{ 0xc5a90e2c, "wiphy_rfkill_start_polling" },
	{ 0xbf35235d, "usb_get_urb" },
	{ 0xf7b0d4e, "ath9k_cmn_reload_chainmask" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb59f169e, "ath9k_cmn_init_channels_rates" },
	{ 0x25087745, "skb_trim" },
	{ 0x40d8df07, "ieee80211_stop_queues" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0xfd94814e, "complete_all" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x7819027d, "ieee80211_tx_status" },
	{ 0x435a50ed, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb1680df7, "ath9k_hw_setopmode" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x2e60b37e, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf5d05888, "ath9k_hw_resettxqueue" },
	{ 0x35feaa7b, "ath9k_hw_gettsf64" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0xebee40df, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x9d00bc7c, "ath9k_hw_set_tsfadjust" },
	{ 0x503ebd00, "ath9k_cmn_beacon_config_ap" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xbd2bcda2, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x87ad2457, "ath9k_hw_btcoex_disable" },
	{ 0xe00c7933, "ath9k_hw_getrxfilter" },
	{ 0x72923a5b, "ath9k_hw_ani_monitor" },
	{ 0xbac4df0d, "ath_is_mybeacon" },
	{ 0x48c9ef64, "ath9k_cmn_beacon_config_adhoc" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xb27f8ed, "ath9k_cmn_process_rssi" },
	{ 0x5a921311, "strncmp" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xdb6331ad, "wiphy_rfkill_stop_polling" },
	{ 0x2116d007, "request_firmware_nowait" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x688c8766, "ath9k_hw_write_associd" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x73500972, "ath_reg_notifier_apply" },
	{ 0x99883059, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe5d0ebe4, "ath9k_hw_init_btcoex_hw" },
	{ 0x1d828886, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xe467812e, "ath9k_hw_beaconq_setup" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xe674b51f, "ath9k_hw_name" },
	{ 0xdecad6e4, "ath9k_hw_init_global_settings" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xf7e21a24, "ath9k_hw_settsf64" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1dfadfa, "wiphy_rfkill_set_hw_state" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x112aab1b, "ath9k_hw_beaconinit" },
	{ 0x3743cdfb, "ieee80211_find_sta" },
	{ 0x4f0df7cb, "ieee80211_get_buffered_bc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfd8505d2, "usb_interrupt_msg" },
	{ 0x99989890, "ath9k_hw_gpio_free" },
	{ 0x72449575, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xbd9e9686, "ath9k_hw_setrxabort" },
	{ 0xb9374a5f, "ath9k_cmn_beacon_config_sta" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbcc8bbf, "ath_hw_setbssidmask" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa8bd9654, "ath9k_cmn_rx_skb_postprocess" },
	{ 0xe46bfdb7, "ath9k_hw_phy_disable" },
	{ 0x161560e6, "__ieee80211_get_radio_led_name" },
	{ 0x70f515db, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf111d687, "ath9k_hw_setpower" },
	{ 0xc5685f20, "__ieee80211_create_tpt_led_trigger" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0xfd157b83, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e90322c, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa56a0e56, "ath9k_hw_setmcastfilter" },
	{ 0x930c8c1e, "ieee80211_start_tx_ba_session" },
	{ 0x98972d13, "ath9k_hw_gpio_request_out" },
	{ 0x9050f959, "ath9k_hw_startpcureceive" },
	{ 0xa154c038, "ath9k_hw_setuptxqueue" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x230bcc8, "ath9k_hw_reset" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0xf1580a78, "ath9k_cmn_rx_accept" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x4fbe195f, "ath9k_hw_btcoex_init_3wire" },
	{ 0xf88598ad, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x29d5a771, "ath9k_hw_reset_calvalid" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xc23454e5, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D7CDD42B7CDD29771129174");
