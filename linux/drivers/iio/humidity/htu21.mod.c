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
	{ 0x6cb1f945, "ms_sensors_show_battery_low" },
	{ 0xa3ff231c, "ms_sensors_show_heater" },
	{ 0x2b1fdf21, "ms_sensors_write_heater" },
	{ 0x90aa4e0b, "ms_sensors_ht_read_temperature" },
	{ 0xcd053f2a, "ms_sensors_ht_read_humidity" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xffe074be, "ms_sensors_write_resolution" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x903e15de, "__devm_iio_device_register" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xae75d0d7, "ms_sensors_read_serial" },
	{ 0x2d2f5cd5, "ms_sensors_reset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4ae48381, "devm_iio_device_alloc" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "industrialio,ms_sensors_i2c");

MODULE_ALIAS("of:N*T*Cmeas,htu21");
MODULE_ALIAS("of:N*T*Cmeas,htu21C*");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidity");
MODULE_ALIAS("of:N*T*Cmeas,ms8607-humidityC*");
MODULE_ALIAS("i2c:htu21");
MODULE_ALIAS("i2c:ms8607-humidity");

MODULE_INFO(srcversion, "740C3A0ED543D013BCAD658");
