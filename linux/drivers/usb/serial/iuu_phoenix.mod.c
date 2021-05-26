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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xb8143aef, "usb_serial_deregister_drivers" },
	{ 0x3fbdbaf5, "usb_serial_register_drivers" },
	{ 0xffbaba64, "usb_serial_port_softint" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x6b912fd1, "tty_insert_flip_string_fixed_flag" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0xe0b63eab, "tty_encode_baud_rate" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v104Fp0004d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CB480DF191E9283B796D069");
