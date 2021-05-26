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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0x591659c8, "mt76x02_mac_set_beacon" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x276710dc, "mt76u_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9a2a39e1, "mt76_tx_complete_skb" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x38c78034, "mt76x02_mac_write_txwi" },
	{ 0xb353e3f7, "mt76x02_init_beacon_config" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x70f515db, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe5db2db, "mt76u_single_wr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xefbfc248, "mt76_tx_status_skb_add" },
	{ 0x7c55be38, "mt76_mcu_msg_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdba7b9d, "mt76x02_resync_beacon_timer" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x99cfb896, "skb_put" },
	{ 0xe7d278c9, "mt76x02_remove_hdr_pad" },
	{ 0x37598dad, "mt76x02_enqueue_buffered_bc" },
	{ 0x8aa2ee68, "ieee80211_iterate_interfaces" },
	{ 0xb977209d, "mt76x02_update_beacon_iter" },
	{ 0x9de9d06e, "__skb_pad" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76-usb,mt76,cfg80211,mac80211");


MODULE_INFO(srcversion, "4C7C164B9C2DC3AC3011134");
