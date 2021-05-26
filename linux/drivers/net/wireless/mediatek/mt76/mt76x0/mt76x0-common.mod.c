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
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x9cda0299, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xcf59f434, "mt76x02_phy_set_txdac" },
	{ 0xe3f211ae, "__mt76_poll" },
	{ 0x63a9b78b, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x2f39b8e1, "mt76x02_phy_set_txpower" },
	{ 0xd3d74d30, "mt76x02_mcu_function_select" },
	{ 0x5ec32773, "mt76x02_mcu_calibrate" },
	{ 0x6a022f84, "mt76x02_eeprom_copy" },
	{ 0xb4ff3f76, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x67d100f5, "mt76x02_dfs_init_params" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3b3428b4, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfba77098, "mt76x02_init_agc_gain" },
	{ 0x40d8df07, "ieee80211_stop_queues" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x2bbfe9e, "mt76x02_init_debugfs" },
	{ 0xb97d6364, "mt76x02_get_lna_gain" },
	{ 0x6a2ceb8f, "mt76x02_edcca_init" },
	{ 0x1564f912, "mt76x02_phy_set_rxpath" },
	{ 0x88592a59, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xbd2bcda2, "ieee80211_wake_queues" },
	{ 0x5c8e8ee8, "__mt76_poll_msec" },
	{ 0x3f3dfb63, "mt76x02_init_device" },
	{ 0x21be6e15, "mt76_set_channel" },
	{ 0xac8c1a17, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7737db2d, "mt76x02_phy_set_bw" },
	{ 0x2c8b2527, "mt76_register_device" },
	{ 0xa38b1ab9, "mt76x02_mac_setaddr" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2e011fe7, "mt76_eeprom_init" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x1e7715d6, "mt76x02_get_rx_gain" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12c6bca3, "mt76x02_get_efuse_data" },
	{ 0x909fa668, "mt76x02_ext_pa_enabled" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xc9d4014e, "mt76x02_mac_shared_key_setup" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe12c38b0, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x1a61af48, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");


MODULE_INFO(srcversion, "D04847EA286BBB0116F886A");
