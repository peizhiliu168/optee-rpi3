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
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0x93b5383a, "kernel_sendmsg" },
	{ 0x5b9c946a, "sockfd_lookup" },
	{ 0x212daac9, "sock_no_setsockopt" },
	{ 0x286208d4, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xeea11058, "sock_no_getname" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xd3fb3074, "bt_sock_register" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0xa742422e, "sock_no_recvmsg" },
	{ 0x7f78019d, "bt_sock_unlink" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0x5c1e6bd1, "l2cap_is_socket" },
	{ 0x7c94bf92, "sock_no_bind" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x427e4478, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0xc815530c, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4260eb07, "fput" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0xa2bec685, "bt_sock_link" },
	{ 0x5bee7acd, "module_put" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x92d007d0, "__module_put_and_exit" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0x85ccf583, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4d353002, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0x8187bcc3, "sock_no_sendmsg" },
	{ 0x87a39647, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xe6aab47e, "bt_procfs_init" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1d8a364d, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5EB8AAF4BEA7B3157007CA8");
