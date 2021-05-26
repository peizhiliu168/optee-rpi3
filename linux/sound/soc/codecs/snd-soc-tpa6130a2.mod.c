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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0x7ca2e520, "snd_soc_put_volsw" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x6873423, "snd_soc_get_volsw" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x5e2ad491, "snd_soc_add_component_controls" },
	{ 0xebbbea1c, "gpiod_direction_output_raw" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc770515d, "snd_soc_info_volsw" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0x43c0c1ef, "of_get_named_gpio_flags" },
	{ 0x1efcfdc8, "regcache_mark_dirty" },
	{ 0x4ea3c593, "gpiod_set_raw_value" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x367f5587, "devm_gpio_request" },
	{ 0xf6880dee, "regcache_sync" },
	{ 0x4ea102ba, "regcache_cache_only" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("i2c:tpa6130a2");
MODULE_ALIAS("i2c:tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2");
MODULE_ALIAS("of:N*T*Cti,tpa6130a2C*");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2");
MODULE_ALIAS("of:N*T*Cti,tpa6140a2C*");

MODULE_INFO(srcversion, "39B8A4E6640325DD5693435");
