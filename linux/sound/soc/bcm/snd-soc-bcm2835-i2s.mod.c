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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x3605fb0, "devm_snd_dmaengine_pcm_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x8a27a774, "__devm_regmap_init_mmio_clk" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x27e61d6, "of_get_address" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x33822237, "regmap_write" },
	{ 0x84f4659b, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-mmio");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2s");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2sC*");

MODULE_INFO(srcversion, "B42442475DC93F60079EF6C");
