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
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2174912c, "pwmchip_add" },
	{ 0xa6e8c1a4, "of_pwm_xlate_with_flags" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x3637d228, "devm_ioremap_resource" },
	{ 0x5e95a8ad, "platform_get_resource" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x62d39f74, "pwmchip_remove" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-pwm");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-pwmC*");

MODULE_INFO(srcversion, "926EED56FCD241D329D426B");
