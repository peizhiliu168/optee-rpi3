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
	{ 0x2136e7ce, "netdev_info" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x11f64c48, "lbs_host_sleep_cfg" },
	{ 0xe668680a, "lbs_resume" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfdd1aa06, "lbs_stop_card" },
	{ 0x4b4aa032, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc44fa3f0, "lbs_start_card" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xa8b130a, "lbs_queue_event" },
	{ 0xb198b83b, "lbs_send_tx_feedback" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf3d61da3, "lbs_get_firmware_async" },
	{ 0xb329219a, "lbs_cmd_copyback" },
	{ 0x3ca8b8df, "lbs_suspend" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7f606e90, "lbs_remove_card" },
	{ 0x1a11bd0d, "lbs_process_rxed_packet" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0xf1e56dd6, "lbs_host_to_card_done" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x550ba772, "lbs_add_card" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x99cfb896, "skb_put" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x250a311c, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "810C90B705B65653ECF1F68");
