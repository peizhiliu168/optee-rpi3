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
	{ 0x2152277a, "v4l2_event_subdev_unsubscribe" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x9d84770b, "v4l2_subdev_notify_event" },
	{ 0x371b4204, "cec_delete_adapter" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0xded99c04, "of_node_put" },
	{ 0xffc14114, "v4l2_fwnode_endpoint_free" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3de21c35, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x3729fb45, "of_graph_get_next_endpoint" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x6ef7db8e, "cec_register_adapter" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x54c09cdd, "v4l2_async_register_subdev" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0x45031f63, "cec_s_phys_addr" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x7b4753c8, "v4l2_async_unregister_subdev" },
	{ 0x9628f8c7, "cec_unregister_adapter" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0xab3c751f, "hdmi_infoframe_log" },
	{ 0xf681acfc, "hdmi_infoframe_unpack" },
	{ 0x915ef15a, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xf1b81ec3, "v4l2_src_change_event_subdev_subscribe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x77911767, "__v4l2_ctrl_s_ctrl" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,cec,v4l2-fwnode,mc,v4l2-dv-timings");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358743");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358743C*");
MODULE_ALIAS("i2c:tc358743");

MODULE_INFO(srcversion, "5EFC6F88FCB3568B416BEE2");
