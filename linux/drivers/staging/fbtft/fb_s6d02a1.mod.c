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
	{ 0x1d801a9b, "fbtft_probe_common" },
	{ 0x948537b8, "fbtft_remove_common" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "fbtft");

MODULE_ALIAS("of:N*T*Csamsung,s6d02a1");
MODULE_ALIAS("of:N*T*Csamsung,s6d02a1C*");

MODULE_INFO(srcversion, "9B5F367D08AAFFE39523628");
