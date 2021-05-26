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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0xb2651b71, "v4l2_ctrl_log_status" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdcb764ad, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0xa0e69d6f, "v4l2_fh_release" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x207d5adb, "v4l2_ctrl_poll" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "A6AF0172D24ABE1CBC5EF1F");
