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
	{ 0xb8143aef, "usb_serial_deregister_drivers" },
	{ 0x3fbdbaf5, "usb_serial_register_drivers" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v2639p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2639p0017d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0B599D628A0DCAED4B7538E");
