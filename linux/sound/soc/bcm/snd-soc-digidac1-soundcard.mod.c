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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x9b2fab70, "devm_snd_soc_register_card" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0xd628c6af, "snd_soc_dai_set_pll" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x5e2ad491, "snd_soc_add_component_controls" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x4ef9d0b1, "snd_soc_get_pcm_runtime" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0xf14bd715, "snd_soc_get_enum_double" },
	{ 0x30d12f63, "snd_soc_dai_set_clkdiv" },
	{ 0xa1188971, "snd_ctl_remove" },
	{ 0xca11a53d, "snd_soc_dai_set_sysclk" },
	{ 0xdc041d8, "snd_soc_put_enum_double" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7ff80469, "snd_soc_card_get_kcontrol" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Crra,digidac1-soundcard");
MODULE_ALIAS("of:N*T*Crra,digidac1-soundcardC*");

MODULE_INFO(srcversion, "04DFC70182CF03B396A820B");
