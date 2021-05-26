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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x8f0a99c1, "gspca_suspend" },
	{ 0xb3622408, "usb_altnum_to_altsetting" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x92fa1643, "gspca_resume" },
	{ 0xef07db17, "v4l2_ctrl_g_ctrl" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40a31346, "gspca_disconnect" },
	{ 0x648060b9, "gspca_dev_probe2" },
	{ 0xf51135cb, "input_event" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc9a66e0f, "__v4l2_ctrl_grab" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x43f50c75, "gspca_frame_add" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v0545p8080d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0002dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8080d0301dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p8002d030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Cd030Adc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0545p800Dd030Adc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B851D8F62A331EC6AA59179");
