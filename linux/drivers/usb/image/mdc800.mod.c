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
	{ 0xde0a8051, "noop_llseek" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3181ac50, "usb_register_dev" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v055FpA800d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AFB302C75936D22F1E64051");
