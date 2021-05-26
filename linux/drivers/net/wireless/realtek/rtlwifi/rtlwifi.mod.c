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
	{ 0xe899222d, "ieee80211_rx_irqsafe" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x35b94cdd, "cfg80211_unlink_bss" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xa4c47b95, "single_open" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8b1f9945, "single_release" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xad90b5f7, "ieee80211_resume_disconnect" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc8299d74, "freq_reg_info" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0xc5a90e2c, "wiphy_rfkill_start_polling" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x457a3d90, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa356d9f3, "skb_unlink" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x86e81b9d, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfb8f50c1, "ieee80211_rate_control_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf658ca70, "wiphy_apply_custom_regulatory" },
	{ 0x4db09129, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1dd80e82, "simple_open" },
	{ 0xdb6331ad, "wiphy_rfkill_stop_polling" },
	{ 0x99883059, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x1d828886, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x292ccf36, "cfg80211_put_bss" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1dfadfa, "wiphy_rfkill_set_hw_state" },
	{ 0x2ae38128, "ieee80211_tx_status_irqsafe" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x3743cdfb, "ieee80211_find_sta" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x70f515db, "ieee80211_get_hdrlen_from_skb" },
	{ 0x4b0f003, "ieee80211_rate_control_unregister" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x930c8c1e, "ieee80211_start_tx_ba_session" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x80cc1cd6, "ieee80211_connection_loss" },
	{ 0xc23454e5, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "5562EAB9A1E72430FCE59FE");
