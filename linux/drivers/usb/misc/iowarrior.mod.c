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
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x93dbddd9, "usb_put_intf" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x3181ac50, "usb_register_dev" },
	{ 0x98cf60b3, "strlen" },
	{ 0x81ade87, "usb_string" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0x91221da3, "usb_get_intf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4829a47e, "memcpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8021c692, "usb_find_interface" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07C0p1500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1504d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1506d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "92DD515200ED650FB612735");
