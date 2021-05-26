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
	{ 0x8e62097a, "nft_reject_dump" },
	{ 0xef4ac5b0, "nft_reject_init" },
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0xc5ad59a7, "nf_send_unreach" },
	{ 0x42723ad6, "nf_send_reset" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4");


MODULE_INFO(srcversion, "7445198463BC8BD6EB7117B");
