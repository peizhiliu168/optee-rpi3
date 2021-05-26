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
	{ 0x4ffc57e5, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0xbf881afa, "devm_sigmadsp_init_i2c" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0xce9b1302, "sigmadsp_attach" },
	{ 0xd6d8eed4, "of_property_read_variable_u8_array" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x72aec558, "sigmadsp_reset" },
	{ 0xdbe7c0bd, "sigmadsp_setup" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x52cf94c8, "devm_gpio_request_one" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xc8b8dffe, "sigmadsp_restrict_params" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0x43c0c1ef, "of_get_named_gpio_flags" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x1efcfdc8, "regcache_mark_dirty" },
	{ 0x90629832, "gpiod_set_raw_value_cansleep" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x33822237, "regmap_write" },
	{ 0xf6880dee, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp");

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "3F11D5CB14F116478350F1E");
