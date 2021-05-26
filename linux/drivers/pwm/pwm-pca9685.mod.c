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
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0xb8a8f92d, "__pm_runtime_set_status" },
	{ 0xd382ac5d, "devm_gpiochip_add_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2174912c, "pwmchip_add" },
	{ 0x39fd5c18, "device_property_present" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xb9cb5f8, "gpiochip_get_data" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x33822237, "regmap_write" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x62d39f74, "pwmchip_remove" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwm");
MODULE_ALIAS("of:N*T*Cnxp,pca9685-pwmC*");
MODULE_ALIAS("i2c:pca9685");

MODULE_INFO(srcversion, "A191D616DBF1E4500DDED46");
