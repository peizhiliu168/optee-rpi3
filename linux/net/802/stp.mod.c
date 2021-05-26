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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x7d5a940, "llc_sap_open" },
	{ 0x34ee4918, "llc_sap_close" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "6AEBB72A8A6FF2BF9226E29");
