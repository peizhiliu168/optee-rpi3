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
	{ 0x1e7bd487, "v4l2_subdev_link_validate" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc9a66e0f, "__v4l2_ctrl_grab" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x36008705, "pm_runtime_get_if_in_use" },
	{ 0xf9a482f9, "msleep" },
	{ 0xffc14114, "v4l2_fwnode_endpoint_free" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0x54c09cdd, "v4l2_async_register_subdev" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x9e0ed85d, "v4l2_ctrl_new_std_menu_items" },
	{ 0x2c3f93ef, "v4l2_ctrl_new_int_menu" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x1aa19561, "fwnode_property_read_u32_array" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0xcc9c220f, "fwnode_handle_put" },
	{ 0x3de21c35, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x2ed99946, "fwnode_graph_get_next_endpoint" },
	{ 0x156d3265, "dev_fwnode" },
	{ 0x1b861648, "of_match_device" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x33822237, "regmap_write" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb8a8f92d, "__pm_runtime_set_status" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x7b4753c8, "v4l2_async_unregister_subdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x90dfba7, "__v4l2_ctrl_modify_range" },
	{ 0xc678bab2, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x77911767, "__v4l2_ctrl_s_ctrl" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc,regmap-i2c");

MODULE_ALIAS("of:N*T*Csony,imx290");
MODULE_ALIAS("of:N*T*Csony,imx290C*");
MODULE_ALIAS("of:N*T*Csony,imx290-mono");
MODULE_ALIAS("of:N*T*Csony,imx290-monoC*");

MODULE_INFO(srcversion, "413F5B1485DC5E6D9640AF9");
