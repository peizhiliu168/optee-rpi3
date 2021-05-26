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
	{ 0x25cb7d36, "deregister_mtd_blktrans" },
	{ 0x417a0caa, "register_mtd_blktrans" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4144e2c3, "mtd_read" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x999e8297, "vfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x73debf08, "mtd_write" },
	{ 0x5fc3555b, "mtd_erase" },
	{ 0x37a0cba, "kfree" },
	{ 0x8134ef06, "add_mtd_blktrans_dev" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x94d4c42c, "del_mtd_blktrans_dev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd");


MODULE_INFO(srcversion, "1C2C3E133F20F4A0563B90E");
