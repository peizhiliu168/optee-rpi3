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
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x40a31346, "gspca_disconnect" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x4829a47e, "memcpy" },
	{ 0x43f50c75, "gspca_frame_add" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v040Ap0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0890d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p300Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp7333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BDp0404d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp0800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v084Dp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2899p012Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0630d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F90DF180C7DB185489D2321");
