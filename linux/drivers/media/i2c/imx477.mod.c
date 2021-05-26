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
	{ 0x2152277a, "v4l2_event_subdev_unsubscribe" },
	{ 0x915ef15a, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdbae0d1d, "__v4l2_ctrl_handler_setup" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0x5eeb4cb1, "v4l2_async_register_subdev_sensor_common" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x7516f6bc, "v4l2_ctrl_new_fwnode_properties" },
	{ 0x26383438, "v4l2_fwnode_device_parse" },
	{ 0x9e0ed85d, "v4l2_ctrl_new_std_menu_items" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0xcc9c220f, "fwnode_handle_put" },
	{ 0xffc14114, "v4l2_fwnode_endpoint_free" },
	{ 0x3de21c35, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x2ed99946, "fwnode_graph_get_next_endpoint" },
	{ 0x156d3265, "dev_fwnode" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xc9a66e0f, "__v4l2_ctrl_grab" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0x36008705, "pm_runtime_get_if_in_use" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x77911767, "__v4l2_ctrl_s_ctrl" },
	{ 0x90dfba7, "__v4l2_ctrl_modify_range" },
	{ 0xb8a8f92d, "__pm_runtime_set_status" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x7b4753c8, "v4l2_async_unregister_subdev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,v4l2-fwnode,mc");

MODULE_ALIAS("of:N*T*Csony,imx477");
MODULE_ALIAS("of:N*T*Csony,imx477C*");

MODULE_INFO(srcversion, "215BBBDCC336F4AB68589D8");
