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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x9b2fab70, "devm_snd_soc_register_card" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0x20fe06e4, "gpiod_put" },
	{ 0x8ec26bc3, "gpiod_get" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplushd");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplushdC*");

MODULE_INFO(srcversion, "221ECAAB06C585317E50BA4");
