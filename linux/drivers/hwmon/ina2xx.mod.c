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
	{ 0xf9a482f9, "msleep" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x6497efe5, "devm_hwmon_device_register_with_groups" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0x33822237, "regmap_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,ina219");
MODULE_ALIAS("of:N*T*Cti,ina219C*");
MODULE_ALIAS("of:N*T*Cti,ina220");
MODULE_ALIAS("of:N*T*Cti,ina220C*");
MODULE_ALIAS("of:N*T*Cti,ina226");
MODULE_ALIAS("of:N*T*Cti,ina226C*");
MODULE_ALIAS("of:N*T*Cti,ina230");
MODULE_ALIAS("of:N*T*Cti,ina230C*");
MODULE_ALIAS("of:N*T*Cti,ina231");
MODULE_ALIAS("of:N*T*Cti,ina231C*");
MODULE_ALIAS("i2c:ina219");
MODULE_ALIAS("i2c:ina220");
MODULE_ALIAS("i2c:ina226");
MODULE_ALIAS("i2c:ina230");
MODULE_ALIAS("i2c:ina231");

MODULE_INFO(srcversion, "CDD8A792B01C8E8C1E5C753");
