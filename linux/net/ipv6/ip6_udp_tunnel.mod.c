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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xf31f4d3e, "udp6_set_csum" },
	{ 0xbc011301, "sock_release" },
	{ 0x2a04d77d, "sock_create_kern" },
	{ 0x275ffe03, "kernel_setsockopt" },
	{ 0x5eb830e8, "kernel_connect" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x5dcedb23, "kernel_sock_shutdown" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xbdb8229c, "kernel_bind" },
	{ 0xa5bab0b7, "ip6_local_out" },
	{ 0xf229424a, "preempt_count_add" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56C72BFC40F54931C4FFEDB");
