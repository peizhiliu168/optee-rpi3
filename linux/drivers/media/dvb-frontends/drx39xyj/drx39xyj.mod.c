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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x5d4571b, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0B46C45C88C488EB4444265");
