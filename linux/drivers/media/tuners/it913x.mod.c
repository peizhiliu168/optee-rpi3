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
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33822237, "regmap_write" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:it9133ax-tuner");
MODULE_ALIAS("platform:it9133bx-tuner");

MODULE_INFO(srcversion, "A623FD416B2347DCD1B4CB9");
