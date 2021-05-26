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
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x6b6c5618, "spi_get_device_id" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0x4ffc57e5, "__devm_regmap_init" },
	{ 0x6028496a, "rtc_nvmem_register" },
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0x1879a385, "rtc_add_group" },
	{ 0xa04a75a7, "devm_watchdog_register_device" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x33822237, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");

MODULE_INFO(srcversion, "7765336F7F7AA39AD9B4E6F");
