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
	{ 0xdfc2091f, "arizona_pm_ops" },
	{ 0x3dc526a9, "arizona_of_match" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x8555f269, "arizona_dev_init" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x116c1559, "wm5102_spi_regmap" },
	{ 0x8fe7a507, "arizona_of_get_type" },
	{ 0x6b6c5618, "spi_get_device_id" },
	{ 0xe456340c, "arizona_dev_exit" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");
MODULE_ALIAS("spi:wm1831");
MODULE_ALIAS("spi:cs47l24");

MODULE_INFO(srcversion, "88B10CC70043E42F5B598E3");
