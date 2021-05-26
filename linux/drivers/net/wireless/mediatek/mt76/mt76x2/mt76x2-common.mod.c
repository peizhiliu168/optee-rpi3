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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x9cda0299, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x2f39b8e1, "mt76x02_phy_set_txpower" },
	{ 0x5ec32773, "mt76x02_mcu_calibrate" },
	{ 0x6a022f84, "mt76x02_eeprom_copy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb97d6364, "mt76x02_get_lna_gain" },
	{ 0x35652d92, "mt76_eeprom_override" },
	{ 0x88592a59, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2e011fe7, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x1e7715d6, "mt76x02_get_rx_gain" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12c6bca3, "mt76x02_get_efuse_data" },
	{ 0x909fa668, "mt76x02_ext_pa_enabled" },
	{ 0x4829a47e, "memcpy" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xe12c38b0, "mt76x02_phy_dfs_adjust_agc" },
	{ 0x1a61af48, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib");


MODULE_INFO(srcversion, "91924EBDDD2AC31A6CA8189");
