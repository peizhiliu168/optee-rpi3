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
	{ 0x3b52e4ee, "default_llseek" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xab6b7c4f, "usb_get_from_anchor" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdcb764ad, "memset" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x8021c692, "usb_find_interface" },
	{ 0x3181ac50, "usb_register_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x20651803, "kill_fasync" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x7e8d8619, "usb_anchor_empty" },
	{ 0xcf2a6966, "up" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xd2fbd08, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "764F18DDB332DB82461D438");
