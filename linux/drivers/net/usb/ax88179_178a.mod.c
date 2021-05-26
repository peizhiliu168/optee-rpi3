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
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0x36e958bb, "usbnet_nway_reset" },
	{ 0xad954ac7, "usbnet_set_msglevel" },
	{ 0x92d535d7, "usbnet_get_msglevel" },
	{ 0xb737a98c, "usbnet_get_stats64" },
	{ 0xcc38a6df, "usbnet_tx_timeout" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0xa4fb4c81, "usbnet_start_xmit" },
	{ 0x5384ead1, "usbnet_stop" },
	{ 0x223bbc82, "usbnet_open" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xc6cdc40b, "mii_ethtool_gset" },
	{ 0x31eda930, "usbnet_get_endpoints" },
	{ 0x90cb3a91, "mii_nway_restart" },
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x2bb79e02, "usbnet_write_cmd_async" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0xe0a52878, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x16150267, "usbnet_link_change" },
	{ 0x670b64d6, "usbnet_update_max_qlen" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a9edf7f, "usbnet_write_cmd" },
	{ 0xfeaa55d8, "usbnet_write_cmd_nopm" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x20a84396, "usbnet_read_cmd" },
	{ 0x62cc6821, "usbnet_read_cmd_nopm" },
	{ 0x10661ff9, "generic_mii_ioctl" },
	{ 0xfc16b449, "mii_ethtool_get_link_ksettings" },
	{ 0x8f064221, "mii_ethtool_set_link_ksettings" },
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x25087745, "skb_trim" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E45F2A44FA246AD40F2A09D");
