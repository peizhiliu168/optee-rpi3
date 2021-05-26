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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x98cf60b3, "strlen" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x25087745, "skb_trim" },
	{ 0x437924ee, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5bee7acd, "module_put" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x311b5e8d, "netlink_broadcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xefb4f6af, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x434cff16, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "C38EEB634016DCC446DE405");
