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
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0xc95de9bd, "devm_rtc_device_register" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,bq32000");
MODULE_ALIAS("of:N*T*Cti,bq32000C*");
MODULE_ALIAS("i2c:bq32000");

MODULE_INFO(srcversion, "123AC44A71CBB56B9F8DBAB");
