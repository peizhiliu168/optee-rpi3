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
	{ 0xdc9ec6e3, "__skb_get_hash" },
	{ 0x361077f6, "__skb_flow_dissect" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x4c505576, "__tcf_em_tree_match" },
	{ 0xe02fa261, "from_kuid" },
	{ 0x50b8dc4e, "from_kgid" },
	{ 0x6230e7f5, "tcf_action_exec" },
	{ 0x8516c14a, "flow_get_u32_dst" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x90864083, "tcf_block_netif_keep_dst" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2cfb217e, "tcf_exts_validate" },
	{ 0xaaa9c128, "tcf_em_tree_validate" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xbc3bdc7f, "flow_get_u32_src" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25087745, "skb_trim" },
	{ 0xe1306be6, "tcf_exts_dump_stats" },
	{ 0x5a02a395, "tcf_em_tree_dump" },
	{ 0xd286a520, "tcf_exts_dump" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x50160a69, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xe4c66ada, "tcf_em_tree_destroy" },
	{ 0xde20b301, "tcf_exts_destroy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "354D21925A7B10C95156D7F");
