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
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x4829a47e, "memcpy" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0FC5p1227d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0237A2D9B57589DF4759523");
