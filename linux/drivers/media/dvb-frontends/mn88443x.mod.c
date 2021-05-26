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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8733236, "intlog10" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xea2d52de, "i2c_unregister_device" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x33822237, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4829a47e, "memcpy" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf27e214b, "i2c_new_dummy_device" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:mn884433");
MODULE_ALIAS("i2c:mn884434-0");
MODULE_ALIAS("i2c:mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884433");
MODULE_ALIAS("of:N*T*Csocionext,mn884433C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1C*");

MODULE_INFO(srcversion, "E14B5441D273AEA368175B0");
