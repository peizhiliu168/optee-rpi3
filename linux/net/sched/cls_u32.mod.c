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
	{ 0x7aa1756e, "kvfree" },
	{ 0x964ac0e6, "register_tcf_proto_ops" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8988b841, "__dev_get_by_name" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2cfb217e, "tcf_exts_validate" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x6230e7f5, "tcf_action_exec" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xe1306be6, "tcf_exts_dump_stats" },
	{ 0x25087745, "skb_trim" },
	{ 0x98cf60b3, "strlen" },
	{ 0x82d149cb, "__dev_get_by_index" },
	{ 0xd286a520, "tcf_exts_dump" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xed50d4e, "tc_setup_cb_add" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4f1a3b81, "tc_setup_cb_call" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x50160a69, "__put_net" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xde20b301, "tcf_exts_destroy" },
	{ 0x6a12fded, "tc_setup_cb_destroy" },
	{ 0x897cd208, "tc_setup_cb_reoffload" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DA28511BCC883C4F2E8C0CA");
