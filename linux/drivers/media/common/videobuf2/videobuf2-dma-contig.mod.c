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
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0x8d7daabe, "dma_get_sgtable_attrs" },
	{ 0x3ffc0723, "dma_mmap_attrs" },
	{ 0xcf562bd2, "dma_buf_detach" },
	{ 0x32dd28d4, "set_page_dirty_lock" },
	{ 0x53bb99e3, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbf34e288, "dma_free_attrs" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0xdc4d0092, "vb2_create_framevec" },
	{ 0xddbe3be7, "dma_buf_vunmap" },
	{ 0xc5850110, "printk" },
	{ 0xcd3be9f4, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xdf0bfb02, "dma_buf_unmap_attachment" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x283c37f3, "dma_direct_map_resource" },
	{ 0x5627d3e7, "dma_buf_map_attachment" },
	{ 0x8e2d01a2, "dma_buf_export" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x44bcc61e, "dma_buf_attach" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8cec48c, "dma_direct_map_sg" },
	{ 0x977d6978, "vb2_common_vm_ops" },
	{ 0x55d2f304, "dma_direct_sync_sg_for_device" },
	{ 0xaeab495c, "sg_alloc_table_from_pages" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x36b8c32e, "dma_buf_vmap" },
};

MODULE_INFO(depends, "videobuf2-memops");


MODULE_INFO(srcversion, "B3043D3E0EA139C8096318D");
