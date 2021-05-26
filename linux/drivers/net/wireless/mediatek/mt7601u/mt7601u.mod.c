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
	{ 0xd250bd8c, "ieee80211_rx_napi" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xa4c47b95, "single_open" },
	{ 0x5189409c, "debugfs_create_u8" },
	{ 0xe54d6523, "firmware_request_cache" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8b1f9945, "single_release" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8eb62c56, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x457a3d90, "seq_read" },
	{ 0x2a85771a, "bpf_trace_run3" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0x25087745, "skb_trim" },
	{ 0x40d8df07, "ieee80211_stop_queues" },
	{ 0xfce1fc17, "simple_attr_read" },
	{ 0x6b5b5484, "ieee80211_stop_queue" },
	{ 0x7819027d, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0ffee46, "debugfs_create_u32" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3346190f, "bpf_trace_run9" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x564ae5a2, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x446c7b26, "ieee80211_free_txskb" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbd2bcda2, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0xafdd2ec7, "usb_poison_urb" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x99f30429, "simple_attr_release" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0x327786b7, "devm_kmemdup" },
	{ 0x56380768, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x1d828886, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8d53e717, "ieee80211_send_bar" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x503f0de3, "ieee80211_get_tx_rates" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3f1c890f, "ieee80211_wake_queue" },
	{ 0x87549229, "event_triggers_call" },
	{ 0x70f515db, "ieee80211_get_hdrlen_from_skb" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0xfc822280, "ieee80211_register_hw" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0xe324a495, "ieee80211_tx_status_ext" },
	{ 0x35daae0d, "skb_add_rx_frag" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xd2239257, "ieee80211_free_hw" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0x29361773, "complete" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xddab9ab2, "bpf_trace_run4" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x95bcaecf, "simple_attr_open" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xc23454e5, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xd41e02ae, "simple_attr_write" },
	{ 0x9de9d06e, "__skb_pad" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B80002A5E3CF7791618E797");
