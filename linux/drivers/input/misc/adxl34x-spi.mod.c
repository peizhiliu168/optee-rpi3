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
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4fec02d8, "adxl34x_probe" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0x49a4fcbd, "adxl34x_remove" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "adxl34x");


MODULE_INFO(srcversion, "3E64EE84632ADB820B7EA4E");
