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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x61fc71a0, "rc_unregister_device" },
	{ 0x494547e3, "rc_free_device" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xbe57027c, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x562e4fb1, "rc_allocate_device" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x373d0909, "ir_raw_event_store" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xc1e93586, "ir_raw_event_handle" },
	{ 0x12e67beb, "ir_raw_event_store_with_filter" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x18e0fb9b, "led_classdev_suspend" },
	{ 0xd62064fb, "led_classdev_resume" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v112Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v112Ap0005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "846A72CA7FA8DEE17D82438");
