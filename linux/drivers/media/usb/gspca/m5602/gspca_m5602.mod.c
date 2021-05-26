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
	{ 0x3ea4f9b2, "v4l2_ctrl_cluster" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x6c7df072, "gspca_dev_probe" },
	{ 0x92fa1643, "gspca_resume" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x40a31346, "gspca_disconnect" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x87fb9360, "v4l2_ctrl_auto_cluster" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x43f50c75, "gspca_frame_add" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v0402p5602d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5E0E0659DCF35404C295FC5");
