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
	{ 0x2b68bd2f, "del_timer" },
	{ 0xea564a8e, "input_ff_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1680C80C370E4C965F66B3E");
