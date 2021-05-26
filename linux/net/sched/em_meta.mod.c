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
	{ 0x2c3c71fc, "tcf_em_unregister" },
	{ 0xe7168eac, "tcf_em_register" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x21fab3ca, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdc9ec6e3, "__skb_get_hash" },
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xf1e98c74, "avenrun" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "79035C675A20F1D5778BB73");
