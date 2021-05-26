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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x1f98a2f5, "usbnet_disconnect" },
	{ 0xc2fc2ce0, "usbnet_probe" },
	{ 0xd36d794, "usbnet_set_link_ksettings" },
	{ 0x2ead726, "usbnet_get_link_ksettings" },
	{ 0xc7a0603e, "usbnet_get_link" },
	{ 0x36e958bb, "usbnet_nway_reset" },
	{ 0xad954ac7, "usbnet_set_msglevel" },
	{ 0x92d535d7, "usbnet_get_msglevel" },
	{ 0x9f0afc0d, "usbnet_get_drvinfo" },
	{ 0xb737a98c, "usbnet_get_stats64" },
	{ 0xcc38a6df, "usbnet_tx_timeout" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0xa4fb4c81, "usbnet_start_xmit" },
	{ 0x5384ead1, "usbnet_stop" },
	{ 0x223bbc82, "usbnet_open" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0x25087745, "skb_trim" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9eaf0d, "of_get_mac_address" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x31eda930, "usbnet_get_endpoints" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x90cb3a91, "mii_nway_restart" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0xe0a52878, "usbnet_resume" },
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0x250b521c, "usbnet_change_mtu" },
	{ 0xc6cdc40b, "mii_ethtool_gset" },
	{ 0x10c40ba4, "mii_check_media" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x20a84396, "usbnet_read_cmd" },
	{ 0x62cc6821, "usbnet_read_cmd_nopm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a9edf7f, "usbnet_write_cmd" },
	{ 0xfeaa55d8, "usbnet_write_cmd_nopm" },
	{ 0xbd6841d4, "crc16" },
	{ 0x10661ff9, "generic_mii_ioctl" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x6058baeb, "usbnet_defer_kevent" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7E5788BEF9C16AE9EF1CF91");
