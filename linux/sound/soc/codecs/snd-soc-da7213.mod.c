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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7341a7d0, "snd_soc_dapm_get_enum_double" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xcadc75fb, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xe61ddb9b, "device_property_read_string" },
	{ 0xd8851427, "snd_soc_dapm_put_volsw" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xf14bd715, "snd_soc_get_enum_double" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xe215bd38, "snd_soc_component_write" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xdc041d8, "snd_soc_put_enum_double" },
	{ 0xe55441f1, "snd_soc_component_read32" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x1b48124f, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cdlg,da7213");
MODULE_ALIAS("of:N*T*Cdlg,da7213C*");
MODULE_ALIAS("i2c:da7213");

MODULE_INFO(srcversion, "2A3DB70CFB7C1C6ABEBD36B");
