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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdbfcc69d, "unregister_ip_vs_scheduler" },
	{ 0x8a7424e6, "register_ip_vs_scheduler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x45b175b9, "ip_vs_scheduler_err" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "5B000C41D850905F7430AD8");
