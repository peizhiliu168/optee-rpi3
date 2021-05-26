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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0xea124bd1, "gcd" },
	{ 0xc5a580eb, "snd_pcm_hw_constraint_ratnums" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x503bd137, "snd_interval_ranges" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x25949b50, "snd_ctl_boolean_stereo_info" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x54cc8052, "snd_pcm_hw_rule_add" },
	{ 0xf14bd715, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xb8a8f92d, "__pm_runtime_set_status" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x1efcfdc8, "regcache_mark_dirty" },
	{ 0xdc041d8, "snd_soc_put_enum_double" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x33822237, "regmap_write" },
	{ 0xf6880dee, "regcache_sync" },
	{ 0x4ea102ba, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "E91E41D26B376B7F2461944");
