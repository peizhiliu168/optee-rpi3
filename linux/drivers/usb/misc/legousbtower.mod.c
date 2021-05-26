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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x1000e51, "schedule" },
	{ 0x3181ac50, "usb_register_dev" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xafdd2ec7, "usb_poison_urb" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x8021c692, "usb_find_interface" },
	{ 0xe9eedf75, "nonseekable_open" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4829a47e, "memcpy" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0694p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4A6FE42EF68DBD55DB3D75D");
