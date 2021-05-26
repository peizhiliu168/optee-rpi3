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
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x7341a7d0, "snd_soc_dapm_get_enum_double" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xc77481bf, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xb8a8f92d, "__pm_runtime_set_status" },
	{ 0xe215bd38, "snd_soc_component_write" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x1efcfdc8, "regcache_mark_dirty" },
	{ 0x28fd9ba8, "snd_soc_component_test_bits" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0xe55441f1, "snd_soc_component_read32" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x33822237, "regmap_write" },
	{ 0xf6880dee, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "D2403AD73256C0D4A3B2B9D");
