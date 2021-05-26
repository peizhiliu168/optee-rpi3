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
	{ 0x5e278473, "usb_serial_generic_tiocmiwait" },
	{ 0xb8143aef, "usb_serial_deregister_drivers" },
	{ 0x3fbdbaf5, "usb_serial_register_drivers" },
	{ 0xa7f01c6c, "usb_serial_handle_break" },
	{ 0xb2b72538, "usb_serial_handle_sysrq_char" },
	{ 0xc0b7ea56, "__tty_insert_flip_char" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x75dfb435, "usb_serial_generic_open" },
	{ 0xe0b63eab, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xae6444b4, "usb_serial_generic_resume" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x9fe7fe78, "usb_serial_generic_close" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb555309c, "tty_kref_put" },
	{ 0xb3aafdc5, "usb_serial_handle_dcd_change" },
	{ 0xa2403464, "tty_port_tty_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p0706d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "46A3092E8BADC4F07F65591");
