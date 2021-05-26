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
	{ 0x4a741a83, "_dev_err" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0xf87c0110, "devm_rc_register_device" },
	{ 0x14d91d5f, "of_get_property" },
	{ 0x32d2539e, "devm_rc_allocate_device" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0xe4bcc913, "devm_gpiod_get" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x1455f759, "ir_raw_event_store_edge" },
	{ 0xb90110fa, "gpiod_get_value" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver");
MODULE_ALIAS("of:N*T*Cgpio-ir-receiverC*");

MODULE_INFO(srcversion, "6077CA643E38B48054F9201");
