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
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x171e1d31, "bio_endio" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xc5b6f236, "queue_work_on" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BB296D9348FBA5FD47942F5");
