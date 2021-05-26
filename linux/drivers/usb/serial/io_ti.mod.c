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
	{ 0xaaf58d69, "usb_serial_generic_get_icount" },
	{ 0x5e278473, "usb_serial_generic_tiocmiwait" },
	{ 0xb8143aef, "usb_serial_deregister_drivers" },
	{ 0x3fbdbaf5, "usb_serial_register_drivers" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe0b63eab, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x6b912fd1, "tty_insert_flip_string_fixed_flag" },
	{ 0xb555309c, "tty_kref_put" },
	{ 0xa2403464, "tty_port_tty_get" },
	{ 0xf4f00dd5, "tty_wakeup" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1608p0215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0244d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0247d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D6E7FC62C4DCD941F94E2B8");
