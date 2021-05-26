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
	{ 0xf08751b6, "unregister_tcf_proto_ops" },
	{ 0x964ac0e6, "register_tcf_proto_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xaaa9c128, "tcf_em_tree_validate" },
	{ 0x2cfb217e, "tcf_exts_validate" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x4c505576, "__tcf_em_tree_match" },
	{ 0x6230e7f5, "tcf_action_exec" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x50160a69, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xe4c66ada, "tcf_em_tree_destroy" },
	{ 0xde20b301, "tcf_exts_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25087745, "skb_trim" },
	{ 0xe1306be6, "tcf_exts_dump_stats" },
	{ 0x5a02a395, "tcf_em_tree_dump" },
	{ 0xd286a520, "tcf_exts_dump" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4255F90CADE79F104660005");
