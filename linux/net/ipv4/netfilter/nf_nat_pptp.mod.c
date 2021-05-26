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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc7486940, "nf_nat_pptp_hook_expectfn" },
	{ 0x52e59438, "nf_nat_pptp_hook_exp_gre" },
	{ 0x42ff09c8, "nf_nat_pptp_hook_inbound" },
	{ 0x1a1b91c1, "nf_nat_pptp_hook_outbound" },
	{ 0xcb8830bc, "__nf_nat_mangle_tcp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc7f17e4f, "nf_nat_setup_info" },
	{ 0xa7e86960, "nf_ct_expect_put" },
	{ 0x69ef5c17, "nf_ct_unexpect_related" },
	{ 0xc56165bb, "nf_ct_expect_find_get" },
	{ 0xc7d9c472, "nf_ct_nat_ext_add" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "7FFBF2B61F70FF1D9671451");
