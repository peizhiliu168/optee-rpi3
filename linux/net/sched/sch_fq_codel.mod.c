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
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xd3bfe181, "tcf_block_get" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xc395f3ae, "gnet_stats_copy_queue" },
	{ 0x56470118, "__warn_printk" },
	{ 0x83a237bc, "gnet_stats_copy_app" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdc9ec6e3, "__skb_get_hash" },
	{ 0x3ab6d8b, "qdisc_tree_reduce_backlog" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd40fbd45, "tcf_classify" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xdcb764ad, "memset" },
	{ 0xfc3131b, "rtnl_kfree_skbs" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1c7d2b6e, "tcf_block_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1ED0424B9461B3B41EF4A0A");
