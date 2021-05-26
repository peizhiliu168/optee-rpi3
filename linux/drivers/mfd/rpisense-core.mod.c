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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0xe4bcc913, "devm_gpiod_get" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x7a30a4e2, "platform_device_alloc" },
	{ 0x466c1007, "platform_device_add" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x2ceb6c90, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crpi,rpi-sense");
MODULE_ALIAS("of:N*T*Crpi,rpi-senseC*");
MODULE_ALIAS("i2c:rpi-sense");

MODULE_INFO(srcversion, "A7DC91DFB60B9F164003CAC");
