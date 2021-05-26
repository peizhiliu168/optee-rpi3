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
	{ 0x2136e7ce, "netdev_info" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc6cdc40b, "mii_ethtool_gset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7a13604c, "phy_disconnect" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe0a52878, "usbnet_resume" },
	{ 0x14fcd8df, "phy_stop" },
	{ 0xc2fc2ce0, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x16150267, "usbnet_link_change" },
	{ 0x16f8eeb1, "__mdiobus_register" },
	{ 0x81a3cac6, "phy_ethtool_nway_reset" },
	{ 0x1f98a2f5, "usbnet_disconnect" },
	{ 0x10661ff9, "generic_mii_ioctl" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5384ead1, "usbnet_stop" },
	{ 0x670b64d6, "usbnet_update_max_qlen" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x55d524b, "mdiobus_unregister" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x983a2700, "phy_print_status" },
	{ 0x36e958bb, "usbnet_nway_reset" },
	{ 0xd36d794, "usbnet_set_link_ksettings" },
	{ 0x766cb2f4, "phy_start" },
	{ 0x90cb3a91, "mii_nway_restart" },
	{ 0xb737a98c, "usbnet_get_stats64" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x915aaec9, "eth_platform_get_mac_address" },
	{ 0xbc2f50eb, "mdiobus_free" },
	{ 0x31eda930, "usbnet_get_endpoints" },
	{ 0x2ead726, "usbnet_get_link_ksettings" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9f0afc0d, "usbnet_get_drvinfo" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x62cc6821, "usbnet_read_cmd_nopm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xa4fb4c81, "usbnet_start_xmit" },
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0xc7a0603e, "usbnet_get_link" },
	{ 0xfeaa55d8, "usbnet_write_cmd_nopm" },
	{ 0xca44926c, "phy_ethtool_get_link_ksettings" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0x20a84396, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc38a6df, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x695ca9b6, "genphy_resume" },
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0x223bbc82, "usbnet_open" },
	{ 0x10c40ba4, "mii_check_media" },
	{ 0x92d535d7, "usbnet_get_msglevel" },
	{ 0x126033ef, "netdev_err" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x26b396f7, "usbnet_unlink_rx_urbs" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0xf2345629, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2bb79e02, "usbnet_write_cmd_async" },
	{ 0x250b521c, "usbnet_change_mtu" },
	{ 0x5e4c2212, "phy_connect" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xc25f685b, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa643785a, "mii_link_ok" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x99cfb896, "skb_put" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x4a9edf7f, "usbnet_write_cmd" },
	{ 0xad954ac7, "usbnet_set_msglevel" },
	{ 0xa7e41829, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8436DF6FDF608921B29656D");
