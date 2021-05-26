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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe3f211ae, "__mt76_poll" },
	{ 0xafa4d487, "mt76_sw_scan" },
	{ 0xd607c92c, "mt76x02_conf_tx" },
	{ 0xa320499f, "mt76x02_ampdu_action" },
	{ 0x3f38263c, "mt76u_stop_rx" },
	{ 0x442c1499, "mt76x02u_exit_beacon_config" },
	{ 0x7463784c, "mt76x02_add_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x276710dc, "mt76u_vendor_request" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x939e9b2, "mt76x02u_init_beacon_config" },
	{ 0x7900bfb7, "mt76u_stop_tx" },
	{ 0xe4b6f10c, "mt76u_alloc_queues" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xacc6a485, "mt76x0_mac_start" },
	{ 0xd181838, "mt76x02_bss_info_changed" },
	{ 0x2e56d90a, "mt76x0_init_hardware" },
	{ 0x898a563a, "mt76_sta_state" },
	{ 0x54cbbd6e, "mt76x02_set_rts_threshold" },
	{ 0xc7d91402, "mt76x02u_tx_prepare_skb" },
	{ 0xc5a09021, "mt76x02u_init_mcu" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xd3ef97e4, "mt76_get_survey" },
	{ 0xdadcb967, "mt76u_init" },
	{ 0x7ba1c700, "mt76x02u_mcu_fw_send_data" },
	{ 0x208cdea8, "mt76x0_mac_stop" },
	{ 0x6868d20b, "mt76x02_sta_add" },
	{ 0x673ee5, "mt76x02_tx_status_data" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1ad3d4de, "mt76x02_sta_remove" },
	{ 0xe50dbc1d, "mt76x02_tx" },
	{ 0x5c8e8ee8, "__mt76_poll_msec" },
	{ 0x18caa4c9, "mt76x02_sw_scan_complete" },
	{ 0x7a7e2756, "mt76_set_tim" },
	{ 0x807e3393, "mt76x0_phy_calibrate" },
	{ 0x915d81ef, "mt76x02u_mcu_fw_reset" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2b2b451e, "mt76x0_register_device" },
	{ 0xab4bf6b0, "mt76x0_config" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0xce254910, "mt76u_queues_deinit" },
	{ 0x272f5daf, "mt76x02_queue_rx_skb" },
	{ 0x8d7cd9b6, "mt76x0_chip_onoff" },
	{ 0x3697f3eb, "mt76x02_configure_filter" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x80440b51, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x2b1c34a6, "mt76_alloc_device" },
	{ 0x17d3344c, "mt76x02_sta_rate_tbl_update" },
	{ 0xfc80a961, "mt76u_resume_rx" },
	{ 0x5ff021ca, "mt76x02_sta_ps" },
	{ 0x37a0cba, "kfree" },
	{ 0x1acff996, "mt76_wake_tx_queue" },
	{ 0x8587fafb, "mt76_get_txpower" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xf119fb10, "mt76_release_buffered_frames" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x85e73c4, "mt76x02_set_key" },
	{ 0xc8709cd0, "firmware_request_nowarn" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x89c5838, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "13DBD37545D52ED76C7B512");
