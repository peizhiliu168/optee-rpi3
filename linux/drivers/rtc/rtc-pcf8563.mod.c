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
	{ 0x9bd00fa, "_dev_info" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x2493047e, "of_clk_add_provider" },
	{ 0xf64d678c, "of_clk_src_simple_get" },
	{ 0x5f294ac7, "devm_clk_register" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8563");
MODULE_ALIAS("of:N*T*Cnxp,pcf8563C*");
MODULE_ALIAS("of:N*T*Cepson,rtc8564");
MODULE_ALIAS("of:N*T*Cepson,rtc8564C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564C*");
MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");

MODULE_INFO(srcversion, "3348EF6C576B13BB999A646");
