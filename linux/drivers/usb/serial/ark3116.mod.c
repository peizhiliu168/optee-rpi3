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
	{ 0xaaf58d69, "usb_serial_generic_get_icount" },
	{ 0x5e278473, "usb_serial_generic_tiocmiwait" },
	{ 0xb8143aef, "usb_serial_deregister_drivers" },
	{ 0x3fbdbaf5, "usb_serial_register_drivers" },
	{ 0xc0b7ea56, "__tty_insert_flip_char" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x6b912fd1, "tty_insert_flip_string_fixed_flag" },
	{ 0x75dfb435, "usb_serial_generic_open" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x9fe7fe78, "usb_serial_generic_close" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v6547p0232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18ECp3118d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C7BCDCAF99D3911A4F0320A");
