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
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xd382ac5d, "devm_gpiochip_add_data" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0xdcb764ad, "memset" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0xc0069bd9, "gpiochip_line_is_persistent" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56c3ce67, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4f0fb033, "regcache_drop_region" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0xb9cb5f8, "gpiochip_get_data" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3F824AAC36F88B43EF27E23");
