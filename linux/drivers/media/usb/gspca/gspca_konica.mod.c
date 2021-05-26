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
	{ 0xb3622408, "usb_altnum_to_altsetting" },
	{ 0x6c7df072, "gspca_dev_probe" },
	{ 0x92fa1643, "gspca_resume" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x40a31346, "gspca_disconnect" },
	{ 0xf51135cb, "input_event" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x43f50c75, "gspca_frame_add" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v04C8p0720d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E794513CC2452E76E896D13");
