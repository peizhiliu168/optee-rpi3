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
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xb4213041, "cypress_load_firmware" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "cypress_firmware");

MODULE_ALIAS("usb:v1943pA250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p6666d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p6668d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ADA02ECD50AB16F7BB06503");
