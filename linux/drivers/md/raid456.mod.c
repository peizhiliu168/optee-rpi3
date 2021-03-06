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
	{ 0xd137f8cf, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x66857cc1, "bio_split" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xb761737b, "submit_bio_wait" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x50261db8, "async_raid6_datap_recov" },
	{ 0x572284dd, "blk_queue_io_opt" },
	{ 0xae70287a, "bio_alloc_bioset" },
	{ 0x2e10119c, "rdev_set_badblocks" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x39f12b4d, "blk_queue_max_hw_sectors" },
	{ 0xf88c99db, "badblocks_check" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x45d167e3, "mddev_suspend" },
	{ 0xd516f628, "blkdev_issue_flush" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x99024779, "md_bitmap_endwrite" },
	{ 0x66d7111e, "md_check_recovery" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x11eef4a3, "blk_queue_io_min" },
	{ 0xfa2bb925, "md_write_end" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xacf7679, "dma_issue_pending_all" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x89db31ca, "async_syndrome_val" },
	{ 0xee958cc1, "md_new_event" },
	{ 0xde1cda16, "bioset_init" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeaef96ba, "md_bitmap_unplug" },
	{ 0xcc3fed33, "blk_queue_max_write_zeroes_sectors" },
	{ 0x95d6ad69, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xb4e4f3bb, "md_write_inc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x6fe6e448, "bio_reset" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2b30f429, "raid6_call" },
	{ 0xdcb764ad, "memset" },
	{ 0xd0392007, "md_register_thread" },
	{ 0x9f14530c, "bio_init" },
	{ 0xa67fe70b, "md_flush_request" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x48c093fb, "_atomic_dec_and_lock_irqsave" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc8c9d0c, "md_update_sb" },
	{ 0xa2bd6d26, "md_bitmap_end_sync" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x94dabf74, "bio_add_page" },
	{ 0xb6594174, "md_do_sync" },
	{ 0x4dce3aa9, "async_raid6_2data_recov" },
	{ 0xd90ff8fe, "bio_clone_fast" },
	{ 0x53d4ed60, "async_trigger_callback" },
	{ 0x56dbf27e, "__cpuhp_state_add_instance" },
	{ 0xc6b2a144, "disk_stack_limits" },
	{ 0xcb14554b, "blkdev_issue_zeroout" },
	{ 0x509b7757, "bio_chain" },
	{ 0x29252e74, "__tracepoint_block_unplug" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x53c8cf1, "mddev_unlock" },
	{ 0x5a921311, "strncmp" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4f0fcffd, "async_memcpy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x809fca8e, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xdcb56084, "md_wait_for_blocked_rdev" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xdeba06c, "bio_put" },
	{ 0xd1657653, "md_done_sync" },
	{ 0x8e48459c, "bioset_exit" },
	{ 0xcf4638cf, "kthread_unpark" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x4f2903c8, "sysfs_create_link" },
	{ 0x71f95eeb, "blk_queue_flag_clear" },
	{ 0x8c10e750, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x9db0e73f, "async_xor_val" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x974b79b8, "async_xor" },
	{ 0x69049cd2, "radix_tree_replace_slot" },
	{ 0xe042b4a7, "unregister_shrinker" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xddb1cd7, "llist_reverse_order" },
	{ 0x78d55f48, "blk_queue_flag_set" },
	{ 0x27a9628a, "md_write_start" },
	{ 0xf53f95a3, "bdevname" },
	{ 0xad374f6e, "__trace_note_message" },
	{ 0xc40cd94e, "async_tx_quiesce" },
	{ 0x41efdeaf, "radix_tree_lookup_slot" },
	{ 0x3b5e031b, "rdev_clear_badblocks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a942119, "md_allow_write" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc69bc993, "md_set_array_sectors" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xe8b3f0d8, "__cpuhp_state_remove_instance" },
	{ 0xbcee111f, "sysfs_notify" },
	{ 0x8fec2bd3, "bio_clone_blkg_association" },
	{ 0xeb76fd0b, "md_wakeup_thread" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x2e5f3c2e, "kernfs_notify" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2d9847bf, "kthread_park" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe8cf4169, "md_bitmap_close_sync" },
	{ 0x9f91c2f0, "sync_page_io" },
	{ 0xc2d2b5a7, "md_unregister_thread" },
	{ 0x7c7a7a6e, "async_gen_syndrome" },
	{ 0xcef7fef4, "md_finish_reshape" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4f561e0, "md_bitmap_startwrite" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb0c5d0c1, "register_shrinker" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xe153f436, "__cpu_present_mask" },
	{ 0x7f7a454b, "md_error" },
	{ 0x1ff5a480, "md_bitmap_cond_end_sync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xc354cf0b, "md_bitmap_start_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x56c46312, "mddev_resume" },
	{ 0x12c6401a, "md_find_rdev_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xc574ac91, "mddev_init_writes_pending" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xbd29e7f9, "md_bitmap_resize" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x59eb267e, "blk_queue_max_write_same_sectors" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x6e1620d6, "register_md_personality" },
	{ 0xc3614bd3, "set_disk_ro" },
	{ 0x1033a7a0, "bio_associate_blkg" },
};

MODULE_INFO(depends, "async_raid6_recov,md-mod,async_pq,raid6_pq,async_tx,async_memcpy,async_xor");


MODULE_INFO(srcversion, "11A07078A31473FADB93DC4");
