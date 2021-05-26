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
	{ 0x9b2fab70, "devm_snd_soc_register_card" },
	{ 0x3c2b68f7, "of_changeset_apply" },
	{ 0x696f2b63, "of_changeset_init" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x61c16d7b, "i2c_put_adapter" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x3488e9bd, "i2c_smbus_read_byte" },
	{ 0xfc2a07ac, "of_changeset_action" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7c5f09f8, "devm_kfree" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a53b4a0, "of_find_compatible_node" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x494cdcf8, "snd_soc_component_read" },
	{ 0x3a9cf91f, "snd_soc_limit_volume" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0xcd362865, "i2c_get_adapter" },
	{ 0x268ff222, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplus");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusC*");

MODULE_INFO(srcversion, "8754076395E6308BD5DFF93");
