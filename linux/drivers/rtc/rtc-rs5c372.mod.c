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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0x75534cf3, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0xc95de9bd, "devm_rtc_device_register" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x83564cbc, "i2c_smbus_read_i2c_block_data" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cricoh,r2025sd");
MODULE_ALIAS("of:N*T*Cricoh,r2025sdC*");
MODULE_ALIAS("of:N*T*Cricoh,r2221tl");
MODULE_ALIAS("of:N*T*Cricoh,r2221tlC*");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372a");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372aC*");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372b");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372bC*");
MODULE_ALIAS("of:N*T*Cricoh,rv5c386");
MODULE_ALIAS("of:N*T*Cricoh,rv5c386C*");
MODULE_ALIAS("of:N*T*Cricoh,rv5c387a");
MODULE_ALIAS("of:N*T*Cricoh,rv5c387aC*");
MODULE_ALIAS("i2c:r2025sd");
MODULE_ALIAS("i2c:r2221tl");
MODULE_ALIAS("i2c:rs5c372a");
MODULE_ALIAS("i2c:rs5c372b");
MODULE_ALIAS("i2c:rv5c386");
MODULE_ALIAS("i2c:rv5c387a");

MODULE_INFO(srcversion, "B3A40A6DFE28BCCA5FC9630");
