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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x67fa2d43, "snd_pcm_period_elapsed" },
	{ 0x27f006ff, "usb_init_urb" },
	{ 0xa32fe451, "snd_pcm_hw_constraint_msbits" },
	{ 0xe0a82311, "snd_pcm_stop_xrun" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xee3a52f8, "snd_card_disconnect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x684e4dae, "snd_pcm_set_ops" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x38dc0293, "snd_card_free_when_closed" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x1a133dba, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0xdd9970ad, "usb_driver_claim_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7a44bc6f, "snd_pcm_lib_ioctl" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6312af17, "__snd_usbmidi_create" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x41540992, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0xff48b5b6, "snd_pcm_hw_constraint_minmax" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xde3a8302, "snd_pcm_new" },
	{ 0xc46a4a04, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd");

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FD14233FD7998CDB90F94D9");
