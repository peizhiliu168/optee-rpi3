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
	{ 0xb80cb74a, "usb_serial_generic_unthrottle" },
	{ 0x1ca2eb5f, "usb_serial_generic_throttle" },
	{ 0xb8143aef, "usb_serial_deregister_drivers" },
	{ 0x3fbdbaf5, "usb_serial_register_drivers" },
	{ 0x75dfb435, "usb_serial_generic_open" },
	{ 0x9fe7fe78, "usb_serial_generic_close" },
	{ 0x124b7905, "ezusb_fx1_ihex_firmware_download" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xe0b63eab, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbserial,ezusb");

MODULE_ALIAS("usb:v0710p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0710p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "60923B9B8D334AB5EC1CE77");
