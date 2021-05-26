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
	{ 0x9cf0f9a8, "register_qdisc" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0x13a995c4, "qdisc_hash_add" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0xbac58131, "gen_new_estimator" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x96495d7d, "qdisc_class_hash_grow" },
	{ 0xb2cb334, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37a1909f, "gen_replace_estimator" },
	{ 0x45d13f4e, "__qdisc_calculate_pkt_len" },
	{ 0xd40fbd45, "tcf_classify" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd1074bc9, "qdisc_warn_nonwc" },
	{ 0x4861bc7a, "qdisc_watchdog_schedule_ns" },
	{ 0xece784c2, "rb_first" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x976001de, "noop_qdisc" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0x1c6724dd, "qdisc_create_dflt" },
	{ 0x1734b8c9, "pfifo_qdisc_ops" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x3ab6d8b, "qdisc_tree_reduce_backlog" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x83a237bc, "gnet_stats_copy_app" },
	{ 0xc395f3ae, "gnet_stats_copy_queue" },
	{ 0xc3640d45, "gnet_stats_copy_rate_est" },
	{ 0x1372f1bb, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xd3bfe181, "tcf_block_get" },
	{ 0x60286849, "qdisc_watchdog_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfc3131b, "rtnl_kfree_skbs" },
	{ 0xdcb764ad, "memset" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x33473f66, "qdisc_watchdog_cancel" },
	{ 0x924482e9, "qdisc_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c7d2b6e, "tcf_block_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0xd0211b99, "qdisc_put" },
	{ 0x25087745, "skb_trim" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5382f9dd, "__netif_schedule" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B93A428CA6D03CDE9F4471");
