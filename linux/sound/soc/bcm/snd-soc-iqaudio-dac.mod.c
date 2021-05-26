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
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0x53ba5c41, "snd_soc_unregister_card" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4ef9d0b1, "snd_soc_get_pcm_runtime" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x3a9cf91f, "snd_soc_limit_volume" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0xaf2cff7d, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dac");
MODULE_ALIAS("of:N*T*Ciqaudio,iqaudio-dacC*");

MODULE_INFO(srcversion, "061F633B25246ACBFE94034");
