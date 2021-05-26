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
	{ 0xa2403464, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa1e549e1, "bus_register" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe947d7dd, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x6c1fca85, "tty_port_open" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfc535947, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x99084a5f, "tty_register_driver" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xae0162e7, "put_tty_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2441b780, "tty_set_operations" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xc0b7ea56, "__tty_insert_flip_char" },
	{ 0x9d2e6a90, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x4830eca5, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe70b6522, "tty_ldisc_deref" },
	{ 0xb53ed649, "tty_port_register_device" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0xe527432e, "usb_unpoison_urb" },
	{ 0xafdd2ec7, "usb_poison_urb" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x41faacbe, "tty_port_init" },
	{ 0x6b912fd1, "tty_insert_flip_string_fixed_flag" },
	{ 0xf7ea90d7, "tty_port_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6f1655f0, "tty_vhangup" },
	{ 0x17ab96e4, "tty_ldisc_ref" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x31faa7fb, "device_add" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x66af638d, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x92815399, "usb_store_new_id" },
	{ 0x299d5d4e, "usb_match_id" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x57622d66, "tty_port_tty_wakeup" },
	{ 0x5bee7acd, "module_put" },
	{ 0x677e804a, "tty_unregister_device" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x91221da3, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc5ba782a, "tty_unregister_driver" },
	{ 0x48bdf939, "tty_hangup" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x52557f9, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68acdcaa, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f696742, "device_initialize" },
	{ 0xec44c86f, "usb_match_one_id" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb555309c, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x52088916, "driver_attach" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x669fe96d, "param_ops_ushort" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x93dbddd9, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AD14EE38A11E09A5E7CC930");
