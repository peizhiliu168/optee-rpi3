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
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0x604c74cd, "nft_unregister_obj" },
	{ 0x42cd5da6, "nft_register_obj" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0x9c8dd368, "nf_connlabels_replace" },
	{ 0x45fdf7dc, "nf_ct_ext_add" },
	{ 0xc815530c, "init_net" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x52a17c9b, "nf_connlabels_get" },
	{ 0x6b21e7de, "nf_connlabels_put" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcdf91aa8, "nf_ct_tmpl_alloc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe8077fdb, "nf_ct_get_id" },
	{ 0x9166fada, "strncpy" },
	{ 0x8ea75ff2, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xc74b5398, "nft_dump_register" },
	{ 0x4592eab0, "nf_conntrack_helper_try_module_get" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x9a9cc3b7, "nf_conntrack_helper_put" },
	{ 0x6df6b336, "nf_ct_helper_ext_add" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa480866c, "nf_ct_expect_init" },
	{ 0xa34d66f3, "nf_ct_expect_alloc" },
	{ 0xa5819fc3, "nf_ct_netns_get" },
	{ 0xabb134f6, "nf_ct_netns_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "DD507C0C8CF1FB875D925D8");
