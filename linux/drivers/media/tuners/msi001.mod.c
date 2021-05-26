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
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0xea124bd1, "gcd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x87fb9360, "v4l2_ctrl_auto_cluster" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x34eb465d, "v4l2_spi_subdev_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdd64e639, "strscpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("spi:msi001");

MODULE_INFO(srcversion, "54889879DF88C541EF5E092");
