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
	{ 0x4a741a83, "_dev_err" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0xc95de9bd, "devm_rtc_device_register" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x83564cbc, "i2c_smbus_read_i2c_block_data" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x75534cf3, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:rx8025");

MODULE_INFO(srcversion, "89DD5B0BB84B0D2F49EB2FF");
