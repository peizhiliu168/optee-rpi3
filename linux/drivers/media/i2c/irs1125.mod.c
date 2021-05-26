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
	{ 0xc9a66e0f, "__v4l2_ctrl_grab" },
	{ 0x54c09cdd, "v4l2_async_register_subdev" },
	{ 0x77911767, "__v4l2_ctrl_s_ctrl" },
	{ 0xe3ce73f9, "v4l2_ctrl_find" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xee29d1a8, "desc_to_gpio" },
	{ 0xe4bcc913, "devm_gpiod_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0xcc9c220f, "fwnode_handle_put" },
	{ 0x83e42aab, "v4l2_fwnode_endpoint_parse" },
	{ 0x2ed99946, "fwnode_graph_get_next_endpoint" },
	{ 0x156d3265, "dev_fwnode" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x7b4753c8, "v4l2_async_unregister_subdev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Cinfineon,irs1125");
MODULE_ALIAS("of:N*T*Cinfineon,irs1125C*");

MODULE_INFO(srcversion, "04ECEE1AC6F6A597D7BBB75");
