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
	{ 0x279ab61b, "driver_unregister" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0xc95de9bd, "devm_rtc_device_register" },
	{ 0x6497efe5, "devm_hwmon_device_register_with_groups" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-spi,regmap-i2c");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029C*");
MODULE_ALIAS("of:N*T*Crv3029");
MODULE_ALIAS("of:N*T*Crv3029C*");
MODULE_ALIAS("of:N*T*Crv3029c2");
MODULE_ALIAS("of:N*T*Crv3029c2C*");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2C*");
MODULE_ALIAS("i2c:rv3029");
MODULE_ALIAS("i2c:rv3029c2");

MODULE_INFO(srcversion, "2FC92EE5461669DB46338F4");
