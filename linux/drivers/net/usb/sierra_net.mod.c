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
	{ 0xe0a52878, "usbnet_resume" },
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0x1f98a2f5, "usbnet_disconnect" },
	{ 0xd36d794, "usbnet_set_link_ksettings" },
	{ 0x2ead726, "usbnet_get_link_ksettings" },
	{ 0x36e958bb, "usbnet_nway_reset" },
	{ 0xad954ac7, "usbnet_set_msglevel" },
	{ 0x92d535d7, "usbnet_get_msglevel" },
	{ 0xb737a98c, "usbnet_get_stats64" },
	{ 0xcc38a6df, "usbnet_tx_timeout" },
	{ 0x250b521c, "usbnet_change_mtu" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0xa4fb4c81, "usbnet_start_xmit" },
	{ 0x5384ead1, "usbnet_stop" },
	{ 0x223bbc82, "usbnet_open" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x16150267, "usbnet_link_change" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x20a84396, "usbnet_read_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x31eda930, "usbnet_get_endpoints" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb829fc4, "usbnet_status_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaab85e48, "usbnet_status_start" },
	{ 0xc2fc2ce0, "usbnet_probe" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a9edf7f, "usbnet_write_cmd" },
	{ 0x126033ef, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0x25087745, "skb_trim" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9f0afc0d, "usbnet_get_drvinfo" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "79024F3EC1EE44C7D105361");
