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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xcc3bcfe3, "l2cap_chan_set_defaults" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xa4c47b95, "single_open" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x8b1f9945, "single_release" },
	{ 0xc0183066, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x52b07875, "skb_copy" },
	{ 0xe0d1d8b1, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xf17fa0e9, "l2cap_chan_send" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5eaa01ed, "neigh_destroy" },
	{ 0x3ce04e76, "l2cap_add_psm" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x457a3d90, "seq_read" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x11eab348, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0x84b373fd, "hci_get_route" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x2701f44d, "l2cap_chan_put" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xf09bcb10, "iov_iter_kvec" },
	{ 0x1b572e30, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x55347883, "dev_close" },
	{ 0x13f844f6, "nd_tbl" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x99f30429, "simple_attr_release" },
	{ 0x886ebaf7, "debugfs_create_file_unsafe" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xb1fe42ec, "debugfs_attr_read" },
	{ 0x2320e78, "dev_open" },
	{ 0xb85c8ab6, "lowpan_header_decompress" },
	{ 0x5bee7acd, "module_put" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0x90c3afd1, "lowpan_unregister_netdev" },
	{ 0xf339e92b, "bt_debugfs" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x1bb50ff7, "l2cap_chan_connect" },
	{ 0xfb50b421, "netdev_notify_peers" },
	{ 0x595f0121, "lowpan_register_netdev" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3bd873a7, "l2cap_chan_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xcd14cb86, "debugfs_attr_write" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x95bcaecf, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan,ipv6");


MODULE_INFO(srcversion, "FBF4FFA269DED2DF192EF6A");
