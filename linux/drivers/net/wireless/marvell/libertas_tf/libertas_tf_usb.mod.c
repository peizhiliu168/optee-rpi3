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
	{ 0x552740e2, "__lbtf_cmd" },
	{ 0xbd3c1cff, "lbtf_cmd_copyback" },
	{ 0x98a9cfeb, "lbtf_cmd_response_rx" },
	{ 0xf7150903, "lbtf_send_tx_feedback" },
	{ 0x348d0f88, "lbtf_add_card" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51fdcf8c, "lbtf_remove_card" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf8a10579, "kernel_param_unlock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6a86dfdb, "kernel_param_lock" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x95439da2, "lbtf_rx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc8e1d6fb, "lbtf_bcn_sent" },
	{ 0x99cfb896, "skb_put" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "libertas_tf");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "47352EB8E8343390078FDA7");
