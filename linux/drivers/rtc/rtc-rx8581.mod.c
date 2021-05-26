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
	{ 0x6028496a, "rtc_nvmem_register" },
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0x33822237, "regmap_write" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cepson,rx8571");
MODULE_ALIAS("of:N*T*Cepson,rx8571C*");
MODULE_ALIAS("of:N*T*Cepson,rx8581");
MODULE_ALIAS("of:N*T*Cepson,rx8581C*");
MODULE_ALIAS("i2c:rx8581");

MODULE_INFO(srcversion, "5FA3EB36CE19B5C0EC973BF");
