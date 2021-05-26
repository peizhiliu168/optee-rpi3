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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x437924ee, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xefb4f6af, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x906db8bf, "nf_queue_entry_release_refs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4916bd93, "nf_queue_entry_get_refs" },
	{ 0xc8cf84af, "__skb_gso_segment" },
	{ 0xc5850110, "printk" },
	{ 0xb2bd1f24, "skb_checksum_help" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xec860847, "skb_zerocopy_headlen" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xadfe81f4, "skb_tx_error" },
	{ 0x104da48, "nfnetlink_unicast" },
	{ 0xbd9022f1, "skb_zerocopy" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xc7371ca5, "from_kgid_munged" },
	{ 0xbde9b7ce, "from_kuid_munged" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xeef45133, "__nla_reserve" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xb754ca92, "___pskb_trim" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0x99cfb896, "skb_put" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf4fe9b3a, "skb_ensure_writable" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x51b73ab3, "nf_register_queue_handler" },
	{ 0x6cd078bb, "proc_create_net_data" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x946cbebd, "nf_unregister_queue_handler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5bee7acd, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xc770b768, "nfnl_ct_hook" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc6bfabad, "nf_reinject" },
	{ 0x1442085d, "nf_ct_hook" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "C7D13EC4582B687F2AD48AA");
