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
	{ 0xa32fe451, "snd_pcm_hw_constraint_msbits" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0x53ba5c41, "snd_soc_unregister_card" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xca11a53d, "snd_soc_dai_set_sysclk" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0xded99c04, "of_node_put" },
	{ 0xaf2cff7d, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("of:N*T*Cas,audiosense-pi");
MODULE_ALIAS("of:N*T*Cas,audiosense-piC*");

MODULE_INFO(srcversion, "9884651208F851C4E4A3E06");
