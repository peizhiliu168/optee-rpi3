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
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xf9a482f9, "msleep" },
	{ 0x31eda930, "usbnet_get_endpoints" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x81ade87, "usb_string" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x25087745, "skb_trim" },
	{ 0xf4eb292e, "usbnet_skb_return" },
	{ 0x4829a47e, "memcpy" },
	{ 0x99cfb896, "skb_put" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");

MODULE_INFO(srcversion, "7BD2F6DAAA1EF783C5CC97F");
