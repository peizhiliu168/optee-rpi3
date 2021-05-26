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
	{ 0xb5c74fa7, "of_property_read_string_helper" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x815588a6, "clk_enable" },
	{ 0x207e4dd5, "snd_soc_of_parse_card_name" },
	{ 0x3de70547, "snd_soc_of_parse_audio_simple_widgets" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe0d9bcce, "snd_soc_dapm_info_pin_switch" },
	{ 0x6ef466b6, "snd_soc_dapm_put_pin_switch" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4626fae5, "devm_kasprintf" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf213ad71, "devm_get_clk_from_child" },
	{ 0xbaf20164, "snd_soc_dapm_get_pin_switch" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x43c0c1ef, "of_get_named_gpio_flags" },
	{ 0xca11a53d, "snd_soc_dai_set_sysclk" },
	{ 0x14565b2f, "devm_kvasprintf" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xbab3978f, "snd_soc_of_parse_audio_routing" },
	{ 0x78d72514, "snd_soc_card_jack_new" },
	{ 0x221053a0, "snd_soc_jack_add_gpios" },
	{ 0x4a0b26a9, "snd_soc_of_parse_daifmt" },
	{ 0x929391f7, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xded99c04, "of_node_put" },
	{ 0x268ff222, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "90C80A11B9E0DEA3BF3C689");
