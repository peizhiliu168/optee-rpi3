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
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0x332ab9c3, "nft_fib_validate" },
	{ 0x22117f86, "nft_fib_dump" },
	{ 0xe8bf0dbf, "nft_fib_init" },
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0x2d1c04f6, "nft_fib6_eval_type" },
	{ 0x57c5b32e, "nft_fib4_eval" },
	{ 0x751c7602, "nft_fib4_eval_type" },
	{ 0x5a25fc1a, "nft_fib6_eval" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nft_fib,nf_tables,nft_fib_ipv6,nft_fib_ipv4,ipv6");


MODULE_INFO(srcversion, "5DF2DF03065565F937C430C");
