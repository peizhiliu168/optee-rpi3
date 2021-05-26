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
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x33822237, "regmap_write" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("of:N*T*Cnxp,pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,pcf2123C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv2123C*");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123");
MODULE_ALIAS("of:N*T*Cnxp,rtc-pcf2123C*");

MODULE_INFO(srcversion, "5A22D860905657B3982F4C1");
