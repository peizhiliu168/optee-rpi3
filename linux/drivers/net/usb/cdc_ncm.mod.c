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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbba2b2fc, "ethtool_op_get_ts_info" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xb3622408, "usb_altnum_to_altsetting" },
	{ 0xe0a52878, "usbnet_resume" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xc2fc2ce0, "usbnet_probe" },
	{ 0x16150267, "usbnet_link_change" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x1f98a2f5, "usbnet_disconnect" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0x5384ead1, "usbnet_stop" },
	{ 0x670b64d6, "usbnet_update_max_qlen" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xb1e91d54, "netif_schedule_queue" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x36e958bb, "usbnet_nway_reset" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xd36d794, "usbnet_set_link_ksettings" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xb737a98c, "usbnet_get_stats64" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2ead726, "usbnet_get_link_ksettings" },
	{ 0xdd9970ad, "usb_driver_claim_interface" },
	{ 0x9f0afc0d, "usbnet_get_drvinfo" },
	{ 0xa4fb4c81, "usbnet_start_xmit" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0xc7a0603e, "usbnet_get_link" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x20a84396, "usbnet_read_cmd" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xcc38a6df, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7286a048, "cdc_parse_cdc_header" },
	{ 0xbea10be3, "usbnet_get_ethernet_addr" },
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0x223bbc82, "usbnet_open" },
	{ 0x92d535d7, "usbnet_get_msglevel" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x26b396f7, "usbnet_unlink_rx_urbs" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0x99cfb896, "skb_put" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe272917d, "usbnet_manage_power" },
	{ 0x4a9edf7f, "usbnet_write_cmd" },
	{ 0xad954ac7, "usbnet_set_msglevel" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "8365F7A3EC7909B4B3ECFB3");
