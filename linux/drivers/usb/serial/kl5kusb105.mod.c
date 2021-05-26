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
	{ 0xe0b63eab, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x6b912fd1, "tty_insert_flip_string_fixed_flag" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0830p0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "406675BE3EE729C25E2647B");
