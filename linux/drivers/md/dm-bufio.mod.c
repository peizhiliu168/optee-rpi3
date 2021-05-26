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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xae70287a, "bio_alloc_bioset" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x8ea94f74, "dm_io" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x94dabf74, "bio_add_page" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdeba06c, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x8c10e750, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xe042b4a7, "unregister_shrinker" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xcddf45c2, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0c5d0c1, "register_shrinker" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb3aef6f8, "param_ops_ulong" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1033a7a0, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "2DE593454C0CFA61645C73E");
