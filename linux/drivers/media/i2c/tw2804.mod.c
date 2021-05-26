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
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x49223d45, "v4l2_ctrl_subdev_log_status" },
	{ 0xc5850110, "printk" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:tw2804");

MODULE_INFO(srcversion, "1EB9C8DC7CDE99DA60E4FE7");
