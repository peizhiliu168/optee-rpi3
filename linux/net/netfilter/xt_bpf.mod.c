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
	{ 0x7b712f1a, "xt_unregister_matches" },
	{ 0xc66de8bf, "xt_register_matches" },
	{ 0x761e6500, "bpf_prog_get_type_dev" },
	{ 0x48c8a7de, "bpf_prog_create" },
	{ 0x755d1c49, "bpf_prog_get_type_path" },
	{ 0xa916b694, "strnlen" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd653b126, "sched_clock" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xbd1c73fe, "bpf_prog_destroy" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "B11A0F67A1781608DBFDAE4");
