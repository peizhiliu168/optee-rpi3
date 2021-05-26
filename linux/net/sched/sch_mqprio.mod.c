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
	{ 0x25087745, "skb_trim" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc395f3ae, "gnet_stats_copy_queue" },
	{ 0x1372f1bb, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xa7904be1, "__gnet_stats_copy_basic" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x509075fb, "netdev_set_tc_queue" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x1c6724dd, "qdisc_create_dflt" },
	{ 0x59cc0af4, "default_qdisc_ops" },
	{ 0x5eb9561d, "pfifo_fast_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6289fa4a, "dev_activate" },
	{ 0x3e3a38fc, "dev_deactivate" },
	{ 0xbe17ff0a, "netdev_txq_to_tc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbef3a99d, "netdev_set_num_tc" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x13a995c4, "qdisc_hash_add" },
	{ 0xd0211b99, "qdisc_put" },
	{ 0x7ddb2fff, "dev_graft_qdisc" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A5815CD0A2686C58EAFE30A");
