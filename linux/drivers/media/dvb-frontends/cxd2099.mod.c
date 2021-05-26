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
	{ 0x977f511b, "__mutex_init" },
	{ 0x327c5eae, "__regmap_init_i2c" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbc02584f, "regmap_raw_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x8706f6b6, "regmap_raw_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x33822237, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfdef728, "regmap_exit" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:cxd2099");

MODULE_INFO(srcversion, "45FE66DB9536ACF0982FE97");
