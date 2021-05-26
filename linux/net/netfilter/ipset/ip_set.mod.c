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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0x437924ee, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0x9166fada, "strncpy" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x5bee7acd, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x7954ed30, "ipv6_skip_exthdr" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2d3267c, "nf_unregister_sockopt" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x3c46da01, "netlink_ack" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xefb4f6af, "nfnetlink_subsys_register" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0xbdd3adbb, "nf_register_sockopt" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x434cff16, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "A6817DBFB22AA1F2D0D4F2A");
