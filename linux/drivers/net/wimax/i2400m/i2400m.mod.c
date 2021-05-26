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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x47aa0f00, "wimax_dev_init" },
	{ 0x349cba85, "strchr" },
	{ 0x5189409c, "debugfs_create_u8" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd5006f15, "wimax_report_rfkill_sw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x588fcc7, "wimax_msg_data" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb5c681d4, "wimax_state_change" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x36f17273, "wimax_msg_send" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x25087745, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfce1fc17, "simple_attr_read" },
	{ 0x63a22796, "param_ops_string" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb0ffee46, "debugfs_create_u32" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x3b52e4ee, "default_llseek" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xa85e6fb7, "wimax_msg_data_len" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x8dc5a3b9, "debugfs_create_size_t" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xabcf3a2d, "wimax_state_get" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x99f30429, "simple_attr_release" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x1dd80e82, "simple_open" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd5ff51b, "wimax_report_rfkill_hw" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xf4a8cf08, "wimax_msg_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x803f4326, "wimax_dev_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x49a077e, "wimax_dev_rm" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x239bc68b, "wimax_msg" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x99cfb896, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x95bcaecf, "simple_attr_open" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xd41e02ae, "simple_attr_write" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "wimax");


MODULE_INFO(srcversion, "C2CAB1DE77BBFF967A6FF92");
