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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x669fe96d, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x207d5adb, "v4l2_ctrl_poll" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "6E9F9A9C2A87A98993D0616");
