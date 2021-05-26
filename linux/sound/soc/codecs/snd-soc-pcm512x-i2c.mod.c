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
	{ 0xcd51b3c1, "pcm512x_regmap" },
	{ 0x31ab222e, "pcm512x_pm_ops" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x57faba8b, "pcm512x_probe" },
	{ 0x9de0823, "pcm512x_remove" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "snd-soc-pcm512x,regmap-i2c");

MODULE_ALIAS("of:N*T*Cti,pcm5121");
MODULE_ALIAS("of:N*T*Cti,pcm5121C*");
MODULE_ALIAS("of:N*T*Cti,pcm5122");
MODULE_ALIAS("of:N*T*Cti,pcm5122C*");
MODULE_ALIAS("of:N*T*Cti,pcm5141");
MODULE_ALIAS("of:N*T*Cti,pcm5141C*");
MODULE_ALIAS("of:N*T*Cti,pcm5142");
MODULE_ALIAS("of:N*T*Cti,pcm5142C*");
MODULE_ALIAS("i2c:pcm5121");
MODULE_ALIAS("i2c:pcm5122");
MODULE_ALIAS("i2c:pcm5141");
MODULE_ALIAS("i2c:pcm5142");

MODULE_INFO(srcversion, "02FF8F1552AAC72E70E7134");
