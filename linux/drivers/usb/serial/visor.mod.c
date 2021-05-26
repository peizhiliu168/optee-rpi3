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
	{ 0xb80cb74a, "usb_serial_generic_unthrottle" },
	{ 0x1ca2eb5f, "usb_serial_generic_throttle" },
	{ 0xb8143aef, "usb_serial_deregister_drivers" },
	{ 0x3fbdbaf5, "usb_serial_register_drivers" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x75dfb435, "usb_serial_generic_open" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x9fe7fe78, "usb_serial_generic_close" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v082Dp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v082Dp0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v082Dp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v115EpF100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0095d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp00DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp00E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0144d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0169d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12EFp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v091Ep0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4766p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C88p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E67p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B7E9F95E42520004A914E86");
