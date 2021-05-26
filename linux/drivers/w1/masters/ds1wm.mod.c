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
	{ 0xc5850110, "printk" },
	{ 0x29361773, "complete" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x9ab16bb6, "w1_add_master_device" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x7b4a4a94, "devm_ioremap" },
	{ 0x5e95a8ad, "platform_get_resource" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3f6d5174, "w1_remove_master_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "DE9D860A7F2FC5EE87D5B60");
