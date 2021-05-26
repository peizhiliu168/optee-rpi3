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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x69de0ba8, "param_ops_byte" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5133306b, "platform_driver_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FB90099C21E9DB49E320CD8");
