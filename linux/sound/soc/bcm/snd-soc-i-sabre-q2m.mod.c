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
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x53ba5c41, "snd_soc_unregister_card" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xe55441f1, "snd_soc_component_read32" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0xaf2cff7d, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");

MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-q2m");
MODULE_ALIAS("of:N*T*Caudiophonics,i-sabre-q2mC*");

MODULE_INFO(srcversion, "036664946FD31A5B613ED1D");
