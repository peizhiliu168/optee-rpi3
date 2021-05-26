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
	{ 0xc2fc2ce0, "usbnet_probe" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x31eda930, "usbnet_get_endpoints" },
	{ 0x14cfbff1, "usbnet_device_suggests_idle" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0x25087745, "skb_trim" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x99cfb896, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "10D97D26E5592B8F6591AB8");
