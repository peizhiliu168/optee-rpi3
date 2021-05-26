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
	{ 0x1f98a2f5, "usbnet_disconnect" },
	{ 0xc2fc2ce0, "usbnet_probe" },
	{ 0xefbc2dff, "cdc_ncm_tx_fixup" },
	{ 0x60f49e4, "cdc_ncm_rx_fixup" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb5449063, "usb_cdc_wdm_register" },
	{ 0x525f1ae7, "cdc_ncm_bind_common" },
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0xe0a52878, "usbnet_resume" },
	{ 0x17efb419, "cdc_ncm_unbind" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip16in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip46in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip76in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc03ip16in*");

MODULE_INFO(srcversion, "B33BBD8020DA97C6A188A82");
