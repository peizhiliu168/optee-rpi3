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
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb5a19c36, "skb_to_sgvec" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0x27f006ff, "usb_init_urb" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xebd63c01, "mt76_rx_poll_complete" },
	{ 0xcac930cd, "__page_frag_cache_drain" },
	{ 0x2a85771a, "bpf_trace_run3" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe527432e, "usb_unpoison_urb" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0xafdd2ec7, "usb_poison_urb" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x95925ab3, "build_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x2675b192, "mt76_txq_schedule" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0x9a9777a4, "mt76_tx_status_check" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3f1c890f, "ieee80211_wake_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x87549229, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0x87945234, "mt76_has_tx_pending" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0x35daae0d, "skb_add_rx_frag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
};

MODULE_INFO(depends, "mt76,mac80211");


MODULE_INFO(srcversion, "68D84A5FBE63663A7F17527");
