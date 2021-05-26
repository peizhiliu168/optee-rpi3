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
	{ 0x1758677c, "mt76x02_remove_interface" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xcf59f434, "mt76x02_phy_set_txdac" },
	{ 0x87ad0df0, "mt76x2_phy_set_txpower" },
	{ 0x70864fb, "mt76x2_phy_set_txpower_regs" },
	{ 0xed257d80, "mt76x2_read_rx_gain" },
	{ 0xe3f211ae, "__mt76_poll" },
	{ 0x63a9b78b, "mt76x02_mac_wcid_setup" },
	{ 0xafa4d487, "mt76_sw_scan" },
	{ 0xd3d74d30, "mt76x02_mcu_function_select" },
	{ 0xd607c92c, "mt76x02_conf_tx" },
	{ 0x5ec32773, "mt76x02_mcu_calibrate" },
	{ 0xa320499f, "mt76x02_ampdu_action" },
	{ 0x3f38263c, "mt76u_stop_rx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7463784c, "mt76x02_add_interface" },
	{ 0x276710dc, "mt76u_vendor_request" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x939e9b2, "mt76x02u_init_beacon_config" },
	{ 0x7900bfb7, "mt76u_stop_tx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe4b6f10c, "mt76u_alloc_queues" },
	{ 0x3b3428b4, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc302687a, "mt76x2_phy_update_channel_gain" },
	{ 0xfba77098, "mt76x02_init_agc_gain" },
	{ 0xd181838, "mt76x02_bss_info_changed" },
	{ 0x40d8df07, "ieee80211_stop_queues" },
	{ 0x7858c9ac, "mt76x2_phy_tssi_compensate" },
	{ 0x898a563a, "mt76_sta_state" },
	{ 0x94492d2d, "mt76x2_mcu_init_gain" },
	{ 0xc7d91402, "mt76x02u_tx_prepare_skb" },
	{ 0xc5a09021, "mt76x02u_init_mcu" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x2bbfe9e, "mt76x02_init_debugfs" },
	{ 0xd3ef97e4, "mt76_get_survey" },
	{ 0xdadcb967, "mt76u_init" },
	{ 0x7ba1c700, "mt76x02u_mcu_fw_send_data" },
	{ 0x557394cd, "mt76x2_init_txpower" },
	{ 0x58ddfc3d, "mt76x2_mcu_load_cr" },
	{ 0x6868d20b, "mt76x02_sta_add" },
	{ 0x673ee5, "mt76x02_tx_status_data" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x6a2ceb8f, "mt76x02_edcca_init" },
	{ 0x1564f912, "mt76x02_phy_set_rxpath" },
	{ 0x1ad3d4de, "mt76x02_sta_remove" },
	{ 0x88592a59, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xbd2bcda2, "ieee80211_wake_queues" },
	{ 0xe50dbc1d, "mt76x02_tx" },
	{ 0x5c8e8ee8, "__mt76_poll_msec" },
	{ 0x3f3dfb63, "mt76x02_init_device" },
	{ 0x21be6e15, "mt76_set_channel" },
	{ 0xac8c1a17, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7737db2d, "mt76x02_phy_set_bw" },
	{ 0x18caa4c9, "mt76x02_sw_scan_complete" },
	{ 0x7a7e2756, "mt76_set_tim" },
	{ 0x2c8b2527, "mt76_register_device" },
	{ 0xa38b1ab9, "mt76x02_mac_setaddr" },
	{ 0x915d81ef, "mt76x02u_mcu_fw_reset" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0xce254910, "mt76u_queues_deinit" },
	{ 0x272f5daf, "mt76x02_queue_rx_skb" },
	{ 0x3697f3eb, "mt76x02_configure_filter" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8b1a662e, "mt76x2_configure_tx_delay" },
	{ 0x80440b51, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x6a3ab6d6, "mt76x2_mac_stop" },
	{ 0x909fa668, "mt76x02_ext_pa_enabled" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xc9d4014e, "mt76x02_mac_shared_key_setup" },
	{ 0x2b1c34a6, "mt76_alloc_device" },
	{ 0x17d3344c, "mt76x02_sta_rate_tbl_update" },
	{ 0xfc80a961, "mt76u_resume_rx" },
	{ 0x5ff021ca, "mt76x02_sta_ps" },
	{ 0x4f1af948, "mt76x2_apply_gain_adj" },
	{ 0x1acff996, "mt76_wake_tx_queue" },
	{ 0x7ee6d7c8, "mt76x02_mcu_set_radio_state" },
	{ 0xe3062fb, "mt76x2_mcu_set_channel" },
	{ 0xb33c69a3, "mt76x2_reset_wlan" },
	{ 0xfcfc7cd9, "mt76_write_mac_initvals" },
	{ 0x8587fafb, "mt76_get_txpower" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xf119fb10, "mt76_release_buffered_frames" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x85e73c4, "mt76x02_set_key" },
	{ 0xc853d016, "mt76x02_set_ethtool_fwver" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x89c5838, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mt76-usb,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E89066E16A0E2CA46727D80");
