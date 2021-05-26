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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0xe8ebd5e6, "devm_nvmem_register" },
	{ 0xfe0f39a3, "devm_i2c_new_dummy_device" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x39fd5c18, "device_property_present" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0x1b861648, "of_match_device" },
	{ 0x36f3ffea, "i2c_match_id" },
	{ 0xdcb764ad, "memset" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0xb8a8f92d, "__pm_runtime_set_status" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("acpi*:INT3499:*");
MODULE_ALIAS("of:N*T*Catmel,24c00");
MODULE_ALIAS("of:N*T*Catmel,24c00C*");
MODULE_ALIAS("of:N*T*Catmel,24c01");
MODULE_ALIAS("of:N*T*Catmel,24c01C*");
MODULE_ALIAS("of:N*T*Catmel,24cs01");
MODULE_ALIAS("of:N*T*Catmel,24cs01C*");
MODULE_ALIAS("of:N*T*Catmel,24c02");
MODULE_ALIAS("of:N*T*Catmel,24c02C*");
MODULE_ALIAS("of:N*T*Catmel,24cs02");
MODULE_ALIAS("of:N*T*Catmel,24cs02C*");
MODULE_ALIAS("of:N*T*Catmel,24mac402");
MODULE_ALIAS("of:N*T*Catmel,24mac402C*");
MODULE_ALIAS("of:N*T*Catmel,24mac602");
MODULE_ALIAS("of:N*T*Catmel,24mac602C*");
MODULE_ALIAS("of:N*T*Catmel,spd");
MODULE_ALIAS("of:N*T*Catmel,spdC*");
MODULE_ALIAS("of:N*T*Catmel,24c04");
MODULE_ALIAS("of:N*T*Catmel,24c04C*");
MODULE_ALIAS("of:N*T*Catmel,24cs04");
MODULE_ALIAS("of:N*T*Catmel,24cs04C*");
MODULE_ALIAS("of:N*T*Catmel,24c08");
MODULE_ALIAS("of:N*T*Catmel,24c08C*");
MODULE_ALIAS("of:N*T*Catmel,24cs08");
MODULE_ALIAS("of:N*T*Catmel,24cs08C*");
MODULE_ALIAS("of:N*T*Catmel,24c16");
MODULE_ALIAS("of:N*T*Catmel,24c16C*");
MODULE_ALIAS("of:N*T*Catmel,24cs16");
MODULE_ALIAS("of:N*T*Catmel,24cs16C*");
MODULE_ALIAS("of:N*T*Catmel,24c32");
MODULE_ALIAS("of:N*T*Catmel,24c32C*");
MODULE_ALIAS("of:N*T*Catmel,24cs32");
MODULE_ALIAS("of:N*T*Catmel,24cs32C*");
MODULE_ALIAS("of:N*T*Catmel,24c64");
MODULE_ALIAS("of:N*T*Catmel,24c64C*");
MODULE_ALIAS("of:N*T*Catmel,24cs64");
MODULE_ALIAS("of:N*T*Catmel,24cs64C*");
MODULE_ALIAS("of:N*T*Catmel,24c128");
MODULE_ALIAS("of:N*T*Catmel,24c128C*");
MODULE_ALIAS("of:N*T*Catmel,24c256");
MODULE_ALIAS("of:N*T*Catmel,24c256C*");
MODULE_ALIAS("of:N*T*Catmel,24c512");
MODULE_ALIAS("of:N*T*Catmel,24c512C*");
MODULE_ALIAS("of:N*T*Catmel,24c1024");
MODULE_ALIAS("of:N*T*Catmel,24c1024C*");
MODULE_ALIAS("of:N*T*Catmel,24c2048");
MODULE_ALIAS("of:N*T*Catmel,24c2048C*");
MODULE_ALIAS("i2c:24c00");
MODULE_ALIAS("i2c:24c01");
MODULE_ALIAS("i2c:24cs01");
MODULE_ALIAS("i2c:24c02");
MODULE_ALIAS("i2c:24cs02");
MODULE_ALIAS("i2c:24mac402");
MODULE_ALIAS("i2c:24mac602");
MODULE_ALIAS("i2c:spd");
MODULE_ALIAS("i2c:24c04");
MODULE_ALIAS("i2c:24cs04");
MODULE_ALIAS("i2c:24c08");
MODULE_ALIAS("i2c:24cs08");
MODULE_ALIAS("i2c:24c16");
MODULE_ALIAS("i2c:24cs16");
MODULE_ALIAS("i2c:24c32");
MODULE_ALIAS("i2c:24cs32");
MODULE_ALIAS("i2c:24c64");
MODULE_ALIAS("i2c:24cs64");
MODULE_ALIAS("i2c:24c128");
MODULE_ALIAS("i2c:24c256");
MODULE_ALIAS("i2c:24c512");
MODULE_ALIAS("i2c:24c1024");
MODULE_ALIAS("i2c:24c2048");
MODULE_ALIAS("i2c:at24");

MODULE_INFO(srcversion, "9DD74ADB08C0E2E39A551A5");
