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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x8f0a99c1, "gspca_suspend" },
	{ 0x6c7df072, "gspca_dev_probe" },
	{ 0x92fa1643, "gspca_resume" },
	{ 0xef07db17, "v4l2_ctrl_g_ctrl" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x40a31346, "gspca_disconnect" },
	{ 0xf51135cb, "input_event" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x87fb9360, "v4l2_ctrl_auto_cluster" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x43f50c75, "gspca_frame_add" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v17A1p0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A26FEE64B7D093852D03B6D");
