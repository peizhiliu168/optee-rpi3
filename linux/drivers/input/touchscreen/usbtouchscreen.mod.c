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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x84a68123, "input_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5792f848, "strlcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc5850110, "printk" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdcb764ad, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xf51135cb, "input_event" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic03isc*ip*in*");
MODULE_ALIAS("usb:v3823p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3823p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0123p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EEFp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v134Cp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0596p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0403pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v16E3pF9E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1234p5678d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0637p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AFAp03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v255Ep0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v595Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6615p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1391p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DFCp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p007Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00CEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08F2p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F92p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AC7p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14C8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0664p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10F0p2002d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v1870p0001d*dc*dsc*dp*ic0Aisc00ip00in*");
MODULE_ALIAS("usb:v04E7p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7374p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2269A0534446BC7B92CEFE0");
