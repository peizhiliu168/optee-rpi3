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
	{ 0x50877b9, "dmi_first_match" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x81188c30, "match_string" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EAC832F1D244B7D647DA364");
