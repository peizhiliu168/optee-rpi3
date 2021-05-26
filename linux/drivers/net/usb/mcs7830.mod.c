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
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0x1f98a2f5, "usbnet_disconnect" },
	{ 0xc2fc2ce0, "usbnet_probe" },
	{ 0xb737a98c, "usbnet_get_stats64" },
	{ 0xcc38a6df, "usbnet_tx_timeout" },
	{ 0x250b521c, "usbnet_change_mtu" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0xa4fb4c81, "usbnet_start_xmit" },
	{ 0x5384ead1, "usbnet_stop" },
	{ 0x223bbc82, "usbnet_open" },
	{ 0xd36d794, "usbnet_set_link_ksettings" },
	{ 0x2ead726, "usbnet_get_link_ksettings" },
	{ 0xc7a0603e, "usbnet_get_link" },
	{ 0x36e958bb, "usbnet_nway_reset" },
	{ 0xad954ac7, "usbnet_set_msglevel" },
	{ 0x92d535d7, "usbnet_get_msglevel" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x31eda930, "usbnet_get_endpoints" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xe0a52878, "usbnet_resume" },
	{ 0x2bb79e02, "usbnet_write_cmd_async" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x9f0afc0d, "usbnet_get_drvinfo" },
	{ 0x4829a47e, "memcpy" },
	{ 0x10661ff9, "generic_mii_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x20a84396, "usbnet_read_cmd" },
	{ 0x4a9edf7f, "usbnet_write_cmd" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x16150267, "usbnet_link_change" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x25087745, "skb_trim" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "710D0221EB218926DD22EBB");
