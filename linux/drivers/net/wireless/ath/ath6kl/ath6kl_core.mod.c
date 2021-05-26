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
	{ 0xc8c36840, "register_netdevice" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xaf8c68cd, "wiphy_free" },
	{ 0x206df454, "cfg80211_connect_done" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf00ba6e, "cfg80211_inform_bss_data" },
	{ 0x8960df98, "cfg80211_conn_failed" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcaac5422, "cfg80211_chandef_create" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x52b07875, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa21e8217, "cfg80211_rx_mgmt" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x105b723d, "cfg80211_check_station_change" },
	{ 0x25087745, "skb_trim" },
	{ 0x18e82e6c, "cfg80211_mgmt_tx_status" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x3da08518, "cfg80211_pmksa_candidate_notify" },
	{ 0xdcb764ad, "memset" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x86e81b9d, "cfg80211_get_bss" },
	{ 0xc5850110, "printk" },
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xf842c779, "wiphy_unregister" },
	{ 0x6c1e1653, "cfg80211_del_sta_sinfo" },
	{ 0xbd093a33, "ieee80211_get_channel" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x76a8173d, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x2f2da724, "cfg80211_ibss_joined" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe2f10618, "cfg80211_get_drvinfo" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0xc9988bde, "cfg80211_ch_switch_notify" },
	{ 0x94068913, "cfg80211_roamed" },
	{ 0x292ccf36, "cfg80211_put_bss" },
	{ 0x6672460c, "wiphy_register" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xe386b089, "cfg80211_ready_on_channel" },
	{ 0xd8fcf8a0, "wiphy_new_nm" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4a53b4a0, "of_find_compatible_node" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x14d91d5f, "of_get_property" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xcc33237e, "cfg80211_disconnected" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xcc238408, "netdev_set_default_ethtool_ops" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x2f57b3b4, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e90322c, "regulatory_hint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x96848186, "scnprintf" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x1486bac4, "cfg80211_remain_on_channel_expired" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x9e75a7f5, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa93b342b, "cfg80211_scan_done" },
	{ 0x99cfb896, "skb_put" },
	{ 0xded99c04, "of_node_put" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd9ae42d9, "cfg80211_cqm_txe_notify" },
	{ 0x1e392b30, "cfg80211_sched_scan_results" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "58797B092A99BA24A04791B");
