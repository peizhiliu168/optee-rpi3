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
	{ 0x20f01045, "nla_put_64bit" },
	{ 0x25087745, "skb_trim" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4861bc7a, "qdisc_watchdog_schedule_ns" },
	{ 0xc97eab4c, "kfree_skb_list" },
	{ 0xb2bd1f24, "skb_checksum_help" },
	{ 0x52b07875, "skb_copy" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xc8cf84af, "__skb_gso_segment" },
	{ 0x6e4fa59, "netif_skb_features" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x3ab6d8b, "qdisc_tree_reduce_backlog" },
	{ 0x45d13f4e, "__qdisc_calculate_pkt_len" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xd8c8f045, "skb_orphan_partial" },
	{ 0x60286849, "qdisc_watchdog_init" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x924482e9, "qdisc_reset" },
	{ 0xfc3131b, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xd0211b99, "qdisc_put" },
	{ 0x33473f66, "qdisc_watchdog_cancel" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "39AC50AB331FFA60523C958");
