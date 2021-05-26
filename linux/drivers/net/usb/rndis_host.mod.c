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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe0a52878, "usbnet_resume" },
	{ 0xc2fc2ce0, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xcbf45ac4, "usbnet_cdc_unbind" },
	{ 0x1f98a2f5, "usbnet_disconnect" },
	{ 0xab423eb0, "skb_clone" },
	{ 0xe993a7e4, "usbnet_generic_cdc_bind" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0x5384ead1, "usbnet_stop" },
	{ 0x25087745, "skb_trim" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xb737a98c, "usbnet_get_stats64" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xa4fb4c81, "usbnet_start_xmit" },
	{ 0x2c883a3, "usbnet_suspend" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xcc38a6df, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0x223bbc82, "usbnet_open" },
	{ 0xfd8505d2, "usb_interrupt_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x109d264a, "eth_mac_addr" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "FD9D290B5F31379C2153C14");
