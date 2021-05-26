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
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x56845e1e, "iio_device_release_direct_mode" },
	{ 0x153c3ddb, "iio_device_claim_direct_mode" },
	{ 0x818f2849, "iio_push_to_buffers" },
	{ 0xa53cd33e, "iio_get_time_ns" },
	{ 0x60bef940, "iio_trigger_notify_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x903e15de, "__devm_iio_device_register" },
	{ 0x6daff7b1, "devm_iio_triggered_buffer_setup" },
	{ 0x4ae48381, "devm_iio_device_alloc" },
	{ 0x6b6c5618, "spi_get_device_id" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cmaxim,max6675");
MODULE_ALIAS("of:N*T*Cmaxim,max6675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max31855");
MODULE_ALIAS("of:N*T*Cmaxim,max31855C*");
MODULE_ALIAS("spi:max6675");
MODULE_ALIAS("spi:max31855");

MODULE_INFO(srcversion, "A4DDD6D0361DF29861671DA");
