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
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x437924ee, "nfnetlink_subsys_unregister" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xefb4f6af, "nfnetlink_subsys_register" },
	{ 0x44cacd61, "nf_ct_iterate_cleanup_net" },
	{ 0xa5228762, "nf_ct_remove_expectations" },
	{ 0x62acb8e7, "nf_conntrack_eventmask_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc8562d6d, "__nf_ct_expect_find" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0xdeed3fd4, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xe3a08eeb, "nfnetlink_set_err" },
	{ 0xb881ead4, "nfnetlink_has_listeners" },
	{ 0x48db892d, "nfnetlink_send" },
	{ 0x2a2fa260, "nla_policy_len" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x177dd7f3, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xd9c09bcd, "nf_conntrack_find_get" },
	{ 0x45fdf7dc, "nf_ct_ext_add" },
	{ 0xfa02d2a9, "__nf_ct_try_assign_helper" },
	{ 0x67eff6cd, "nf_conntrack_free" },
	{ 0x6df6b336, "nf_ct_helper_ext_add" },
	{ 0x5fb38326, "__nf_conntrack_helper_find" },
	{ 0x9b060772, "nf_conntrack_alloc" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4a6a342, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4198ca95, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xa97463c9, "__siphash_aligned" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xf857095c, "nf_nat_hook" },
	{ 0xa57fa1b, "nf_ct_helper_expectfn_find_by_name" },
	{ 0xa34d66f3, "nf_ct_expect_alloc" },
	{ 0x76a08f6a, "nf_ct_unlink_expect_report" },
	{ 0x7b430d41, "nf_ct_expect_iterate_net" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc56165bb, "nf_ct_expect_find_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9c8dd368, "nf_connlabels_replace" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa7e86960, "nf_ct_expect_put" },
	{ 0x434cff16, "__netlink_dump_start" },
	{ 0xc5850110, "printk" },
	{ 0xa14de4c6, "nf_ct_expect_register_notifier" },
	{ 0x51fc734, "nf_conntrack_register_notifier" },
	{ 0x25087745, "skb_trim" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe8077fdb, "nf_ct_get_id" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x6f1b1690, "nf_ct_l4proto_find" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf64eafcd, "nf_conntrack_unregister_notifier" },
	{ 0xfedbbbdb, "nf_ct_expect_unregister_notifier" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "5161F46B8B48CF05FB94F86");
