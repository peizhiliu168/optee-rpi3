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
	{ 0x903e15de, "__devm_iio_device_register" },
	{ 0x6daff7b1, "devm_iio_triggered_buffer_setup" },
	{ 0x424b97c4, "devm_add_action" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4ae48381, "devm_iio_device_alloc" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x818f2849, "iio_push_to_buffers" },
	{ 0xa53cd33e, "iio_get_time_ns" },
	{ 0x60bef940, "iio_trigger_notify_done" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2aae5cc, "crc8" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer,crc8");

MODULE_ALIAS("of:N*T*Csensirion,sps30");
MODULE_ALIAS("of:N*T*Csensirion,sps30C*");
MODULE_ALIAS("i2c:sps30");

MODULE_INFO(srcversion, "186D232E72E4F78B0A69BBB");
