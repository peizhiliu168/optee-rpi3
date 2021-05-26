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
	{ 0x5e557785, "adau1977_probe" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xf71e9b3d, "adau1977_regmap_config" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "snd-soc-adau1977,regmap-i2c");

MODULE_ALIAS("i2c:adau1977");
MODULE_ALIAS("i2c:adau1978");
MODULE_ALIAS("i2c:adau1979");

MODULE_INFO(srcversion, "7393FA859579E714892FF25");
