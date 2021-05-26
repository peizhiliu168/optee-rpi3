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
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb36ce761, "xt_unregister_table" },
	{ 0x24c8e482, "xt_copy_counters_from_user" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8a53eb99, "xt_check_target" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0xd669dee8, "xt_compat_target_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0xb7f7693d, "xt_proto_fini" },
	{ 0x3b0a1e0d, "xt_table_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xada027b9, "xt_compat_target_offset" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xa70a0813, "xt_find_table_lock" },
	{ 0x30d3a15d, "xt_replace_table" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x652c87e8, "xt_proto_init" },
	{ 0xef9f8dbc, "xt_register_table" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc6fad704, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0xb2a2f3ee, "nf_unregister_net_hooks" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0xd4984feb, "xt_register_targets" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd3aa7dd4, "xt_compat_target_from_user" },
	{ 0x9166fada, "strncpy" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x7299044b, "xt_unregister_targets" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x5bee7acd, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe42eeb37, "nf_register_net_hooks" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2d3267c, "nf_unregister_sockopt" },
	{ 0xcf65d236, "xt_request_find_table_lock" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xe2b327a6, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x552b967, "xt_check_table_hooks" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdd3adbb, "nf_register_sockopt" },
	{ 0xc75d5ab2, "xt_alloc_table_info" },
	{ 0x881df2ef, "xt_free_table_info" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "F5AD9D1E2D2345A74D86196");
