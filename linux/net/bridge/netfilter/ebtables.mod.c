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
	{ 0x44a2b3a6, "xt_unregister_target" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8a53eb99, "xt_check_target" },
	{ 0x174df07c, "xt_compat_match_offset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xada027b9, "xt_compat_target_offset" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xc5850110, "printk" },
	{ 0xb2a2f3ee, "nf_unregister_net_hooks" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x4f7eab80, "xt_register_target" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x5bee7acd, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0xe42eeb37, "nf_register_net_hooks" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2d3267c, "nf_unregister_sockopt" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0xc8175eb1, "xt_request_find_match" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe2b327a6, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xcddf45c2, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x99e7d4e9, "xt_check_match" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xd235a459, "audit_log" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdd3adbb, "nf_register_sockopt" },
	{ 0x63f5788a, "xt_find_match" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "3682E64433FA2D742EB18B6");
