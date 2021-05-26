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
	{ 0xb737a98c, "usbnet_get_stats64" },
	{ 0xcc38a6df, "usbnet_tx_timeout" },
	{ 0xcd9e8353, "cdc_ncm_change_mtu" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0xa4fb4c81, "usbnet_start_xmit" },
	{ 0x5384ead1, "usbnet_stop" },
	{ 0x223bbc82, "usbnet_open" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x25d72aa7, "in6_dev_finish_destroy" },
	{ 0x2c7ac55c, "__vlan_find_dev_deep_rcu" },
	{ 0x7a59ae6e, "ipv6_stub" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0x4829a47e, "memcpy" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xa4e9b865, "cdc_ncm_rx_verify_ndp16" },
	{ 0xba54aa86, "cdc_ncm_rx_verify_nth16" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x299d5d4e, "usb_match_id" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xb5449063, "usb_cdc_wdm_register" },
	{ 0x525f1ae7, "cdc_ncm_bind_common" },
	{ 0x8f9d8504, "cdc_ncm_select_altsetting" },
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0xe0a52878, "usbnet_resume" },
	{ 0x17efb419, "cdc_ncm_unbind" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x3b52e03b, "cdc_ncm_fill_tx_frame" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x126033ef, "netdev_err" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "E78127BCABE41799AC5303D");
