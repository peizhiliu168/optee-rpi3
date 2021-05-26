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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xcfdef728, "regmap_exit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x327c5eae, "__regmap_init_i2c" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xea2d52de, "i2c_unregister_device" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x33822237, "regmap_write" },
	{ 0x5e72d88, "i2c_new_device" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:ts2020");
MODULE_ALIAS("i2c:ts2022");

MODULE_INFO(srcversion, "8C2C6AA5DE37BED514B0F74");
