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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x75d7727d, "unregister_qdisc" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x9cf0f9a8, "register_qdisc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x7ed5c6cc, "__neigh_event_send" },
	{ 0xf2ab4d6a, "__neigh_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5eaa01ed, "neigh_destroy" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x78578907, "neigh_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x976001de, "noop_qdisc" },
	{ 0x4ad493fa, "softnet_data" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x924482e9, "qdisc_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6CEAE89785AD5EABE918185");
