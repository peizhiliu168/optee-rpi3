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
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x6497efe5, "devm_hwmon_device_register_with_groups" },
	{ 0x7410aba2, "strreplace" },
	{ 0x4626fae5, "devm_kasprintf" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xf7157b02, "devm_iio_channel_get_all" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37b1c8ad, "iio_get_channel_type" },
	{ 0xbe5ac48d, "iio_read_channel_processed" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Ciio-hwmon");
MODULE_ALIAS("of:N*T*Ciio-hwmonC*");

MODULE_INFO(srcversion, "F16FFE1BEC8EE88C4EBEA61");
