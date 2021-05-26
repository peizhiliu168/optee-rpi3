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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x477cd986, "dvb_usbv2_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb4213041, "cypress_load_firmware" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x58eab074, "dvb_usbv2_probe" },
	{ 0x38eeb66b, "rc_keydown" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fa3fa0d, "dvb_ca_en50221_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x71a19a5c, "dvb_usbv2_disconnect" },
	{ 0x4e8c50b8, "dvb_usbv2_suspend" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xe50816f3, "dvb_ca_en50221_init" },
};

MODULE_INFO(depends, "dvb_usb_v2,cypress_firmware,dvb-core");

MODULE_ALIAS("usb:v13D3p0CCDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AA3C48F8BB2180B08578DF6");
