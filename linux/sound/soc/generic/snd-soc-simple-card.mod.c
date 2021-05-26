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
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0x694c0531, "asoc_simple_parse_pin_switches" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x19bc4f9, "snd_soc_pm_ops" },
	{ 0x11045180, "asoc_simple_parse_widgets" },
	{ 0xd8dbce04, "asoc_simple_startup" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xcdaa88df, "asoc_simple_canonicalize_cpu" },
	{ 0xde7b4657, "asoc_simple_init_priv" },
	{ 0xa593493a, "asoc_simple_be_hw_params_fixup" },
	{ 0x2870cefe, "snd_soc_of_get_dai_name" },
	{ 0x68710b8b, "of_device_is_available" },
	{ 0x3011f33c, "of_find_property" },
	{ 0xab285ddc, "asoc_simple_parse_daifmt" },
	{ 0x26116845, "asoc_simple_parse_routing" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xd05dea67, "asoc_simple_canonicalize_platform" },
	{ 0xb9c09ddc, "of_get_child_by_name" },
	{ 0x977fa438, "asoc_simple_parse_card_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9a21ca3, "of_get_next_child" },
	{ 0x1c197da5, "asoc_simple_init_jack" },
	{ 0x9c763e4, "snd_soc_of_parse_node_prefix" },
	{ 0xf7f02e70, "asoc_simple_dai_init" },
	{ 0xa15a3662, "of_node_get" },
	{ 0x415df55f, "of_get_parent" },
	{ 0xac48a1c8, "asoc_simple_shutdown" },
	{ 0x9c1a9d2e, "of_parse_phandle_with_args" },
	{ 0x8f67b299, "asoc_simple_clean_reference" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc394df8f, "asoc_simple_set_dailink_name" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x766f2841, "asoc_simple_hw_params" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xded99c04, "of_node_put" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x52b21570, "asoc_simple_parse_clk" },
	{ 0x99b208e5, "snd_soc_of_parse_tdm_slot" },
	{ 0xb2f23efc, "asoc_simple_parse_convert" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-card");
MODULE_ALIAS("of:N*T*Csimple-scu-audio-cardC*");

MODULE_INFO(srcversion, "4C7B33D27BA17EE899DFB41");
