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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xcfdef728, "regmap_exit" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0x69e74789, "gpiochip_remove" },
	{ 0xbd8b5277, "gpiochip_add_data_with_key" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x327c5eae, "__regmap_init_i2c" },
	{ 0xea2d52de, "i2c_unregister_device" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb9cb5f8, "gpiochip_get_data" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf27e214b, "i2c_new_dummy_device" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x33822237, "regmap_write" },
	{ 0x5e72d88, "i2c_new_device" },
};

MODULE_INFO(depends, "dvb-core,regmap-i2c");

MODULE_ALIAS("i2c:cxd2820r");

MODULE_INFO(srcversion, "E4F404A300BAF312862A4DE");
