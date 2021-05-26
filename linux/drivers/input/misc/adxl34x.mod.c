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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xf51135cb, "input_event" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BA7EE980FE62FB23676933B");
