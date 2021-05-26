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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xd2078c73, "dvb_unregister_adapter" },
	{ 0xfbc250fe, "dvb_register_frontend" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0xb93f6cee, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8f68bcf, "dvb_frontend_detach" },
	{ 0xdcb764ad, "memset" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1581dd4c, "dvb_dmxdev_release" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x3181ac50, "usb_register_dev" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x8021c692, "usb_find_interface" },
	{ 0x7f677d33, "dvb_register_adapter" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe75e4602, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("usb:v1BA6p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0246d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B89p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2137p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "55CDD519AC3555F93DB5E23");
