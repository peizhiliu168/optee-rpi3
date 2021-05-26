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
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x87fb9360, "v4l2_ctrl_auto_cluster" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdd64e639, "strscpy" },
	{ 0x33822237, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,regmap-i2c");

MODULE_ALIAS("i2c:e4000");

MODULE_INFO(srcversion, "CFA22283B58DCE2F54D0F0E");
