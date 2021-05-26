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
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0xdcb764ad, "memset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5EE64CEA35245406CCE0620");
