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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x4ffc57e5, "__devm_regmap_init" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x1b08bada, "__regmap_init" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x23cd83af, "clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x540b1235, "regmap_get_val_endian" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C51A1982E8E401805B2A2C3");
