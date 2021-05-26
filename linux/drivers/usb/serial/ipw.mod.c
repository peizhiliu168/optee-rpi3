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
	{ 0xea210b89, "usb_wwan_write" },
	{ 0x21a990c8, "usb_wwan_port_remove" },
	{ 0xd0b8b32d, "usb_wwan_port_probe" },
	{ 0xb8143aef, "usb_serial_deregister_drivers" },
	{ 0x3fbdbaf5, "usb_serial_register_drivers" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd48ce, "usb_wwan_open" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3ae125c1, "usb_wwan_close" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usb_wwan,usbserial");

MODULE_ALIAS("usb:v0BC3p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "23F4FDAF5BD313DBDE198CC");
