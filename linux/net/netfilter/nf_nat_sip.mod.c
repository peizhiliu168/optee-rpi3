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
	{ 0x1870eb6a, "nf_ct_helper_expectfn_register" },
	{ 0x7bd4e4d2, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc8fb2adc, "nf_ct_helper_expectfn_unregister" },
	{ 0x319c06b1, "nf_nat_sip_hooks" },
	{ 0x53a8245f, "nf_nat_helper_unregister" },
	{ 0xf4fe9b3a, "skb_ensure_writable" },
	{ 0xc8da99ba, "ct_sip_parse_numerical_param" },
	{ 0x287eb1ee, "ct_sip_parse_request" },
	{ 0x68d4e832, "ct_sip_parse_address_param" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa9a1ac23, "ct_sip_parse_header_uri" },
	{ 0x42a67d8, "nf_ct_seqadj_set" },
	{ 0xe52e06f0, "nf_ct_helper_log" },
	{ 0x69ef5c17, "nf_ct_unexpect_related" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd137d885, "ct_sip_get_header" },
	{ 0x45f2a902, "ct_sip_get_sdp_header" },
	{ 0xcb8830bc, "__nf_nat_mangle_tcp_packet" },
	{ 0xde66d110, "nf_nat_mangle_udp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc7f17e4f, "nf_nat_setup_info" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "C9C4A1ED825419B5DDFB7AE");
