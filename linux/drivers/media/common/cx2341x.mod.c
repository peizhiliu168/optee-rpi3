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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3ea4f9b2, "v4l2_ctrl_cluster" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xef07db17, "v4l2_ctrl_g_ctrl" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6cc7a8be, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0xc9a66e0f, "__v4l2_ctrl_grab" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x89e3897d, "v4l2_ctrl_query_fill" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "B1966984D50908152D3F5B5");
