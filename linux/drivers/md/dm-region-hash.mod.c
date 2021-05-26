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
	{ 0x38e46431, "mempool_exit" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x4ccd378a, "_raw_write_unlock_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x6626afca, "down" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xcf2a6966, "up" },
	{ 0x19c0e46, "dm_dirty_log_destroy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "dm-log");


MODULE_INFO(srcversion, "5E6AAE733220534E7B42928");
