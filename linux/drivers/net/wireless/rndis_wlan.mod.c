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
	{ 0x63a22796, "param_ops_string" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xe0a52878, "usbnet_resume" },
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0x1f98a2f5, "usbnet_disconnect" },
	{ 0xc2fc2ce0, "usbnet_probe" },
	{ 0xd468625c, "rndis_tx_fixup" },
	{ 0xb14dd2e8, "rndis_rx_fixup" },
	{ 0xfeff752, "rndis_status" },
	{ 0xb737a98c, "usbnet_get_stats64" },
	{ 0xcc38a6df, "usbnet_tx_timeout" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0xa4fb4c81, "usbnet_start_xmit" },
	{ 0x5384ead1, "usbnet_stop" },
	{ 0x223bbc82, "usbnet_open" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x6672460c, "wiphy_register" },
	{ 0x4fd06ba2, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd8fcf8a0, "wiphy_new_nm" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xcc33237e, "cfg80211_disconnected" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x94068913, "cfg80211_roamed" },
	{ 0x2f2da724, "cfg80211_ibss_joined" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xf18839ca, "usbnet_resume_rx" },
	{ 0x3da08518, "cfg80211_pmksa_candidate_notify" },
	{ 0x76a8173d, "cfg80211_michael_mic_failure" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x678c4101, "cfg80211_cqm_rssi_notify" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x292ccf36, "cfg80211_put_bss" },
	{ 0xf00ba6e, "cfg80211_inform_bss_data" },
	{ 0x206df454, "cfg80211_connect_done" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x126033ef, "netdev_err" },
	{ 0x2e1b797e, "usbnet_purge_paused_rxq" },
	{ 0x78865480, "usbnet_pause_rx" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xbd093a33, "ieee80211_get_channel" },
	{ 0xa93b342b, "cfg80211_scan_done" },
	{ 0xaf8c68cd, "wiphy_free" },
	{ 0xf842c779, "wiphy_unregister" },
	{ 0x2c16492f, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe350548b, "rndis_command" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11089ac7, "_ctype" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "rndis_host,cfg80211");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "AEC3E86F8E3A19A4D8F6728");
