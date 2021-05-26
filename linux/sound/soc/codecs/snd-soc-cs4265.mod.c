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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa4f11fdd, "snd_soc_get_volsw_sx" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x7341a7d0, "snd_soc_dapm_get_enum_double" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xcadc75fb, "snd_soc_dapm_get_volsw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0x80cd7bdd, "snd_soc_info_volsw_sx" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xb9d5b448, "snd_soc_bytes_info" },
	{ 0xd8851427, "snd_soc_dapm_put_volsw" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xf14bd715, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0xdc041d8, "snd_soc_put_enum_double" },
	{ 0xb747f95c, "snd_soc_bytes_get" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x4e3f4a42, "snd_soc_bytes_put" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x759081e7, "snd_soc_put_volsw_sx" },
	{ 0x33822237, "regmap_write" },
	{ 0x1b48124f, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Ccirrus,cs4265");
MODULE_ALIAS("of:N*T*Ccirrus,cs4265C*");
MODULE_ALIAS("i2c:cs4265");

MODULE_INFO(srcversion, "468F1420B107503C1430758");
