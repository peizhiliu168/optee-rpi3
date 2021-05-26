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
	{ 0x4a3e1b37, "can_change_mtu" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x3a592757, "can_free_echo_skb" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1c33a1c9, "can_put_echo_skb" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xdf111fa5, "open_candev" },
	{ 0x528600aa, "can_get_echo_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7aee1d11, "close_candev" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7aba61ed, "register_candev" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb779b7f3, "alloc_candev_mqs" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa72b12c3, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a6983bb, "can_bus_off" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x1165026a, "alloc_can_err_skb" },
	{ 0x126033ef, "netdev_err" },
	{ 0x31c82fc2, "netif_device_detach" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x760e8e9e, "free_candev" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v12D6p0444d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "89294DB496A48D70925E997");
