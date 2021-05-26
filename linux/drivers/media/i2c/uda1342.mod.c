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
	{ 0xc5850110, "printk" },
	{ 0x9ef124fa, "i2c_smbus_write_word_data" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:uda1342");

MODULE_INFO(srcversion, "3E71E58A20911534A726014");
