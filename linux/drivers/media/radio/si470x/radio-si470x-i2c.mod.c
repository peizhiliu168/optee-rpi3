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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x669fe96d, "param_ops_ushort" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x29361773, "complete" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x16655dd7, "si470x_set_freq" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3e882dda, "si470x_viddev_template" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x3e9a76c0, "si470x_ctrl_ops" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x2c0ee3d9, "si470x_start" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xcbbee3fa, "si470x_stop" },
	{ 0xa0e69d6f, "v4l2_fh_release" },
	{ 0x7ff2e31d, "v4l2_fh_is_singular" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("of:N*T*Csilabs,si470x");
MODULE_ALIAS("of:N*T*Csilabs,si470xC*");
MODULE_ALIAS("i2c:si470x");

MODULE_INFO(srcversion, "E506E0DBCFF3AEF4D278BC6");
