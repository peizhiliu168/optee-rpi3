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
	{ 0xed1c0181, "nft_reject_validate" },
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0x42723ad6, "nf_send_reset" },
	{ 0x42431474, "nf_send_reset6" },
	{ 0xee3c94d8, "nf_send_unreach6" },
	{ 0xc5ad59a7, "nf_send_unreach" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4,nf_reject_ipv6");


MODULE_INFO(srcversion, "4B72286D674DA771463D99F");
