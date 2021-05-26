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
	{ 0xd1838b29, "nft_register_expr" },
	{ 0x42cd5da6, "nft_register_obj" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "B91D6A7178EF2037D888F8E");
