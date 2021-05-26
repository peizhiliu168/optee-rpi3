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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0xe4bcc913, "devm_gpiod_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x1ddea7e3, "snd_soc_register_component" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2306d84e, "snd_soc_unregister_component" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xf14bd715, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0xdc041d8, "snd_soc_put_enum_double" },
	{ 0xe5ab638a, "of_property_read_variable_u16_array" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x33822237, "regmap_write" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:allo-cs43198");
MODULE_ALIAS("of:N*T*Callo,allo-cs43198");
MODULE_ALIAS("of:N*T*Callo,allo-cs43198C*");

MODULE_INFO(srcversion, "1FF4C04CDC8A36359B96F4E");
