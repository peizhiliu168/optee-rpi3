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
	{ 0x719b9f74, "w5100_pm_ops" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x22b7c101, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe6fe4367, "w5100_ops_priv" },
	{ 0x6b6c5618, "spi_get_device_id" },
	{ 0x1bb8f194, "w5100_probe" },
	{ 0x1b861648, "of_match_device" },
	{ 0xf9eaf0d, "of_get_mac_address" },
	{ 0x860a0401, "w5100_remove" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "w5100");

MODULE_ALIAS("spi:w5100");
MODULE_ALIAS("spi:w5200");
MODULE_ALIAS("spi:w5500");
MODULE_ALIAS("of:N*T*Cwiznet,w5100");
MODULE_ALIAS("of:N*T*Cwiznet,w5100C*");
MODULE_ALIAS("of:N*T*Cwiznet,w5200");
MODULE_ALIAS("of:N*T*Cwiznet,w5200C*");
MODULE_ALIAS("of:N*T*Cwiznet,w5500");
MODULE_ALIAS("of:N*T*Cwiznet,w5500C*");

MODULE_INFO(srcversion, "CDC9B31C59C20C2DD6812BA");
