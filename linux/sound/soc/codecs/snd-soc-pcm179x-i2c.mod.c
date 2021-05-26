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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x66780e59, "pcm179x_common_init" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0xe0857b78, "pcm179x_regmap_config" },
};

MODULE_INFO(depends, "snd-soc-pcm179x-codec,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,pcm1792a");
MODULE_ALIAS("of:N*T*Cti,pcm1792aC*");
MODULE_ALIAS("i2c:pcm179x");

MODULE_INFO(srcversion, "11FDF0BD8C69E46EDE4A63E");
