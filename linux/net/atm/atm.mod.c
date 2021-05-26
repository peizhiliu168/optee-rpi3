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
	{ 0xa24f23d8, "__request_module" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x21ae7992, "proc_create_seq_private" },
	{ 0x98cf60b3, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x9004909c, "send_sig" },
	{ 0xce40e5de, "sock_gettstamp" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xdf6f93e, "PDE_DATA" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x4ccd378a, "_raw_write_unlock_irq" },
	{ 0x4830eca5, "device_del" },
	{ 0xc12ad67f, "device_register" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb27d1e7f, "proc_mkdir_data" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0xbc9af18e, "sock_wake_async" },
	{ 0x427e4478, "sk_free" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc815530c, "init_net" },
	{ 0x7247df5a, "__class_register" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x79f872f9, "__sock_recv_ts_and_drops" },
	{ 0x5bee7acd, "module_put" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xdded6c02, "put_device" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4528f305, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xc6de36ef, "refcount_sub_and_test_checked" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x52707c2c, "remove_proc_subtree" },
	{ 0xcd6b74d8, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xce07cfe2, "__arch_copy_in_user" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xb89c42c2, "skb_free_datagram" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC78AF5FACF3800643605C7");
