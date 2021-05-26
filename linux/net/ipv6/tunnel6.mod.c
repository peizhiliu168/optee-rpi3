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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe27b8379, "icmpv6_send" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe8b71420, "inet6_add_protocol" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x7649f640, "inet6_del_protocol" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AFFECE2DAD45BF7CC0E4A54");
