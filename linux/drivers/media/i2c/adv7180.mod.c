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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x54c09cdd, "v4l2_async_register_subdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf27e214b, "i2c_new_dummy_device" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x915ef15a, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xf1b81ec3, "v4l2_src_change_event_subdev_subscribe" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x9d84770b, "v4l2_subdev_notify_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0xea2d52de, "i2c_unregister_device" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7b4753c8, "v4l2_async_unregister_subdev" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("of:N*T*Cadi,adv7180");
MODULE_ALIAS("of:N*T*Cadi,adv7180C*");
MODULE_ALIAS("of:N*T*Cadi,adv7180cp");
MODULE_ALIAS("of:N*T*Cadi,adv7180cpC*");
MODULE_ALIAS("of:N*T*Cadi,adv7180st");
MODULE_ALIAS("of:N*T*Cadi,adv7180stC*");
MODULE_ALIAS("of:N*T*Cadi,adv7182");
MODULE_ALIAS("of:N*T*Cadi,adv7182C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280");
MODULE_ALIAS("of:N*T*Cadi,adv7280C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280-m");
MODULE_ALIAS("of:N*T*Cadi,adv7280-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281");
MODULE_ALIAS("of:N*T*Cadi,adv7281C*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-m");
MODULE_ALIAS("of:N*T*Cadi,adv7281-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-ma");
MODULE_ALIAS("of:N*T*Cadi,adv7281-maC*");
MODULE_ALIAS("of:N*T*Cadi,adv7282");
MODULE_ALIAS("of:N*T*Cadi,adv7282C*");
MODULE_ALIAS("of:N*T*Cadi,adv7282-m");
MODULE_ALIAS("of:N*T*Cadi,adv7282-mC*");
MODULE_ALIAS("i2c:adv7180");
MODULE_ALIAS("i2c:adv7180cp");
MODULE_ALIAS("i2c:adv7180st");
MODULE_ALIAS("i2c:adv7182");
MODULE_ALIAS("i2c:adv7280");
MODULE_ALIAS("i2c:adv7280-m");
MODULE_ALIAS("i2c:adv7281");
MODULE_ALIAS("i2c:adv7281-m");
MODULE_ALIAS("i2c:adv7281-ma");
MODULE_ALIAS("i2c:adv7282");
MODULE_ALIAS("i2c:adv7282-m");

MODULE_INFO(srcversion, "F067D89B25F8DA817418BDA");
