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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x53ba5c41, "snd_soc_unregister_card" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x4ef9d0b1, "snd_soc_get_pcm_runtime" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe215bd38, "snd_soc_component_write" },
	{ 0xa1188971, "snd_ctl_remove" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x37a0cba, "kfree" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0xaf2cff7d, "snd_soc_register_card" },
	{ 0x7ff80469, "snd_soc_card_get_kcontrol" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-pcm");

MODULE_ALIAS("of:N*T*Cpifi,pifi-40");
MODULE_ALIAS("of:N*T*Cpifi,pifi-40C*");

MODULE_INFO(srcversion, "A7392A0D9D28D0526F717A3");
