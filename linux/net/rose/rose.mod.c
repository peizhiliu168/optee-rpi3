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
	{ 0x93007c53, "skb_queue_head" },
	{ 0x9d0602bf, "release_sock" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x21ae7992, "proc_create_seq_private" },
	{ 0x74eb1d35, "skb_append" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4502c65a, "asc2ax" },
	{ 0x98cf60b3, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x9004909c, "send_sig" },
	{ 0xce40e5de, "sock_gettstamp" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0xa5ae26ea, "ax25_linkfail_release" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1e5cdf5b, "skb_set_owner_w" },
	{ 0xb614a3d, "ax25_register_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x66381a58, "__sock_queue_rcv_skb" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0xee61c15e, "ax25_find_cb" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xfb0b1f8a, "ax25_listen_release" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xd43ecbf1, "null_ax25_address" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x427e4478, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x242852b9, "ax25_uid_policy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x24d273d1, "add_timer" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0x90faa0ba, "sk_filter_trim_cap" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3908810c, "ax25_send_frame" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x80d80186, "datagram_poll" },
	{ 0x4528f305, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x3c4df0e8, "sock_alloc_send_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x8988b841, "__dev_get_by_name" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x8ede9e26, "ax25_protocol_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x2f0b6b0b, "ax25_listen_register" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14cecd59, "ax25_display_timer" },
	{ 0xc1444946, "ax25cmp" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xaf7db5d1, "register_net_sysctl" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xee02e420, "ax25_findbyuid" },
	{ 0xf7a3b4f2, "ax25_linkfail_register" },
	{ 0x53dea1ff, "ax2asc" },
	{ 0xb89c42c2, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "783259D8091453BFC3B4816");
