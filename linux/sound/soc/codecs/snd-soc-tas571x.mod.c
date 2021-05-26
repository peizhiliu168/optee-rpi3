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
	{ 0x4ffc57e5, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xe83ed9d8, "snd_soc_put_volsw_range" },
	{ 0x9081e7c, "snd_soc_info_volsw_range" },
	{ 0x14b54f15, "snd_soc_get_volsw_range" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x1b861648, "of_match_device" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xf14bd715, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0xdc041d8, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x33822237, "regmap_write" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");

MODULE_ALIAS("i2c:tas5707");
MODULE_ALIAS("i2c:tas5711");
MODULE_ALIAS("i2c:tas5717");
MODULE_ALIAS("i2c:tas5719");
MODULE_ALIAS("i2c:tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5707");
MODULE_ALIAS("of:N*T*Cti,tas5707C*");
MODULE_ALIAS("of:N*T*Cti,tas5711");
MODULE_ALIAS("of:N*T*Cti,tas5711C*");
MODULE_ALIAS("of:N*T*Cti,tas5717");
MODULE_ALIAS("of:N*T*Cti,tas5717C*");
MODULE_ALIAS("of:N*T*Cti,tas5719");
MODULE_ALIAS("of:N*T*Cti,tas5719C*");
MODULE_ALIAS("of:N*T*Cti,tas5721");
MODULE_ALIAS("of:N*T*Cti,tas5721C*");

MODULE_INFO(srcversion, "428D1FF2A96BBA33C7C54FB");
