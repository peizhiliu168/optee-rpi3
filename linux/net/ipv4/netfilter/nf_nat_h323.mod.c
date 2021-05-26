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
	{ 0xc8fb2adc, "nf_ct_helper_expectfn_unregister" },
	{ 0x1870eb6a, "nf_ct_helper_expectfn_register" },
	{ 0x8be910c6, "nat_q931_hook" },
	{ 0x107c39d7, "nat_callforwarding_hook" },
	{ 0x91f8338f, "nat_h245_hook" },
	{ 0xd62e50b, "nat_t120_hook" },
	{ 0x221c638a, "nat_rtp_rtcp_hook" },
	{ 0x92bb2131, "set_ras_addr_hook" },
	{ 0x2e07027, "set_sig_addr_hook" },
	{ 0x2213a2f1, "set_h225_addr_hook" },
	{ 0x15943273, "set_h245_addr_hook" },
	{ 0x69ef5c17, "nf_ct_unexpect_related" },
	{ 0xf7e4b44c, "get_h225_addr" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xcb8830bc, "__nf_nat_mangle_tcp_packet" },
	{ 0xde66d110, "nf_nat_mangle_udp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x16d5a0e1, "nf_nat_follow_master" },
	{ 0xc7f17e4f, "nf_nat_setup_info" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");


MODULE_INFO(srcversion, "6444D29D128E41F19DC10B8");
