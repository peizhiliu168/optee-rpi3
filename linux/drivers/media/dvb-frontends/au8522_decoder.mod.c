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
	{ 0x49223d45, "v4l2_ctrl_subdev_log_status" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa4e86758, "au8522_readreg" },
	{ 0xf8933380, "au8522_writereg" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0xc5850110, "printk" },
	{ 0x43d2fc75, "au8522_get_state" },
	{ 0xe374c304, "au8522_release_state" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,au8522_common,mc");

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "F3D48EA2D9A1B09B0F65E39");
