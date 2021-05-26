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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x98cf60b3, "strlen" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0x466c1007, "platform_device_add" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x2ceb6c90, "platform_device_put" },
	{ 0x3400f4a6, "platform_device_add_data" },
	{ 0x7a30a4e2, "platform_device_alloc" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x3ea4f9b2, "v4l2_ctrl_cluster" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xdd64e639, "strscpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x29361773, "complete" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Csilabs,si4713");
MODULE_ALIAS("of:N*T*Csilabs,si4713C*");
MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "7059AB609C64F3D46E87BDD");
