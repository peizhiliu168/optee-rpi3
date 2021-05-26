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
	{ 0x60dda062, "regmap_multi_reg_write" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x43c3faf8, "snd_soc_dapm_new_controls" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0x83313449, "snd_soc_dapm_add_routes" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0x5e2ad491, "snd_soc_add_component_controls" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0xf14bd715, "snd_soc_get_enum_double" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xe145866f, "snd_soc_dapm_sync" },
	{ 0xdc041d8, "snd_soc_put_enum_double" },
	{ 0x268ff222, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "744AC9C745E450B1C13DA8C");
