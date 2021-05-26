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
	{ 0xd1838b29, "nft_register_expr" },
	{ 0x44b0333d, "nf_tproxy_handle_time_wait6" },
	{ 0xf39f7bfe, "sock_edemux" },
	{ 0xd5a8f46a, "nf_tproxy_handle_time_wait4" },
	{ 0xca02e549, "nf_tproxy_laddr6" },
	{ 0xf2d2a367, "nf_tproxy_get_sock_v6" },
	{ 0x477d739e, "sock_gen_put" },
	{ 0xbed055fc, "nf_tproxy_laddr4" },
	{ 0x2db5574c, "nf_tproxy_get_sock_v4" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xf742d095, "nf_defrag_ipv6_enable" },
	{ 0x84d65965, "nf_defrag_ipv4_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc74b5398, "nft_dump_register" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_tables,nf_tproxy_ipv6,nf_tproxy_ipv4,nf_defrag_ipv6,nf_defrag_ipv4");


MODULE_INFO(srcversion, "EF5C6EBC9A4A184E6FA25D4");
