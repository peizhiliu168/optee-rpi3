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
	{ 0x69c407f6, "nf_log_unregister" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x437924ee, "nfnetlink_subsys_unregister" },
	{ 0x2a0d84b9, "nf_log_register" },
	{ 0xefb4f6af, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xc7371ca5, "from_kgid_munged" },
	{ 0xbde9b7ce, "from_kuid_munged" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x99cfb896, "skb_put" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xceefca10, "nf_log_bind_pf" },
	{ 0xc770b768, "nfnl_ct_hook" },
	{ 0x218d18bd, "nf_log_unbind_pf" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xd90acd41, "proc_set_user" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0x6cd078bb, "proc_create_net_data" },
	{ 0x805cb58b, "nf_log_unset" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x50160a69, "__put_net" },
	{ 0x5bee7acd, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x56470118, "__warn_printk" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x104da48, "nfnetlink_unicast" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "B4945DED14D3CF32396A6CB");
