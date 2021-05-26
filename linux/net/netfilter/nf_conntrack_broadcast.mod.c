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
	{ 0xd65bd301, "__nf_ct_refresh_acct" },
	{ 0xa7e86960, "nf_ct_expect_put" },
	{ 0xa34d66f3, "nf_ct_expect_alloc" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "5DD9CACE7B3BCCB76607006");
