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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xbb62d5df, "snd_soc_component_update_bits" },
	{ 0x222e13b1, "snd_soc_info_enum_double" },
	{ 0xe83ed9d8, "snd_soc_put_volsw_range" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x9081e7c, "snd_soc_info_volsw_range" },
	{ 0x14b54f15, "snd_soc_get_volsw_range" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2306d84e, "snd_soc_unregister_component" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xf14bd715, "snd_soc_get_enum_double" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xe215bd38, "snd_soc_component_write" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0xdc041d8, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0x28fd9ba8, "snd_soc_component_test_bits" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x11eda806, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "snd-soc-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cma,ma120x0p");
MODULE_ALIAS("of:N*T*Cma,ma120x0pC*");
MODULE_ALIAS("i2c:ma120x0p");

MODULE_INFO(srcversion, "B3F70617D7A5CA2D426EB08");
