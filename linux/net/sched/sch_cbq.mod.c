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
	{ 0x75d7727d, "unregister_qdisc" },
	{ 0x9cf0f9a8, "register_qdisc" },
	{ 0x37a1909f, "gen_replace_estimator" },
	{ 0x96495d7d, "qdisc_class_hash_grow" },
	{ 0xbac58131, "gen_new_estimator" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x25087745, "skb_trim" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x45d13f4e, "__qdisc_calculate_pkt_len" },
	{ 0xd40fbd45, "tcf_classify" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x3ab6d8b, "qdisc_tree_reduce_backlog" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc395f3ae, "gnet_stats_copy_queue" },
	{ 0xc3640d45, "gnet_stats_copy_rate_est" },
	{ 0x1372f1bb, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x976001de, "noop_qdisc" },
	{ 0x13a995c4, "qdisc_hash_add" },
	{ 0x1c6724dd, "qdisc_create_dflt" },
	{ 0x1734b8c9, "pfifo_qdisc_ops" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0xd3bfe181, "tcf_block_get" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x60286849, "qdisc_watchdog_init" },
	{ 0xc5850110, "printk" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x4861bc7a, "qdisc_watchdog_schedule_ns" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x5382f9dd, "__netif_schedule" },
	{ 0x924482e9, "qdisc_reset" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x33473f66, "qdisc_watchdog_cancel" },
	{ 0x37a0cba, "kfree" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xd0211b99, "qdisc_put" },
	{ 0x1c7d2b6e, "tcf_block_put" },
	{ 0x83a237bc, "gnet_stats_copy_app" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7198799D8CC6A82568B4C6C");
