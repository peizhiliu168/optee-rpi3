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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x63a22796, "param_ops_string" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2116d007, "request_firmware_nowait" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5d4571b, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7556F3EA7B209B7E86E003D");
