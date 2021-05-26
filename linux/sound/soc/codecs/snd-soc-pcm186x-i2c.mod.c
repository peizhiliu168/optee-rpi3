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
	{ 0xbcf11641, "pcm186x_regmap" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x2ab0b059, "pcm186x_probe" },
};

MODULE_INFO(depends, "snd-soc-pcm186x,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,pcm1862");
MODULE_ALIAS("of:N*T*Cti,pcm1862C*");
MODULE_ALIAS("of:N*T*Cti,pcm1863");
MODULE_ALIAS("of:N*T*Cti,pcm1863C*");
MODULE_ALIAS("of:N*T*Cti,pcm1864");
MODULE_ALIAS("of:N*T*Cti,pcm1864C*");
MODULE_ALIAS("of:N*T*Cti,pcm1865");
MODULE_ALIAS("of:N*T*Cti,pcm1865C*");
MODULE_ALIAS("i2c:pcm1862");
MODULE_ALIAS("i2c:pcm1863");
MODULE_ALIAS("i2c:pcm1864");
MODULE_ALIAS("i2c:pcm1865");

MODULE_INFO(srcversion, "D1B7CCCBDDDE5EDA234B512");
