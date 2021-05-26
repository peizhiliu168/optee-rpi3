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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0xdaf25f60, "vchi_service_open" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbbb12b82, "vchi_msg_hold" },
	{ 0x999e8297, "vfree" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x4390690, "vchi_service_use" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x36331e4f, "vchi_held_msg_release" },
	{ 0x9bde7c27, "vc_sm_cma_import_dmabuf" },
	{ 0x3ec8e32, "vchi_connect" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x8561e970, "vchi_bulk_queue_receive" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "vchiq,vc-sm-cma");


MODULE_INFO(srcversion, "886F2261ECF1BB9AE5BDDB0");
