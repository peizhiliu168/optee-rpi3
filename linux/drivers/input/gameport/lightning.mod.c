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
	{ 0x783bd9d0, "gameport_unregister_port" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x84e18385, "__gameport_register_port" },
	{ 0x58fb879b, "gameport_set_phys" },
	{ 0x5792f848, "strlcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "gameport");


MODULE_INFO(srcversion, "6A8CD38F2DE26657D6A9FAD");
