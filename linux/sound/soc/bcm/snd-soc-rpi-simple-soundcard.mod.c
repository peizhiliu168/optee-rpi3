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
	{ 0x9b2fab70, "devm_snd_soc_register_card" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x885ac16c, "of_match_node" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0xd089673f, "snd_soc_component_set_sysclk" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x929391f7, "snd_soc_dai_set_tdm_slot" },
	{ 0x5133306b, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Cadi,adau1977-adc");
MODULE_ALIAS("of:N*T*Cadi,adau1977-adcC*");
MODULE_ALIAS("of:N*T*Cgooglevoicehat,googlevoicehat-soundcard");
MODULE_ALIAS("of:N*T*Cgooglevoicehat,googlevoicehat-soundcardC*");
MODULE_ALIAS("of:N*T*Chifiberrydacplusdsp,hifiberrydacplusdsp-soundcard");
MODULE_ALIAS("of:N*T*Chifiberrydacplusdsp,hifiberrydacplusdsp-soundcardC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-amp");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-ampC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dac");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacC*");
MODULE_ALIAS("of:N*T*Crpi,rpi-dac");
MODULE_ALIAS("of:N*T*Crpi,rpi-dacC*");
MODULE_ALIAS("of:N*T*Cmerus,merus-amp");
MODULE_ALIAS("of:N*T*Cmerus,merus-ampC*");

MODULE_INFO(srcversion, "3C6B83F9406B9483C4D8941");
