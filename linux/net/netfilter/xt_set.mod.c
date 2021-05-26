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
	{ 0x7299044b, "xt_unregister_targets" },
	{ 0x7b712f1a, "xt_unregister_matches" },
	{ 0xd4984feb, "xt_register_targets" },
	{ 0xc66de8bf, "xt_register_matches" },
	{ 0xe0a55136, "ip_set_test" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe39a0a1f, "ip_set_del" },
	{ 0x6305d27f, "ip_set_add" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x71a28e4d, "ip_set_nfnl_get_byindex" },
	{ 0x2ea14bc6, "ip_set_nfnl_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables,ip_set");


MODULE_INFO(srcversion, "2664E89D13CED67CA5A2AEC");
