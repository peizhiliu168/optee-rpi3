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
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x99cfb896, "skb_put" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05E3p0502d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D52ABA6EBE9B511DB659C6E");
