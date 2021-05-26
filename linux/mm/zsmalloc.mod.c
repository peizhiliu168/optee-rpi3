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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xbedbced7, "kill_anon_super" },
	{ 0xae6c03d, "dec_zone_page_state" },
	{ 0x16f65d01, "kern_unmount" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xb66178fe, "__lock_page" },
	{ 0xd516460f, "zpool_register_driver" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4aeaa726, "init_pseudo" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf44d2772, "map_vm_area" },
	{ 0x82751b85, "__ClearPageMovable" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd2f1f9b, "free_vm_area" },
	{ 0xc5850110, "printk" },
	{ 0xd8c318e2, "_raw_write_unlock" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x8d85efbb, "alloc_vm_area" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xee4f8a97, "inc_zone_page_state" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x8c79bd2b, "unlock_page" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3ab5823, "kern_mount" },
	{ 0x997c4347, "unmap_kernel_range" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0xe042b4a7, "unregister_shrinker" },
	{ 0x856b7de1, "zpool_unregister_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb782ddc2, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb0c5d0c1, "register_shrinker" },
	{ 0xa9382806, "page_mapping" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xb85c7a57, "__SetPageMovable" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcac1f5b9, "alloc_anon_inode" },
	{ 0xcac7ef12, "vmemmap" },
	{ 0xfe9c94f2, "__put_page" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E36D3EF31255309EA00156C");
