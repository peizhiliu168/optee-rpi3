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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x5e278473, "usb_serial_generic_tiocmiwait" },
	{ 0xb8143aef, "usb_serial_deregister_drivers" },
	{ 0x3fbdbaf5, "usb_serial_register_drivers" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x6f0fd09c, "usb_reset_configuration" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xe0b63eab, "tty_encode_baud_rate" },
	{ 0x48bdf939, "tty_hangup" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x6b912fd1, "tty_insert_flip_string_fixed_flag" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb555309c, "tty_kref_put" },
	{ 0xa2403464, "tty_port_tty_get" },
	{ 0xffbaba64, "usb_serial_port_softint" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xdcb764ad, "memset" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1163p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1163p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17DDp5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D9Fp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6737p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D0p4101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "60623733B69EAF0B79A2D00");
