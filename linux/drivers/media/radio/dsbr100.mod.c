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
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0xb2651b71, "v4l2_ctrl_log_status" },
	{ 0xa0e69d6f, "v4l2_fh_release" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x207d5adb, "v4l2_ctrl_poll" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("usb:v04B4p1002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "096BB3DB65EC624B7D14F06");
