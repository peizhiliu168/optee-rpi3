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
	{ 0x1ba7c500, "physvirt_offset" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3ea4f9b2, "v4l2_ctrl_cluster" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa0e69d6f, "v4l2_fh_release" },
	{ 0x7ff2e31d, "v4l2_fh_is_singular" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0xc9a66e0f, "__v4l2_ctrl_grab" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x49690b22, "remap_pfn_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xab75123b, "vmalloc_to_page" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x207d5adb, "v4l2_ctrl_poll" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x2f548802, "ns_to_timeval" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v0553p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0553p0151d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "269E0BE9683F4BAD08D81E2");
