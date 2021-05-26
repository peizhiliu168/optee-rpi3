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
	{ 0x9d0602bf, "release_sock" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x21ae7992, "proc_create_seq_private" },
	{ 0xbde9b7ce, "from_kuid_munged" },
	{ 0x212daac9, "sock_no_setsockopt" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x286208d4, "sock_no_getsockopt" },
	{ 0xce40e5de, "sock_gettstamp" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x52b07875, "skb_copy" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x43a55b8b, "sock_queue_rcv_skb" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a24a078, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25087745, "skb_trim" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x7e894db6, "proc_mkdir" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x427e4478, "sk_free" },
	{ 0x97fe5e26, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0x9b52519b, "register_snap_client" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x80d80186, "datagram_poll" },
	{ 0x4528f305, "sock_register" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x3c4df0e8, "sock_alloc_send_skb" },
	{ 0x8988b841, "__dev_get_by_name" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x52707c2c, "remove_proc_subtree" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xc69046a7, "unregister_snap_client" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x79d4ec46, "dev_add_pack" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xaf7db5d1, "register_net_sysctl" },
	{ 0x99cfb896, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb9a56c02, "sock_i_uid" },
	{ 0xd39dea1a, "dev_mc_add_global" },
	{ 0xb89c42c2, "skb_free_datagram" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "4B087E7F6234A8AAE426C02");
