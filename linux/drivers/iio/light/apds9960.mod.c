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
	{ 0x91cc70a4, "iio_read_const_attr" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x2053600, "__iio_device_register" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x94e925ad, "regmap_field_update_bits_base" },
	{ 0x8210eaca, "devm_regmap_field_alloc" },
	{ 0xf25f102a, "__pm_runtime_use_autosuspend" },
	{ 0x2e60ca36, "pm_runtime_set_autosuspend_delay" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x2b745bd2, "iio_device_attach_buffer" },
	{ 0x3ae6730, "devm_iio_kfifo_allocate" },
	{ 0x4ae48381, "devm_iio_device_alloc" },
	{ 0x56c3ce67, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33822237, "regmap_write" },
	{ 0x2abcaa0c, "iio_push_event" },
	{ 0xa53cd33e, "iio_get_time_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x818f2849, "iio_push_to_buffers" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xb8a8f92d, "__pm_runtime_set_status" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x686eebfd, "iio_device_unregister" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "industrialio,regmap-i2c,kfifo_buf");

MODULE_ALIAS("of:N*T*Cavago,apds9960");
MODULE_ALIAS("of:N*T*Cavago,apds9960C*");
MODULE_ALIAS("i2c:apds9960");

MODULE_INFO(srcversion, "1C62D4FADF9BBAAFFDC5B3B");
