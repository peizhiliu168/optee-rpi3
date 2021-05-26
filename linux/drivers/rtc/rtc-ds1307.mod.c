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
	{ 0x1879a385, "rtc_add_group" },
	{ 0x6028496a, "rtc_nvmem_register" },
	{ 0x6497efe5, "devm_hwmon_device_register_with_groups" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x39fd5c18, "device_property_present" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x2493047e, "of_clk_add_provider" },
	{ 0xa60b8a08, "of_clk_src_onecell_get" },
	{ 0x5f294ac7, "devm_clk_register" },
	{ 0xb5c74fa7, "of_property_read_string_helper" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x33822237, "regmap_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cdallas,ds1307");
MODULE_ALIAS("of:N*T*Cdallas,ds1307C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1308");
MODULE_ALIAS("of:N*T*Cdallas,ds1308C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1337");
MODULE_ALIAS("of:N*T*Cdallas,ds1337C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1338");
MODULE_ALIAS("of:N*T*Cdallas,ds1338C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1339");
MODULE_ALIAS("of:N*T*Cdallas,ds1339C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1388");
MODULE_ALIAS("of:N*T*Cdallas,ds1388C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1340");
MODULE_ALIAS("of:N*T*Cdallas,ds1340C*");
MODULE_ALIAS("of:N*T*Cdallas,ds1341");
MODULE_ALIAS("of:N*T*Cdallas,ds1341C*");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231");
MODULE_ALIAS("of:N*T*Cmaxim,ds3231C*");
MODULE_ALIAS("of:N*T*Cst,m41t0");
MODULE_ALIAS("of:N*T*Cst,m41t0C*");
MODULE_ALIAS("of:N*T*Cst,m41t00");
MODULE_ALIAS("of:N*T*Cst,m41t00C*");
MODULE_ALIAS("of:N*T*Cst,m41t11");
MODULE_ALIAS("of:N*T*Cst,m41t11C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7940xC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941x");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp7941xC*");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338");
MODULE_ALIAS("of:N*T*Cpericom,pt7c4338C*");
MODULE_ALIAS("of:N*T*Cepson,rx8025");
MODULE_ALIAS("of:N*T*Cepson,rx8025C*");
MODULE_ALIAS("of:N*T*Cisil,isl12057");
MODULE_ALIAS("of:N*T*Cisil,isl12057C*");
MODULE_ALIAS("of:N*T*Cepson,rx8130");
MODULE_ALIAS("of:N*T*Cepson,rx8130C*");
MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1308");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds1341");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t0");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:m41t11");
MODULE_ALIAS("i2c:mcp7940x");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:isl12057");
MODULE_ALIAS("i2c:rx8130");

MODULE_INFO(srcversion, "D0F514597A93F8E4AF01440");
