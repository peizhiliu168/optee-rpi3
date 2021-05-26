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
	{ 0xded99c04, "of_node_put" },
	{ 0x54c09cdd, "v4l2_async_register_subdev" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x9e0ed85d, "v4l2_ctrl_new_std_menu_items" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0x42fd4b70, "of_get_next_available_child" },
	{ 0xb9c09ddc, "of_get_child_by_name" },
	{ 0x83e42aab, "v4l2_fwnode_endpoint_parse" },
	{ 0x3729fb45, "of_graph_get_next_endpoint" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x7b4753c8, "v4l2_async_unregister_subdev" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x79ca02c, "media_device_unregister_entity" },
	{ 0xb9a388a2, "media_create_pad_link" },
	{ 0x68366d32, "media_device_register_entity" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x9d84770b, "v4l2_subdev_notify_event" },
	{ 0x33822237, "regmap_write" },
	{ 0xe64f444f, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,regmap-i2c,mc");

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "D0F16A11C658B9EFDA487AC");
