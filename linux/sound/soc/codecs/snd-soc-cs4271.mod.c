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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0xebbbea1c, "gpiod_direction_output_raw" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x1b861648, "of_match_device" },
	{ 0x766d3ded, "snd_ctl_boolean_mono_info" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0x43c0c1ef, "of_get_named_gpio_flags" },
	{ 0x14d91d5f, "of_get_property" },
	{ 0x1efcfdc8, "regcache_mark_dirty" },
	{ 0x4ea3c593, "gpiod_set_raw_value" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x367f5587, "devm_gpio_request" },
	{ 0xf6880dee, "regcache_sync" },
};

MODULE_INFO(depends, "snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Ccirrus,cs4271");
MODULE_ALIAS("of:N*T*Ccirrus,cs4271C*");

MODULE_INFO(srcversion, "C449E6DCEBC4D03AAB30350");
