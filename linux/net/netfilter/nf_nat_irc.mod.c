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
	{ 0x7bd4e4d2, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x21da0f1f, "nf_nat_irc_hook" },
	{ 0x53a8245f, "nf_nat_helper_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69ef5c17, "nf_ct_unexpect_related" },
	{ 0xe52e06f0, "nf_ct_helper_log" },
	{ 0xcb8830bc, "__nf_nat_mangle_tcp_packet" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0x16d5a0e1, "nf_nat_follow_master" },
	{ 0xc5850110, "printk" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_irc,nf_nat");


MODULE_INFO(srcversion, "BBDFACC6A107FC3E50F3DB2");
