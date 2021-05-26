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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe4a7eb42, "devm_backlight_device_register" },
	{ 0x391617cc, "rpi_firmware_get" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Craspberrypi,rpi-backlight");
MODULE_ALIAS("of:N*T*Craspberrypi,rpi-backlightC*");

MODULE_INFO(srcversion, "F28B14D84DF7AF92BB5A4D7");
