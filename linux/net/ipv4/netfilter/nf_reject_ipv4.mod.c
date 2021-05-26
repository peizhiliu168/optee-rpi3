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
	{ 0x58d07c94, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0xf0d25168, "nf_ct_attach" },
	{ 0xd7ae1f2a, "__icmp_send" },
	{ 0xc77c85d4, "nf_ip_checksum" },
	{ 0xa4b05a51, "ip_route_me_harder" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x99cfb896, "skb_put" },
	{ 0x481c66fc, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "375490D6EABFD1D1D01F961");
