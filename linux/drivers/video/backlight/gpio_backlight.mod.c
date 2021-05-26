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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0x52cf94c8, "devm_gpio_request_one" },
	{ 0x11eda806, "gpiod_get_value_cansleep" },
	{ 0x86d38b7a, "gpiod_get_direction" },
	{ 0x3c68711b, "gpiod_direction_output" },
	{ 0xe4a7eb42, "devm_backlight_device_register" },
	{ 0xe4bcc913, "devm_gpiod_get" },
	{ 0x39fd5c18, "device_property_present" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Cgpio-backlight");
MODULE_ALIAS("of:N*T*Cgpio-backlightC*");

MODULE_INFO(srcversion, "190BF6E0CF270F0DDFB6722");
