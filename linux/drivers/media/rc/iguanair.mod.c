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
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xbe57027c, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x494547e3, "rc_free_device" },
	{ 0x562e4fb1, "rc_allocate_device" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x373d0909, "ir_raw_event_store" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xc1e93586, "ir_raw_event_handle" },
	{ 0x12e67beb, "ir_raw_event_store_with_filter" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x61fc71a0, "rc_unregister_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1781p0938d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ADCBAB5D4ECAF702958BFAF");
