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
	{ 0x6a1bf678, "snd_rawmidi_proceed" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x61e4ac4b, "snd_rawmidi_set_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fbc6d29, "snd_rawmidi_new" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xc2f2d49, "snd_ctl_notify" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbc6842e, "snd_rawmidi_transmit_peek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0xce807a25, "up_write" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd2b45b8e, "usb_urb_ep_type_check" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xab41133, "snd_rawmidi_transmit_ack" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdba8bef9, "snd_ctl_new1" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd88da404, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x2d988d54, "snd_ctl_add" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x613591f1, "snd_rawmidi_transmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x143eb036, "snd_rawmidi_receive" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "326E8B743817120EE17D140");
