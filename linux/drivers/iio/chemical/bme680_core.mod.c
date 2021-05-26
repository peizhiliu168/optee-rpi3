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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x91cc70a4, "iio_read_const_attr" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x4ae48381, "devm_iio_device_alloc" },
	{ 0x903e15de, "__devm_iio_device_register" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab08ecbf, "regmap_get_device" },
	{ 0x33822237, "regmap_write" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "D9DD809574246BA0694731A");
