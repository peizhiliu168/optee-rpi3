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
	{ 0x845baf61, "nf_nat_ipv4_register_fn" },
	{ 0x53eb0460, "ipt_register_table" },
	{ 0xc667e710, "ipt_alloc_initial_table" },
	{ 0xa7fbfe5, "ipt_unregister_table" },
	{ 0x3f62a95c, "nf_nat_ipv4_unregister_fn" },
	{ 0x6c5ba055, "ipt_do_table" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_nat,ip_tables");


MODULE_INFO(srcversion, "C927C19E86FDEE96882A5AF");
