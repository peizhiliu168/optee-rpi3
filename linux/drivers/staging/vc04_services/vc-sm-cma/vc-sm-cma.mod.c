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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x4011a3e6, "dma_direct_unmap_sg" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xa4c47b95, "single_open" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8d7daabe, "dma_get_sgtable_attrs" },
	{ 0x8b1f9945, "single_release" },
	{ 0x3ffc0723, "dma_mmap_attrs" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0xcf562bd2, "dma_buf_detach" },
	{ 0xdaf25f60, "vchi_service_open" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x53bb99e3, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbf34e288, "dma_free_attrs" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x457a3d90, "seq_read" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x4390690, "vchi_service_use" },
	{ 0x6216493d, "vchi_msg_peek" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb25e26d9, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xfc90ea41, "vchi_msg_remove" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2f299dff, "dma_buf_fd" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x88c477cb, "dma_buf_put" },
	{ 0x3ec8e32, "vchi_connect" },
	{ 0xf39b7dcb, "dma_buf_get" },
	{ 0xcd3be9f4, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xdf0bfb02, "dma_buf_unmap_attachment" },
	{ 0xa22e9df3, "vchiq_add_connected_callback" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x5627d3e7, "dma_buf_map_attachment" },
	{ 0x8e2d01a2, "dma_buf_export" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x44bcc61e, "dma_buf_attach" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8cec48c, "dma_direct_map_sg" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x87a39647, "set_user_nice" },
	{ 0x55d2f304, "dma_direct_sync_sg_for_device" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x25f70e91, "misc_deregister" },
};

MODULE_INFO(depends, "vchiq");


MODULE_INFO(srcversion, "D60D831744FF55A6360071D");
