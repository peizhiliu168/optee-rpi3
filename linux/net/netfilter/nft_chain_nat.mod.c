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
	{ 0x3f62a95c, "nf_nat_ipv4_unregister_fn" },
	{ 0x845baf61, "nf_nat_ipv4_register_fn" },
	{ 0x93817923, "nf_nat_ipv6_unregister_fn" },
	{ 0xa8ec8c58, "nf_nat_ipv6_register_fn" },
	{ 0x793f8514, "nft_unregister_chain_type" },
	{ 0x298bf02a, "nft_register_chain_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19f67733, "nft_do_chain" },
	{ 0x13359ce0, "ipv6_find_hdr" },
	{ 0x8c37a643, "nf_nat_inet_register_fn" },
	{ 0xe10c5fb4, "nf_nat_inet_unregister_fn" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "7C88217867A397E77C593FC");
