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
	{ 0x2d3385d3, "system_wq" },
	{ 0x143dc9bf, "ath6kl_core_destroy" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x8be3822a, "ath6kl_core_cleanup" },
	{ 0x27c41810, "ath6kl_core_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x66e56ba4, "ath6kl_stop_txrx" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xca189d8c, "ath6kl_core_init" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x8cb5b882, "ath6kl_core_rx_complete" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf362afc, "ath6kl_core_tx_complete" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x99cfb896, "skb_put" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C2731D87CEC8826D4392118");
