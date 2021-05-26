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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc95de9bd, "devm_rtc_device_register" },
	{ 0xfe0f39a3, "devm_i2c_new_dummy_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cs35390a");
MODULE_ALIAS("of:N*T*Cs35390aC*");
MODULE_ALIAS("of:N*T*Csii,s35390a");
MODULE_ALIAS("of:N*T*Csii,s35390aC*");
MODULE_ALIAS("i2c:s35390a");

MODULE_INFO(srcversion, "42E3D4D88AAAF5B1AAA96C5");
