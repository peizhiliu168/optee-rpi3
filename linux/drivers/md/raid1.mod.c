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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x95d6ad69, "unregister_md_personality" },
	{ 0x6e1620d6, "register_md_personality" },
	{ 0xa67fe70b, "md_flush_request" },
	{ 0x27a9628a, "md_write_start" },
	{ 0xc084999, "bio_alloc_mddev" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xdcb56084, "md_wait_for_blocked_rdev" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x4f561e0, "md_bitmap_startwrite" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xe8cf4169, "md_bitmap_close_sync" },
	{ 0x1ff5a480, "md_bitmap_cond_end_sync" },
	{ 0xc354cf0b, "md_bitmap_start_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7b14b6de, "bio_devname" },
	{ 0xb761737b, "submit_bio_wait" },
	{ 0x961228bd, "bio_trim" },
	{ 0x3b5e031b, "rdev_clear_badblocks" },
	{ 0x66d7111e, "md_check_recovery" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x49ab2dfa, "bio_copy_data" },
	{ 0x94dabf74, "bio_add_page" },
	{ 0x6fe6e448, "bio_reset" },
	{ 0x7f7a454b, "md_error" },
	{ 0x2e10119c, "rdev_set_badblocks" },
	{ 0x9f91c2f0, "sync_page_io" },
	{ 0x2e5f3c2e, "kernfs_notify" },
	{ 0x765d7b14, "md_integrity_add_rdev" },
	{ 0xbd29e7f9, "md_bitmap_resize" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x509b7757, "bio_chain" },
	{ 0x66857cc1, "bio_split" },
	{ 0xdcb764ad, "memset" },
	{ 0xf88c99db, "badblocks_check" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0xd90ff8fe, "bio_clone_fast" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf632c2a6, "md_cluster_ops" },
	{ 0xf53f95a3, "bdevname" },
	{ 0x4f2903c8, "sysfs_create_link" },
	{ 0x54d65f25, "sysfs_remove_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4a942119, "md_allow_write" },
	{ 0xd1657653, "md_done_sync" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x71f95eeb, "blk_queue_flag_clear" },
	{ 0xc2d2b5a7, "md_unregister_thread" },
	{ 0x557fd1f5, "md_integrity_register" },
	{ 0x78d55f48, "blk_queue_flag_set" },
	{ 0xc69bc993, "md_set_array_sectors" },
	{ 0xc5850110, "printk" },
	{ 0xc6b2a144, "disk_stack_limits" },
	{ 0xcc3fed33, "blk_queue_max_write_zeroes_sectors" },
	{ 0x59eb267e, "blk_queue_max_write_same_sectors" },
	{ 0xc574ac91, "mddev_init_writes_pending" },
	{ 0x4829a47e, "memcpy" },
	{ 0xae70287a, "bio_alloc_bioset" },
	{ 0xd0392007, "md_register_thread" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8e48459c, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xde1cda16, "bioset_init" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa2bd6d26, "md_bitmap_end_sync" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xad374f6e, "__trace_note_message" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xeb76fd0b, "md_wakeup_thread" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x809fca8e, "generic_make_request" },
	{ 0x1033a7a0, "bio_associate_blkg" },
	{ 0xeaef96ba, "md_bitmap_unplug" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdeba06c, "bio_put" },
	{ 0x844e53bd, "bio_free_pages" },
	{ 0xfa2bb925, "md_write_end" },
	{ 0x99024779, "md_bitmap_endwrite" },
	{ 0x37a0cba, "kfree" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "BD787859DBA566432062EEC");
