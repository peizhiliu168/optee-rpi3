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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdbae0d1d, "__v4l2_ctrl_handler_setup" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x54c09cdd, "v4l2_async_register_subdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x7516f6bc, "v4l2_ctrl_new_fwnode_properties" },
	{ 0x26383438, "v4l2_fwnode_device_parse" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xded99c04, "of_node_put" },
	{ 0x83e42aab, "v4l2_fwnode_endpoint_parse" },
	{ 0x3729fb45, "of_graph_get_next_endpoint" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x7b4753c8, "v4l2_async_unregister_subdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x77911767, "__v4l2_ctrl_s_ctrl" },
	{ 0x90dfba7, "__v4l2_ctrl_modify_range" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Covti,ov5647");
MODULE_ALIAS("of:N*T*Covti,ov5647C*");
MODULE_ALIAS("i2c:ov5647");

MODULE_INFO(srcversion, "43E5C1EB682E3EF981AD210");
