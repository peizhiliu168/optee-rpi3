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
	{ 0xc74b5398, "nft_dump_register" },
	{ 0xc4abe6e2, "nf_tables_bind_set" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x2cf4bb1d, "nft_set_lookup_global" },
	{ 0xa8c8c5d4, "nf_tables_deactivate_set" },
	{ 0xfd35baa3, "nf_tables_destroy_set" },
	{ 0x7c52c0bc, "nft_obj_lookup" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "147995B5E90FA1BEEA513B6");
