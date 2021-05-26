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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x67fa2d43, "snd_pcm_period_elapsed" },
	{ 0x27f006ff, "usb_init_urb" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xe0a82311, "snd_pcm_stop_xrun" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x61e4ac4b, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xee3a52f8, "snd_card_disconnect" },
	{ 0x4fbc6d29, "snd_rawmidi_new" },
	{ 0x69ef5410, "_snd_ctl_add_slave" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x684e4dae, "snd_pcm_set_ops" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x25949b50, "snd_ctl_boolean_stereo_info" },
	{ 0x38dc0293, "snd_card_free_when_closed" },
	{ 0x1a133dba, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xafdd2ec7, "usb_poison_urb" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7a44bc6f, "snd_pcm_lib_ioctl" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x766d3ded, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x65ac6a52, "snd_ctl_make_virtual_master" },
	{ 0x41540992, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xdba8bef9, "snd_ctl_new1" },
	{ 0xfd8505d2, "usb_interrupt_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0xde3a8302, "snd_pcm_new" },
	{ 0xc46a4a04, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x2d988d54, "snd_ctl_add" },
	{ 0x613591f1, "snd_rawmidi_transmit" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x143eb036, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CB3529736C1EBE5A8B098F3");
