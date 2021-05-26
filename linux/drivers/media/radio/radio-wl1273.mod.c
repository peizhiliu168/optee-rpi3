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
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xc5850110, "printk" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xdcb764ad, "memset" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x29361773, "complete" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "145A0FD51572248FAFB95A6");
