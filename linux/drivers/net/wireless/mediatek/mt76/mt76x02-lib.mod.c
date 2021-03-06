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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x32b5eaf5, "mt76_dma_attach" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xa4c47b95, "single_open" },
	{ 0x5189409c, "debugfs_create_u8" },
	{ 0x9a4b8e77, "mt76_rx_aggr_stop" },
	{ 0xe3f211ae, "__mt76_poll" },
	{ 0x8ca01852, "napi_disable" },
	{ 0x7ae03454, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8b1f9945, "single_release" },
	{ 0xeae0ba2e, "ieee80211_radar_detected" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa500890c, "ieee80211_beacon_get_tim" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xbc9493d7, "mt76_rx_aggr_start" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3b3428b4, "mt76_txq_schedule_all" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb66fbd47, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xe7bb49f9, "mt76_txq_init" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf152ee14, "mt76_mcu_get_response" },
	{ 0x457a3d90, "seq_read" },
	{ 0x2a85771a, "bpf_trace_run3" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0x40d8df07, "ieee80211_stop_queues" },
	{ 0x384bf42d, "mt76_seq_puts_array" },
	{ 0x9a2a39e1, "mt76_tx_complete_skb" },
	{ 0xb0ffee46, "debugfs_create_u32" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0xdcb764ad, "memset" },
	{ 0xf9909686, "bpf_trace_run1" },
	{ 0x445bbd39, "mt76_set_irq_mask" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x94839ddf, "ieee80211_iter_keys_rcu" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbd2bcda2, "ieee80211_wake_queues" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5c8e8ee8, "__mt76_poll_msec" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd26a07c4, "netif_napi_add" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x99f30429, "simple_attr_release" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2baad257, "debugfs_create_bool" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x271e8cfe, "mt76_tx_status_skb_done" },
	{ 0x348b0a0c, "__mt76_sta_remove" },
	{ 0xb1fe42ec, "debugfs_attr_read" },
	{ 0x99883059, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe2b30259, "mt76_rx" },
	{ 0x1d828886, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78faccb2, "mt76_wcid_key_setup" },
	{ 0x666ab8d0, "mt76_wcid_alloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x465ad488, "mt76_csa_finish" },
	{ 0xc27bd86c, "__napi_schedule" },
	{ 0x81ca6314, "mt76_tx" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x843b5070, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7e00c2d6, "mt76_register_debugfs" },
	{ 0x8d53e717, "ieee80211_send_bar" },
	{ 0x503f0de3, "ieee80211_get_tx_rates" },
	{ 0x1d2ee0f4, "napi_complete_done" },
	{ 0x4f0df7cb, "ieee80211_get_buffered_bc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0x9a9777a4, "mt76_tx_status_check" },
	{ 0x35e45995, "mt76_dma_cleanup" },
	{ 0x39e4acb4, "mt76_mcu_rx_event" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x87549229, "event_triggers_call" },
	{ 0x70f515db, "ieee80211_get_hdrlen_from_skb" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0x9fed36bb, "ieee80211_restart_hw" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0xb754ca92, "___pskb_trim" },
	{ 0x4c56d451, "mt76_stop_tx_queues" },
	{ 0xe324a495, "ieee80211_tx_status_ext" },
	{ 0xefbfc248, "mt76_tx_status_skb_add" },
	{ 0x4a7459f3, "mt76_csa_check" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xf86d6bbe, "mt76_tx_status_lock" },
	{ 0x7c55be38, "mt76_mcu_msg_alloc" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0x1ad54f83, "mt76_tx_status_skb_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xcd14cb86, "debugfs_attr_write" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8c95110, "mt76_txq_remove" },
	{ 0x95bcaecf, "simple_attr_open" },
	{ 0x8878f72c, "mt76_tx_status_unlock" },
	{ 0xc23454e5, "ieee80211_start_tx_ba_cb_irqsafe" },
};

MODULE_INFO(depends, "mt76,mac80211,cfg80211");


MODULE_INFO(srcversion, "B84BBA6C709FA5DCC401BB9");
