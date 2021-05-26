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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "dvb-core");


MODULE_INFO(srcversion, "E1DDC9C02352018BAB27D40");
