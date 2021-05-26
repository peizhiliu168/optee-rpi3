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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3ea4f9b2, "v4l2_ctrl_cluster" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xb2651b71, "v4l2_ctrl_log_status" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6cc7a8be, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0xd8e8bd1e, "v4l2_fh_init" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa0e69d6f, "v4l2_fh_release" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x16d83ec2, "v4l2_fh_add" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5e72d88, "i2c_new_device" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x207d5adb, "v4l2_ctrl_poll" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "videodev,v4l2-dv-timings");

MODULE_ALIAS("usb:v2040p4900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4982d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p4903d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "852673E75D612674FF31849");
