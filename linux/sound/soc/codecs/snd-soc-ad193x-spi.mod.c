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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x8297215a, "ad193x_regmap_config" },
	{ 0x372748cc, "ad193x_probe" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6b6c5618, "spi_get_device_id" },
};

MODULE_INFO(depends, "regmap-spi,snd-soc-ad193x");

MODULE_ALIAS("spi:ad193x");
MODULE_ALIAS("spi:ad1933");
MODULE_ALIAS("spi:ad1934");
MODULE_ALIAS("spi:ad1938");
MODULE_ALIAS("spi:ad1939");
MODULE_ALIAS("spi:adau1328");

MODULE_INFO(srcversion, "962FBA0C48B2B2EA5D83F48");
