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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x93007c53, "skb_queue_head" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0x53b954a2, "up_read" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x48c8a7de, "bpf_prog_create" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0xe5ff260d, "device_destroy" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x7bfc26d5, "__register_chrdev" },
	{ 0xbd1c73fe, "bpf_prog_destroy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x50160a69, "__put_net" },
	{ 0x92588d10, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x25087745, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x9553ca85, "netif_rx" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe89fcc0f, "netdev_printk" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0x1cb9f182, "device_create" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4260eb07, "fput" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x5bee7acd, "module_put" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0xd653b126, "sched_clock" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x126033ef, "netdev_err" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4ad9695e, "skb_pull_rcsum" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9de2820b, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x111e7b23, "fget" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x9a775031, "__class_create" },
	{ 0x6405dcd3, "slhc_toss" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "8E3408428004B5160FD7F88");
