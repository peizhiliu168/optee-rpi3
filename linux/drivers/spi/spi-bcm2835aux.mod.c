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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x29361773, "complete" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xebbbea1c, "gpiod_direction_output_raw" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9356d417, "debugfs_create_u64" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xea35209d, "spi_register_controller" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe58cb6ec, "platform_get_irq" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x84f4659b, "devm_platform_ioremap_resource" },
	{ 0xd5109e75, "__devm_spi_alloc_controller" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaf5e77d7, "spi_unregister_controller" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-aux-spiC*");

MODULE_INFO(srcversion, "95ED53B0B6B730F39C74226");
