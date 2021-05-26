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
	{ 0x9bd00fa, "_dev_info" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x6028496a, "rtc_nvmem_register" },
	{ 0xc95de9bd, "devm_rtc_device_register" },
	{ 0x20de052c, "devm_hwmon_device_register_with_info" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33822237, "regmap_write" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-spi,regmap-i2c");

MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "0C4A63875213CDA8BDEC6BF");
