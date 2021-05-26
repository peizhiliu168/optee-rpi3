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
	{ 0xf9a482f9, "msleep" },
	{ 0xebbbea1c, "gpiod_direction_output_raw" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9ab16bb6, "w1_add_master_device" },
	{ 0x3c68711b, "gpiod_direction_output" },
	{ 0x1a598530, "devm_gpiod_get_index_optional" },
	{ 0xa90ce01, "devm_gpiod_get_index" },
	{ 0x14d91d5f, "of_get_property" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xbde4998e, "of_root" },
	{ 0xb90110fa, "gpiod_get_value" },
	{ 0x3f6d5174, "w1_remove_master_device" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

MODULE_INFO(srcversion, "89D33780A3861BE22B688C6");
