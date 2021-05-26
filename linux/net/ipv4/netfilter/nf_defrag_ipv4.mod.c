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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcd86d564, "ip_defrag" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb2a2f3ee, "nf_unregister_net_hooks" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe42eeb37, "nf_register_net_hooks" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A6361C535746159F3019BAF");
