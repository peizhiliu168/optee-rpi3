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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x111c3b1e, "netif_device_attach" },
	{ 0x31c82fc2, "netif_device_detach" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xdc4da39, "wireless_send_event" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x98cf60b3, "strlen" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v0586p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp6051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6823d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8D87F7CC5737A47E9D22582");
