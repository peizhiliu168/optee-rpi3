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
	{ 0x84a68123, "input_register_device" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0x634e201b, "input_set_capability" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xbce3ca09, "devm_gpiod_get_array" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xd07cc8c, "device_property_match_string" },
	{ 0x39fd5c18, "device_property_present" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x11eda806, "gpiod_get_value_cansleep" },
	{ 0xf51135cb, "input_event" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crotary-encoder");
MODULE_ALIAS("of:N*T*Crotary-encoderC*");

MODULE_INFO(srcversion, "341AD564B293E1EEFB9394E");
