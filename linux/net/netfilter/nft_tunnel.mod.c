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
	{ 0x604c74cd, "nft_unregister_obj" },
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0x42cd5da6, "nft_register_obj" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0xc944ae01, "dst_release" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0x7ab58541, "metadata_dst_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x8ea75ff2, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc74b5398, "nft_dump_register" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x3aeeb3ee, "metadata_dst_free" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "F5FD4E9C0BA09B29724F3FB");
