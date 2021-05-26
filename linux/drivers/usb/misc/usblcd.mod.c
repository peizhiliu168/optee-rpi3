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
	{ 0x65853570, "usb_register_driver" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3181ac50, "usb_register_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8021c692, "usb_find_interface" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0x53b954a2, "up_read" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x668b19a1, "down_read" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xcf2a6966, "up" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "85D98268F2460D4EEB4B5F8");
