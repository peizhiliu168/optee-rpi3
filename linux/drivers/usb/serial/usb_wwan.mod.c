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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xab6b7c4f, "usb_get_from_anchor" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbefb941c, "usb_autopm_put_interface_async" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x6b912fd1, "tty_insert_flip_string_fixed_flag" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc6cbbc89, "capable" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x3670a1b8, "usb_autopm_get_interface_async" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xd88da404, "usb_autopm_get_interface_no_resume" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xffbaba64, "usb_serial_port_softint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbserial");


MODULE_INFO(srcversion, "DBF9527330C65FA3B53381E");
