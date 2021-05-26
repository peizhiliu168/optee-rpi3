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
	{ 0xc6f46339, "init_timer_key" },
	{ 0x13a995c4, "qdisc_hash_add" },
	{ 0x1d30f28, "fifo_create_dflt" },
	{ 0x76b3a334, "bfifo_qdisc_ops" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4829a47e, "memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x45d13f4e, "__qdisc_calculate_pkt_len" },
	{ 0x56470118, "__warn_printk" },
	{ 0xce4a3040, "qdisc_offload_graft_helper" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x3ab6d8b, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x976001de, "noop_qdisc" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x924482e9, "qdisc_reset" },
	{ 0xd0211b99, "qdisc_put" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x25087745, "skb_trim" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x34fb5f82, "qdisc_offload_dump_helper" },
	{ 0x83a237bc, "gnet_stats_copy_app" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "95D1652F68D23428831566D");
