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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x477cd986, "dvb_usbv2_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x58eab074, "dvb_usbv2_probe" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x71a19a5c, "dvb_usbv2_disconnect" },
	{ 0x4e8c50b8, "dvb_usbv2_suspend" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x6dfb375e, "dvb_usbv2_reset_resume" },
};

MODULE_INFO(depends, "dvb_usb_v2");

MODULE_ALIAS("usb:v058Fp6610d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C4280F4A9B44B849AC27FAC");