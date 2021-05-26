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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x437924ee, "nfnetlink_subsys_unregister" },
	{ 0x54db874d, "nf_log_packet" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xefb4f6af, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x481c66fc, "skb_copy_bits" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "B5D166BE3DE76E91DCA3A3C");
