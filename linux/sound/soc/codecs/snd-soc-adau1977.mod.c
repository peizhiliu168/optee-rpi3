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
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x855e3b84, "regcache_cache_bypass" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x43c3faf8, "snd_soc_dapm_new_controls" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0xc9fad71f, "snd_pcm_hw_constraint_mask64" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x1efcfdc8, "regcache_mark_dirty" },
	{ 0xff48b5b6, "snd_pcm_hw_constraint_minmax" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x33822237, "regmap_write" },
	{ 0xf6880dee, "regcache_sync" },
	{ 0x4ea102ba, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "9F2C57C87C7E4982797AA86");
