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
	{ 0xe899222d, "ieee80211_rx_irqsafe" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40d8df07, "ieee80211_stop_queues" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbd2bcda2, "ieee80211_wake_queues" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ae38128, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4f0df7cb, "ieee80211_get_buffered_bc" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "mac80211");


MODULE_INFO(srcversion, "B2561016870AC290103DC25");
