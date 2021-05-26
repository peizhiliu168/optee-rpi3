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
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc5850110, "printk" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "853BE606D16425378B5B2DA");
