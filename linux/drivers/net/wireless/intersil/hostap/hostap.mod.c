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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4fbb3a8c, "iw_handler_set_thrspy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x21ae7992, "proc_create_seq_private" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xac05d0bf, "proc_create_single_data" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x52b07875, "skb_copy" },
	{ 0xf7eafa04, "lib80211_crypt_delayed_deinit" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a24a078, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xbe112120, "proc_remove" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x897b45e3, "wireless_spy_update" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdf6f93e, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x7e894db6, "proc_mkdir" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xabf7ec14, "iw_handler_get_spy" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0xdc4da39, "wireless_send_event" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x55347883, "dev_close" },
	{ 0x24d273d1, "add_timer" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xc815530c, "init_net" },
	{ 0x2320e78, "dev_open" },
	{ 0x5bee7acd, "module_put" },
	{ 0x604697a0, "lib80211_get_crypto_ops" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x111c3b1e, "netif_device_attach" },
	{ 0x31c82fc2, "netif_device_detach" },
	{ 0x8d29fc37, "eth_header_cache_update" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4d508f5a, "iw_handler_get_thrspy" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0xcd6b74d8, "proc_create_data" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaa246b43, "iw_handler_set_spy" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb673e9e, "eth_header_cache" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x99cfb896, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5f78f7b, "eth_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "969409F733A1E3F5E0F5B6F");
