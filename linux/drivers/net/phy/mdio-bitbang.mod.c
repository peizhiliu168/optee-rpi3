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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbc2f50eb, "mdiobus_free" },
	{ 0x5bee7acd, "module_put" },
	{ 0x85ccf583, "__module_get" },
	{ 0xa7e41829, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B542A9052B9665DC3FD76E4");
