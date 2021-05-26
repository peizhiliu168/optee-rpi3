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
	{ 0x53b954a2, "up_read" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x1af773e4, "crypto_mod_put" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0xe03a2638, "crypto_remove_spawns" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x25087745, "skb_trim" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7a9342b6, "crypto_mod_get" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x6e622ebb, "netlink_kernel_release" },
	{ 0x9d6bc189, "crypto_unregister_instance" },
	{ 0xb3ccbbc2, "netlink_rcv_skb" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x909d9587, "netlink_capable" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x19315baa, "__netlink_kernel_create" },
	{ 0xa8e239, "crypto_alg_mod_lookup" },
	{ 0x35d3dc46, "crypto_alg_sem" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0x434cff16, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "149505CC0DEAF6469642C4D");
