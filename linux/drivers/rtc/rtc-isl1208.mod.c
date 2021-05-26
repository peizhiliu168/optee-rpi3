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
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0xa2dc9df8, "of_irq_get_byname" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x6028496a, "rtc_nvmem_register" },
	{ 0x1879a385, "rtc_add_group" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0xbcee111f, "sysfs_notify" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x83564cbc, "i2c_smbus_read_i2c_block_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x75534cf3, "i2c_smbus_write_i2c_block_data" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cisil,isl1208");
MODULE_ALIAS("of:N*T*Cisil,isl1208C*");
MODULE_ALIAS("of:N*T*Cisil,isl1209");
MODULE_ALIAS("of:N*T*Cisil,isl1209C*");
MODULE_ALIAS("of:N*T*Cisil,isl1218");
MODULE_ALIAS("of:N*T*Cisil,isl1218C*");
MODULE_ALIAS("of:N*T*Cisil,isl1219");
MODULE_ALIAS("of:N*T*Cisil,isl1219C*");
MODULE_ALIAS("i2c:isl1208");
MODULE_ALIAS("i2c:isl1209");
MODULE_ALIAS("i2c:isl1218");
MODULE_ALIAS("i2c:isl1219");

MODULE_INFO(srcversion, "C53982291104B3516C6C698");
