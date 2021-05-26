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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1d801a9b, "fbtft_probe_common" },
	{ 0x948537b8, "fbtft_remove_common" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Csolomon,ssd1306");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306C*");

MODULE_INFO(srcversion, "405BF843D85580AC6A0738F");
