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
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x2493047e, "of_clk_add_provider" },
	{ 0xf64d678c, "of_clk_src_simple_get" },
	{ 0x4369f574, "clk_register" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x83564cbc, "i2c_smbus_read_i2c_block_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75534cf3, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,m41t62");
MODULE_ALIAS("of:N*T*Cst,m41t62C*");
MODULE_ALIAS("of:N*T*Cst,m41t65");
MODULE_ALIAS("of:N*T*Cst,m41t65C*");
MODULE_ALIAS("of:N*T*Cst,m41t80");
MODULE_ALIAS("of:N*T*Cst,m41t80C*");
MODULE_ALIAS("of:N*T*Cst,m41t81");
MODULE_ALIAS("of:N*T*Cst,m41t81C*");
MODULE_ALIAS("of:N*T*Cst,m41t81s");
MODULE_ALIAS("of:N*T*Cst,m41t81sC*");
MODULE_ALIAS("of:N*T*Cst,m41t82");
MODULE_ALIAS("of:N*T*Cst,m41t82C*");
MODULE_ALIAS("of:N*T*Cst,m41t83");
MODULE_ALIAS("of:N*T*Cst,m41t83C*");
MODULE_ALIAS("of:N*T*Cst,m41t84");
MODULE_ALIAS("of:N*T*Cst,m41t84C*");
MODULE_ALIAS("of:N*T*Cst,m41t85");
MODULE_ALIAS("of:N*T*Cst,m41t85C*");
MODULE_ALIAS("of:N*T*Cst,m41t87");
MODULE_ALIAS("of:N*T*Cst,m41t87C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv4162C*");
MODULE_ALIAS("of:N*T*Cst,rv4162");
MODULE_ALIAS("of:N*T*Cst,rv4162C*");
MODULE_ALIAS("of:N*T*Crv4162");
MODULE_ALIAS("of:N*T*Crv4162C*");
MODULE_ALIAS("i2c:m41t62");
MODULE_ALIAS("i2c:m41t65");
MODULE_ALIAS("i2c:m41t80");
MODULE_ALIAS("i2c:m41t81");
MODULE_ALIAS("i2c:m41t81s");
MODULE_ALIAS("i2c:m41t82");
MODULE_ALIAS("i2c:m41t83");
MODULE_ALIAS("i2c:m41st84");
MODULE_ALIAS("i2c:m41st85");
MODULE_ALIAS("i2c:m41st87");
MODULE_ALIAS("i2c:rv4162");

MODULE_INFO(srcversion, "6282DCE36305DBD4804E02D");
