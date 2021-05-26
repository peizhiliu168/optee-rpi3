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
	{ 0x656e4a6e, "snprintf" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbaf70739, "nf_osf_find" },
	{ 0x35eff5e0, "nf_osf_fingers" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x8ea75ff2, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc74b5398, "nft_dump_register" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_tables,nfnetlink_osf");


MODULE_INFO(srcversion, "2899A261F99246AE09B6F70");
