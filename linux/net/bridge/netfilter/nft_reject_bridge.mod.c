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
	{ 0xa5f71562, "nft_reject_policy" },
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0xbb386ff6, "nf_reject_ip_tcphdr_put" },
	{ 0x3e4e74f3, "nf_reject_ip_tcphdr_get" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0xabfed442, "nf_reject_ip6_tcphdr_put" },
	{ 0x5feb72c0, "nf_reject_ip6_tcphdr_get" },
	{ 0x2124474, "ip_send_check" },
	{ 0x97e16d4e, "nf_reject_iphdr_put" },
	{ 0xc77c85d4, "nf_ip_checksum" },
	{ 0xd3579c0d, "pskb_trim_rcsum_slow" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xd05c310b, "br_forward" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x4829a47e, "memcpy" },
	{ 0x99cfb896, "skb_put" },
	{ 0xdd3ad2e1, "nf_reject_ip6hdr_put" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x7b463332, "nf_ip6_checksum" },
	{ 0x7954ed30, "ipv6_skip_exthdr" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4,nf_reject_ipv6,bridge");


MODULE_INFO(srcversion, "443BE7A938A7A786F1CE19B");
