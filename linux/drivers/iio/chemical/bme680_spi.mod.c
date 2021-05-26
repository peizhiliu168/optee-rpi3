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
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xe9cb3b86, "bme680_core_probe" },
	{ 0x4ffc57e5, "__devm_regmap_init" },
	{ 0x5a06d922, "bme680_regmap_config" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0x6b6c5618, "spi_get_device_id" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "bme680_core");

MODULE_ALIAS("of:N*T*Cbosch,bme680");
MODULE_ALIAS("of:N*T*Cbosch,bme680C*");
MODULE_ALIAS("acpi*:BME0680:*");
MODULE_ALIAS("spi:bme680");

MODULE_INFO(srcversion, "292B1299DBC9A1C05478477");
