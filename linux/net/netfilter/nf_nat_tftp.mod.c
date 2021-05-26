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
	{ 0x7bd4e4d2, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x751fe21, "nf_nat_tftp_hook" },
	{ 0x53a8245f, "nf_nat_helper_unregister" },
	{ 0xe52e06f0, "nf_ct_helper_log" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0x16d5a0e1, "nf_nat_follow_master" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_tftp,nf_nat");


MODULE_INFO(srcversion, "91802A9EAAF9EA64CDC6C90");
