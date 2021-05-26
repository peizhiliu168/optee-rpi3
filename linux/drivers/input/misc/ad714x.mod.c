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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xf51135cb, "input_event" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xc072da86, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7213ABCEF02D791BA61D8DE");
