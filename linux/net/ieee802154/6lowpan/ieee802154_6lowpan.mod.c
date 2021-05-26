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
	{ 0x78578907, "neigh_lookup" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xca16c9eb, "inet_frag_kill" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xc944ae01, "dst_release" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x52b07875, "skb_copy" },
	{ 0xe0d1d8b1, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x5eaa01ed, "neigh_destroy" },
	{ 0x3e7dac49, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x8b602cf4, "inet_frag_find" },
	{ 0x61447210, "inet_frag_reasm_prepare" },
	{ 0x9553ca85, "netif_rx" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x394d6872, "inet_frags_fini" },
	{ 0xb4f12626, "ieee802154_hdr_peek" },
	{ 0x279fd21d, "dev_get_by_index" },
	{ 0x97fe5e26, "dev_remove_pack" },
	{ 0x13f844f6, "nd_tbl" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0xb85c8ab6, "lowpan_header_decompress" },
	{ 0x5a405456, "fqdir_init" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xcfa63328, "inet_frag_reasm_finish" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x3175b3cf, "inet_frag_destroy" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xdd884bc6, "lowpan_unregister_netdevice" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x6ea6b72f, "ieee802154_hdr_peek_addrs" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x4d7d5666, "lowpan_register_netdevice" },
	{ 0x9bb26de6, "inet_frags_init" },
	{ 0xbec87d89, "inet_frag_queue_insert" },
	{ 0x79d4ec46, "dev_add_pack" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0xaf7db5d1, "register_net_sysctl" },
	{ 0x99cfb896, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154,ipv6");


MODULE_INFO(srcversion, "CA07D658CDB046FA03041C1");
