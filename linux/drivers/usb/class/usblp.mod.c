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
	{ 0xde0a8051, "noop_llseek" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1000e51, "schedule" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x3181ac50, "usb_register_dev" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x91221da3, "usb_get_intf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x8021c692, "usb_find_interface" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0x93dbddd9, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5850110, "printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B176C123068348C792FF26D");
