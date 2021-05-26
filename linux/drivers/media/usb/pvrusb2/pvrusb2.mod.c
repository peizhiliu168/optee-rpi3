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
	{ 0xa24f23d8, "__request_module" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3ecc078b, "dvb_module_probe" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xd2078c73, "dvb_unregister_adapter" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3688aa3d, "v4l2_i2c_new_subdev" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xfbc250fe, "dvb_register_frontend" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb93f6cee, "dvb_unregister_frontend" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdaff62f9, "cx2341x_fill_defaults" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0xc889377e, "cx2341x_log_status" },
	{ 0x358c88a8, "dvb_net_release" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x8f68bcf, "dvb_frontend_detach" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x8d3a49fd, "cx2341x_ctrl_get_menu" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x802d06b2, "v4l2_s_ctrl" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0xc12ad67f, "device_register" },
	{ 0xb0d8628e, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb9c8f3f1, "cx2341x_update" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x1581dd4c, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0xe27258a7, "dvb_net_init" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xd8e8bd1e, "v4l2_fh_init" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8785d4a1, "device_move" },
	{ 0x24d273d1, "add_timer" },
	{ 0x7247df5a, "__class_register" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xd2b45b8e, "usb_urb_ep_type_check" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x1e4ef55c, "dvb_module_release" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xeb854f47, "cx2341x_ctrl_query" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x7f677d33, "dvb_register_adapter" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x96848186, "scnprintf" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x16d83ec2, "v4l2_fh_add" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0xd2ffa7b4, "v4l2_fh_del" },
	{ 0xf4d81106, "cx2341x_ext_ctrls" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x5e72d88, "i2c_new_device" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe75e4602, "dvb_dmxdev_init" },
	{ 0xeb9b614a, "v4l2_fh_exit" },
};

MODULE_INFO(depends, "dvb-core,videodev,tveeprom,cx2341x");

MODULE_ALIAS("usb:v2040p2900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p2400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11BAp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7510d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CD89329035E1258F49F34E3");
