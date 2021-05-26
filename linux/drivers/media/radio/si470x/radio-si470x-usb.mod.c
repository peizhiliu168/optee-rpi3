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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x669fe96d, "param_ops_ushort" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x16655dd7, "si470x_set_freq" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3e882dda, "si470x_viddev_template" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x3e9a76c0, "si470x_ctrl_ops" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0xa0e69d6f, "v4l2_fh_release" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbbee3fa, "si470x_stop" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x29361773, "complete" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x2c0ee3d9, "si470x_start" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v06E1pA155d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v1B80pD700d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v10C5p819Ad*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v12CFp7111d*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "62FCC59E842267299C03FB2");
