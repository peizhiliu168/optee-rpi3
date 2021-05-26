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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3ea4f9b2, "v4l2_ctrl_cluster" },
	{ 0x8f0a99c1, "gspca_suspend" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x6c7df072, "gspca_dev_probe" },
	{ 0x92fa1643, "gspca_resume" },
	{ 0xef07db17, "v4l2_ctrl_g_ctrl" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40a31346, "gspca_disconnect" },
	{ 0xf51135cb, "input_event" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x77911767, "__v4l2_ctrl_s_ctrl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x87fb9360, "v4l2_ctrl_auto_cluster" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x4829a47e, "memcpy" },
	{ 0x43f50c75, "gspca_frame_add" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v03F0p1B07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep041Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep401Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep401Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep401Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep403Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p700Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p700Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0461p0A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp089Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08A9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08ADd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08AEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08AFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0325d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpD003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpD004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0698p2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p301Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p303Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p305Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p307Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp0128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp804Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDp8050d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "13B0245EB17AF76D65BF517");
