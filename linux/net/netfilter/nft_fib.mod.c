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
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x8ea75ff2, "nft_validate_register_store" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0x9166fada, "strncpy" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc74b5398, "nft_dump_register" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "DF324A0D3D37B45F1B5C0C4");
