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
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x5682f894, "platform_device_register_full" },
	{ 0xac437f7b, "snd_interval_ratnum" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7c5f09f8, "devm_kfree" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x494cdcf8, "snd_soc_component_read" },
	{ 0x3a9cf91f, "snd_soc_limit_volume" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x268ff222, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadc");
MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-dacplusadcC*");

MODULE_INFO(srcversion, "6A487AC0C4AB9E55911BDE8");
