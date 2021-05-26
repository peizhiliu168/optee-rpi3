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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9d0602bf, "release_sock" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0xabb134f6, "nf_ct_netns_put" },
	{ 0x93b5383a, "kernel_sendmsg" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xeca1aa47, "genl_register_family" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x909aa57c, "genl_unregister_family" },
	{ 0x58d07c94, "ip_local_out" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbc011301, "sock_release" },
	{ 0xc944ae01, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x44f42abd, "ipv4_update_pmtu" },
	{ 0xeb39e5ad, "proc_create_net_single" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2124474, "ip_send_check" },
	{ 0xa8bfbcd2, "sock_recvmsg" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa480866c, "nf_ct_expect_init" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2a04d77d, "sock_create_kern" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5397c6cc, "__skb_checksum" },
	{ 0x1e5cdf5b, "skb_set_owner_w" },
	{ 0x999e8297, "vfree" },
	{ 0xd7ae1f2a, "__icmp_send" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a24a078, "skb_realloc_headroom" },
	{ 0xc7d6fde8, "nf_ct_deliver_cached_events" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x97d142d, "nf_hook_slow" },
	{ 0x25087745, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xdeed3fd4, "nf_ct_delete" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcd86d564, "ip_defrag" },
	{ 0x5831d6e, "skb_checksum" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4f9f2557, "__nf_conntrack_confirm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xabdd6d9d, "inet_addr_type" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0xb576399b, "inet_select_addr" },
	{ 0xb2a2f3ee, "nf_unregister_net_hooks" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa7e86960, "nf_ct_expect_put" },
	{ 0xcd8c47ff, "ip_mc_join_group" },
	{ 0xf09bcb10, "iov_iter_kvec" },
	{ 0xf4fe9b3a, "skb_ensure_writable" },
	{ 0xa34d66f3, "nf_ct_expect_alloc" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa4b05a51, "ip_route_me_harder" },
	{ 0x2ef8c722, "nf_conntrack_alter_reply" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc815530c, "init_net" },
	{ 0xdc9ec6e3, "__skb_get_hash" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb05fc310, "sysctl_rmem_max" },
	{ 0xfac8865f, "sysctl_wmem_max" },
	{ 0x5bee7acd, "module_put" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xe42eeb37, "nf_register_net_hooks" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x2d3267c, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x6cd078bb, "proc_create_net_data" },
	{ 0x8988b841, "__dev_get_by_name" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xf885df2a, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0x85ccf583, "__module_get" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2f9f290c, "udp_set_csum" },
	{ 0xeb629393, "genlmsg_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa5819fc3, "nf_ct_netns_get" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0xbdd3adbb, "nf_register_sockopt" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xaf7db5d1, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0xa37ca8d7, "inet_get_local_port_range" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4ddb38f0, "__ip_select_ident" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xd9c09bcd, "nf_conntrack_find_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x45fdf7dc, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "D98100F31C2694A169510A5");