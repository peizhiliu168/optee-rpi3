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
	{ 0xab423eb0, "skb_clone" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x21fab3ca, "dev_get_by_index_rcu" },
	{ 0x279fd21d, "dev_get_by_index" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x29223775, "dev_queue_xmit" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3309BFDDC352F2E517E1755");
