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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0xc5850110, "printk" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0xd5c090de, "sock_efree" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E621914F3F3ED405C5F3A4A");
