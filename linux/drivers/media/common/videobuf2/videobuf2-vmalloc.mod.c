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
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0x4011a3e6, "dma_direct_unmap_sg" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0xd3b2bfba, "remap_vmalloc_range" },
	{ 0x32dd28d4, "set_page_dirty_lock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdc4d0092, "vb2_create_framevec" },
	{ 0xddbe3be7, "dma_buf_vunmap" },
	{ 0xc5850110, "printk" },
	{ 0x7952e67a, "vm_map_ram" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x8e2d01a2, "dma_buf_export" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8cec48c, "dma_direct_map_sg" },
	{ 0x977d6978, "vb2_common_vm_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xab75123b, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x36b8c32e, "dma_buf_vmap" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "videobuf2-memops");


MODULE_INFO(srcversion, "75C95A336DFB79A2BF51856");
