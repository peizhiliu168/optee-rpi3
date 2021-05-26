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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x1ddea7e3, "snd_soc_register_component" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xe83ed9d8, "snd_soc_put_volsw_range" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0x9081e7c, "snd_soc_info_volsw_range" },
	{ 0x14b54f15, "snd_soc_get_volsw_range" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2306d84e, "snd_soc_unregister_component" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xf14bd715, "snd_soc_get_enum_double" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0xdc041d8, "snd_soc_put_enum_double" },
	{ 0x268ff222, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:i-sabre-codec");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-codec");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-codecC*");

MODULE_INFO(srcversion, "0AC5F3E0FBDA8181672744A");
