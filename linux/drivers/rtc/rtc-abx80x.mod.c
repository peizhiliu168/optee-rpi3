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
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1879a385, "rtc_add_group" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0xa04a75a7, "devm_watchdog_register_device" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x83564cbc, "i2c_smbus_read_i2c_block_data" },
	{ 0x75534cf3, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x3c85c284, "_dev_alert" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:abx80x");
MODULE_ALIAS("i2c:ab0801");
MODULE_ALIAS("i2c:ab0803");
MODULE_ALIAS("i2c:ab0804");
MODULE_ALIAS("i2c:ab0805");
MODULE_ALIAS("i2c:ab1801");
MODULE_ALIAS("i2c:ab1803");
MODULE_ALIAS("i2c:ab1804");
MODULE_ALIAS("i2c:ab1805");
MODULE_ALIAS("i2c:rv1805");

MODULE_INFO(srcversion, "A190EA3AD84CD3F0B97AF90");
