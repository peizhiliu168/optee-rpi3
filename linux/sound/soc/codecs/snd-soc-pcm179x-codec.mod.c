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
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0xe83ed9d8, "snd_soc_put_volsw_range" },
	{ 0x9081e7c, "snd_soc_info_volsw_range" },
	{ 0x14b54f15, "snd_soc_get_volsw_range" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0x268ff222, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "9D4065804A888BF7B981636");
