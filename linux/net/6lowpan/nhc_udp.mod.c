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
	{ 0x55346ae4, "lowpan_nhc_del" },
	{ 0xc60704eb, "lowpan_nhc_add" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "6lowpan");


MODULE_INFO(srcversion, "F8A517649AA6070920BAA3F");
