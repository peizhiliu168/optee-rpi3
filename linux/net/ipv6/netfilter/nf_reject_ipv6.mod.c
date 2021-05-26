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
	{ 0xe27b8379, "icmpv6_send" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc944ae01, "dst_release" },
	{ 0xf0d25168, "nf_ct_attach" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x60c81ee3, "l3mdev_master_ifindex_rcu" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xf6a849e5, "ip6_route_output_flags" },
	{ 0x7954ed30, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa5bab0b7, "ip6_local_out" },
	{ 0xf9abf4bc, "ip6_dst_hoplimit" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0xe32b8232, "xfrm_lookup" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x7b463332, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "EE3C9ED3747E193AAFF85F7");
