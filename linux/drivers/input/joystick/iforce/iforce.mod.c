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
	{ 0xc5e74216, "release_resource" },
	{ 0xea564a8e, "input_ff_create" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xf51135cb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4944FDD8F46355D26A89476");
