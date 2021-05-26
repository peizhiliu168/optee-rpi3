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
	{ 0x60286849, "qdisc_watchdog_init" },
	{ 0x13a995c4, "qdisc_hash_add" },
	{ 0x1d30f28, "fifo_create_dflt" },
	{ 0x76b3a334, "bfifo_qdisc_ops" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0x89957413, "fifo_set_limit" },
	{ 0xb2cb334, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4861bc7a, "qdisc_watchdog_schedule_ns" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x976001de, "noop_qdisc" },
	{ 0x3ab6d8b, "qdisc_tree_reduce_backlog" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x45d13f4e, "__qdisc_calculate_pkt_len" },
	{ 0xc8cf84af, "__skb_gso_segment" },
	{ 0x6e4fa59, "netif_skb_features" },
	{ 0x9ebc8128, "skb_gso_validate_mac_len" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x924482e9, "qdisc_reset" },
	{ 0xd0211b99, "qdisc_put" },
	{ 0x33473f66, "qdisc_watchdog_cancel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25087745, "skb_trim" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "70EFBC798A75285FDA664C4");
