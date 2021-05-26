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
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xc815530c, "init_net" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8ec8c58, "nf_nat_ipv6_register_fn" },
	{ 0xcbe6bca2, "ip6t_register_table" },
	{ 0xa2b58210, "ip6t_alloc_initial_table" },
	{ 0x15441d1a, "ip6t_unregister_table" },
	{ 0x93817923, "nf_nat_ipv6_unregister_fn" },
	{ 0x420e3cf, "ip6t_do_table" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_nat,ip6_tables");


MODULE_INFO(srcversion, "F0CC28CFFA2B0586E68A033");
