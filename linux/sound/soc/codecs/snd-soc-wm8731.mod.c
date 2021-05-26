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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0x7341a7d0, "snd_soc_dapm_get_enum_double" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xcadc75fb, "snd_soc_dapm_get_volsw" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd8851427, "snd_soc_dapm_put_volsw" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x766d3ded, "snd_ctl_boolean_mono_info" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xe145866f, "snd_soc_dapm_sync" },
	{ 0xe215bd38, "snd_soc_component_write" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x1efcfdc8, "regcache_mark_dirty" },
	{ 0xe55441f1, "snd_soc_component_read32" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x33822237, "regmap_write" },
	{ 0xf6880dee, "regcache_sync" },
	{ 0x1b48124f, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,regmap-spi,snd-soc-core,snd,regmap-i2c");

MODULE_ALIAS("of:N*T*Cwlf,wm8731");
MODULE_ALIAS("of:N*T*Cwlf,wm8731C*");
MODULE_ALIAS("i2c:wm8731");

MODULE_INFO(srcversion, "FFC351CEAD4422DF4DD96C8");
