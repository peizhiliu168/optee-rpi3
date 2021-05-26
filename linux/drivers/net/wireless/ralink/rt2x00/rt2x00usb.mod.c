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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x6a515336, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x8b49c762, "rt2x00lib_dmastart" },
	{ 0x7ccfd66e, "rt2x00queue_flush_queue" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe4eb2ff1, "rt2x00queue_for_each_entry" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xef51cd1f, "rt2x00queue_start_queue" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x8e1ecea8, "rt2x00lib_remove_dev" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x884cc7f4, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x400f88a9, "rt2x00lib_rxdone" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x9fc0ee0d, "rt2x00lib_txdone_noinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcf81911f, "rt2x00lib_dmadone" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x21e1c09f, "rt2x00lib_probe_dev" },
	{ 0xd7999d4e, "rt2x00queue_stop_queue" },
	{ 0x5ab542f1, "rt2x00lib_suspend" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x9de9d06e, "__skb_pad" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "8EEEEC015EE0B18A21ED01F");
