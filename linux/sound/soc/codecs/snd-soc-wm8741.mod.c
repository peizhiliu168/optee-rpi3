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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0xc5850110, "printk" },
	{ 0x5e2ad491, "snd_soc_add_component_controls" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xe215bd38, "snd_soc_component_write" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xf6880dee, "regcache_sync" },
};

MODULE_INFO(depends, "snd-pcm,regmap-spi,snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cwlf,wm8741");
MODULE_ALIAS("of:N*T*Cwlf,wm8741C*");
MODULE_ALIAS("i2c:wm8741");

MODULE_INFO(srcversion, "A0464E3FBC808DC2F048971");
