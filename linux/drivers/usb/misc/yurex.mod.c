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
	{ 0x3181ac50, "usb_register_dev" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x91221da3, "usb_get_intf" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xafdd2ec7, "usb_poison_urb" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x20651803, "kill_fasync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8021c692, "usb_find_interface" },
	{ 0xd2fbd08, "fasync_helper" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x93dbddd9, "usb_put_intf" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8DA70FE4A07D500139BFD5D");
