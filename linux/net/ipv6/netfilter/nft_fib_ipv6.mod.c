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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc944ae01, "dst_release" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0x332ab9c3, "nft_fib_validate" },
	{ 0x3077e598, "nft_fib_store_result" },
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0xeba3d5fb, "nf_ipv6_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeedb8a42, "ip6_route_lookup" },
	{ 0xe8bf0dbf, "nft_fib_init" },
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0x22117f86, "nft_fib_dump" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "nf_tables,nft_fib,ipv6");


MODULE_INFO(srcversion, "4913CECBDD4FE4DCF997055");
