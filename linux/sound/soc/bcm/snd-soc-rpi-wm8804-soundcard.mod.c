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
	{ 0xe4bcc913, "devm_gpiod_get" },
	{ 0xd628c6af, "snd_soc_dai_set_pll" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x885ac16c, "of_match_node" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0x30d12f63, "snd_soc_dai_set_clkdiv" },
	{ 0xca11a53d, "snd_soc_dai_set_sysclk" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x5133306b, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cjustboom,justboom-digi");
MODULE_ALIAS("of:N*T*Cjustboom,justboom-digiC*");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digi");
MODULE_ALIAS("of:N*T*Ciqaudio,wm8804-digiC*");
MODULE_ALIAS("of:N*T*Callo,allo-digione");
MODULE_ALIAS("of:N*T*Callo,allo-digioneC*");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digi");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digiC*");

MODULE_INFO(srcversion, "E499208A37705D3CF364B74");
