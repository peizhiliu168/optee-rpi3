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
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0xe0d9bcce, "snd_soc_dapm_info_pin_switch" },
	{ 0x6ef466b6, "snd_soc_dapm_put_pin_switch" },
	{ 0xd628c6af, "snd_soc_dai_set_pll" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0x53ba5c41, "snd_soc_unregister_card" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4ef9d0b1, "snd_soc_get_pcm_runtime" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0xbaf20164, "snd_soc_dapm_get_pin_switch" },
	{ 0xe145866f, "snd_soc_dapm_sync" },
	{ 0xca11a53d, "snd_soc_dai_set_sysclk" },
	{ 0xbd0dbb27, "snd_soc_dapm_disable_pin" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0xaf2cff7d, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codec");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-codecC*");

MODULE_INFO(srcversion, "93C017A07677E7A5C9C7975");
