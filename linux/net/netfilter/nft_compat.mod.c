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
	{ 0x437924ee, "nfnetlink_subsys_unregister" },
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0xefb4f6af, "nfnetlink_subsys_register" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0xc5850110, "printk" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x25087745, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xbd762514, "nla_reserve" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x99e7d4e9, "xt_check_match" },
	{ 0x8a53eb99, "xt_check_target" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc8175eb1, "xt_request_find_match" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe2b327a6, "xt_request_find_target" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x5bee7acd, "module_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables,x_tables");


MODULE_INFO(srcversion, "7E92F73D2BE3EBD3969BCAB");
