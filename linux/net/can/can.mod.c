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
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xab423eb0, "skb_clone" },
	{ 0xeb39e5ad, "proc_create_net_single" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xdf6f93e, "PDE_DATA" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xd5c090de, "sock_efree" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb27d1e7f, "proc_mkdir_data" },
	{ 0x427e4478, "sk_free" },
	{ 0x97fe5e26, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5bee7acd, "module_put" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x4528f305, "sock_register" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x79d4ec46, "dev_add_pack" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "76156F4E67F073DB1511C41");
