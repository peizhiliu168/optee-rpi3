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
	{ 0xc8c36840, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6f45127b, "ieee802154_hdr_push" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x5a3f42f5, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2a85771a, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25087745, "skb_trim" },
	{ 0x988be57c, "crypto_alloc_sync_skcipher" },
	{ 0xbdd2bc00, "ieee802154_hdr_pull" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xf9909686, "bpf_trace_run1" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0xb0028e46, "netif_receive_skb" },
	{ 0x3c66c3dd, "wpan_phy_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb4f12626, "ieee802154_hdr_peek" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x26f0923b, "crypto_aead_encrypt" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3ce75711, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3a4334e3, "crypto_aead_setkey" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0x99ee9654, "wpan_phy_unregister" },
	{ 0x6ea6b72f, "ieee802154_hdr_peek_addrs" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x87549229, "event_triggers_call" },
	{ 0xa3ed59c8, "crypto_aead_decrypt" },
	{ 0x6e16720, "crypto_aead_setauthsize" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x45094dcb, "crypto_alloc_aead" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0xb386bc2, "dev_alloc_name" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xddab9ab2, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ieee802154,crc-ccitt");


MODULE_INFO(srcversion, "4BD1E9BDE6F3700747A48B5");
