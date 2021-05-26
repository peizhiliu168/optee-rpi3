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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x203c5431, "i2c_add_numbered_adapter" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x760a0f4f, "yield" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E30FCDC83CABFD5BDBBE384");
