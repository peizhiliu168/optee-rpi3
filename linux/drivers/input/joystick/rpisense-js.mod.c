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
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0x2ba32d05, "gpiod_direction_input" },
	{ 0x84a68123, "input_register_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0xbeea249e, "rpisense_get_dev" },
	{ 0xf51135cb, "input_event" },
	{ 0x98734f33, "rpisense_reg_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "rpisense-core");

MODULE_ALIAS("platform:rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-js");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-jsC*");

MODULE_INFO(srcversion, "3A1020FD8FE11A5D677800E");
