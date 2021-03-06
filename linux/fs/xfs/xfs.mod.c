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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xfbc71be2, "forget_cached_acl" },
	{ 0xedc86eeb, "kobject_put" },
	{ 0xd137f8cf, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x8fab5ad6, "kset_create_and_add" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x66857cc1, "bio_split" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0xc719b19f, "fs_bio_set" },
	{ 0xa982020a, "__blkdev_issue_discard" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb35e50fd, "iomap_seek_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf317d94d, "drop_nlink" },
	{ 0x4d5a9ab1, "sb_min_blocksize" },
	{ 0xb761737b, "submit_bio_wait" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xae70287a, "bio_alloc_bioset" },
	{ 0xdb02fa60, "list_lru_add" },
	{ 0x13a2ad0a, "iomap_is_partially_uptodate" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0x3f4a2e79, "d_invalidate" },
	{ 0x87b8705a, "filemap_fault" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x742ae079, "user_path_at_empty" },
	{ 0xd8978b4e, "percpu_counter_set" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x734fb146, "generic_write_checks" },
	{ 0x7442f0f9, "percpu_counter_destroy" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x17589e3b, "bpf_trace_run7" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x68ff0868, "generic_update_time" },
	{ 0x4c1bf001, "proc_symlink" },
	{ 0x98cf60b3, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xebac99c0, "filemap_write_and_wait_range" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xac05d0bf, "proc_create_single_data" },
	{ 0xb1613ccc, "dget_parent" },
	{ 0x64999478, "congestion_wait" },
	{ 0x98ac0fb6, "bdev_read_only" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x9c585baa, "seq_escape" },
	{ 0xca4fc840, "iomap_zero_range" },
	{ 0xc22a3091, "vm_unmap_aliases" },
	{ 0x57d0d603, "iomap_dio_iopoll" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0xd516f628, "blkdev_issue_flush" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x9b900ffe, "posix_acl_access_xattr_handler" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x4b7d693b, "posix_acl_update_mode" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x28241aa0, "filemap_write_and_wait" },
	{ 0x94b20157, "touch_atime" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf9d5f12e, "dput" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d4de77a, "list_lru_walk_one" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x44e9a829, "match_token" },
	{ 0x9908c82f, "inc_nlink" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x2a1038a, "d_find_alias" },
	{ 0x7b8e35bd, "dentry_open" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x7d83fe99, "__percpu_counter_sum" },
	{ 0xde1cda16, "bioset_init" },
	{ 0xca431c05, "wake_bit_function" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x155eb444, "vfs_readlink" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0x45e69e01, "prepare_to_wait_exclusive" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9d1809fb, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6459a0dc, "bio_uninit" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0xe160a1c5, "kobject_del" },
	{ 0xa9042230, "generic_read_dir" },
	{ 0x44635330, "igrab" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xae736cfd, "noop_direct_IO" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1d3a1434, "redirty_page_for_writepage" },
	{ 0xb15b4109, "crc32c" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x7ebd4be4, "trace_print_flags_seq" },
	{ 0x24428be5, "strncpy_from_user" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x2a85771a, "bpf_trace_run3" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0x903b627c, "list_lru_isolate_move" },
	{ 0xabc640f3, "list_lru_isolate" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x55615ad7, "truncate_setsize" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17ce6eaa, "end_page_writeback" },
	{ 0x7dd233c8, "wbc_account_cgroup_owner" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0xaee4c2f, "invalidate_bdev" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc1680129, "__list_lru_init" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf729cb4a, "inode_owner_or_capable" },
	{ 0x8035a135, "iomap_fiemap" },
	{ 0xad5a7446, "generic_remap_file_range_prep" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x12635cf7, "noop_set_page_dirty" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0x5c88c5da, "bio_associate_blkg_from_css" },
	{ 0xdcb764ad, "memset" },
	{ 0x1a2fa245, "noop_invalidatepage" },
	{ 0x5674b3cb, "rhashtable_free_and_destroy" },
	{ 0x9f14530c, "bio_init" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xe02fa261, "from_kuid" },
	{ 0x9fd1725, "sync_inodes_sb" },
	{ 0x7e894db6, "proc_mkdir" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9b924f86, "d_add_ci" },
	{ 0x3346190f, "bpf_trace_run9" },
	{ 0xf9909686, "bpf_trace_run1" },
	{ 0x7d5289a3, "iomap_bmap" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x51ca1f64, "list_lru_count_one" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb2e1aa46, "posix_acl_chmod" },
	{ 0x91599087, "file_modified" },
	{ 0x5cf16f5a, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x94dabf74, "bio_add_page" },
	{ 0xb8a865a1, "kobject_init_and_add" },
	{ 0xcb14554b, "blkdev_issue_zeroout" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x509b7757, "bio_chain" },
	{ 0x76d3cd60, "laptop_mode" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0x6f2c65f9, "iomap_swapfile_activate" },
	{ 0x50b8dc4e, "from_kgid" },
	{ 0x94feba72, "blkdev_get_by_path" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x7b4b7815, "security_inode_init_security" },
	{ 0x5a921311, "strncmp" },
	{ 0xbee380ba, "posix_acl_alloc" },
	{ 0x7952e67a, "vm_map_ram" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x5f19a52f, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9c849d12, "file_update_time" },
	{ 0xda3baeab, "write_cache_pages" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x65830b6f, "bpf_trace_run5" },
	{ 0x6185b747, "radix_tree_gang_lookup_tag" },
	{ 0x6626afca, "down" },
	{ 0xbafab3ce, "thaw_bdev" },
	{ 0x638e8637, "unlock_two_nondirectories" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2b0635a2, "set_cached_acl" },
	{ 0xa07a37f0, "memchr" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8c79bd2b, "unlock_page" },
	{ 0xb4371509, "generic_file_read_iter" },
	{ 0xe3a53f4c, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4260eb07, "fput" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x6e880674, "posix_acl_create" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xdeba06c, "bio_put" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xaecef912, "kmem_cache_size" },
	{ 0xad9901ae, "bit_waitqueue" },
	{ 0x7176bbe9, "file_write_and_wait_range" },
	{ 0x8e48459c, "bioset_exit" },
	{ 0x60504312, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x690bca92, "iomap_page_mkwrite" },
	{ 0xca41835d, "__destroy_inode" },
	{ 0x3735f7af, "iomap_invalidatepage" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x429579cf, "mnt_drop_write_file" },
	{ 0x8c10e750, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x3f46d679, "capable_wrt_inode_uidgid" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0xf0fccb8d, "blkdev_put" },
	{ 0xe042b4a7, "unregister_shrinker" },
	{ 0xf2986d0b, "generic_fadvise" },
	{ 0xfd0cc9bc, "iomap_set_page_dirty" },
	{ 0x4e20bcf8, "radix_tree_tag_set" },
	{ 0xa916b694, "strnlen" },
	{ 0x48fa6f8c, "__filemap_set_wb_err" },
	{ 0x75deb00f, "fs_kobj" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3f3267e7, "iomap_seek_hole" },
	{ 0x7f95481b, "make_kprojid" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0xa2764a09, "unlock_new_inode" },
	{ 0xd414d833, "mnt_want_write_file" },
	{ 0x492c6036, "exportfs_decode_fh" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x336cd467, "kill_block_super" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x9dff05ea, "lock_two_nondirectories" },
	{ 0xeeaedebe, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0x17fcb8ea, "iomap_dio_rw" },
	{ 0x688d0e03, "list_lru_walk_node" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x8fec2bd3, "bio_clone_blkg_association" },
	{ 0xbb7eba0, "iomap_readpage" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x93d992ee, "__percpu_counter_init" },
	{ 0xb8a25c55, "vfs_setpos" },
	{ 0x1d7dfc8d, "clear_page_dirty_for_io" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x211741c4, "path_put" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x89434b4b, "radix_tree_tag_clear" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x3f3cd7b9, "d_tmpfile" },
	{ 0xa2c74331, "list_lru_count_node" },
	{ 0xc5186841, "register_filesystem" },
	{ 0x87549229, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb15364cf, "vfs_ioc_fssetxattr_check" },
	{ 0xb043e752, "__bio_try_merge_page" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x52707c2c, "remove_proc_subtree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0xb78c5383, "__test_set_page_writeback" },
	{ 0xeee91127, "I_BDEV" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xe25465f6, "iter_file_splice_write" },
	{ 0x7f77b5e0, "blockdev_superblock" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x267e18b2, "freeze_bdev" },
	{ 0xccff460f, "kset_unregister" },
	{ 0xb782ddc2, "iput" },
	{ 0xcddf45c2, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9677722, "truncate_pagecache_range" },
	{ 0x1f880abd, "inode_dio_wait" },
	{ 0xe8bc9070, "ihold" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbd76a03f, "__sb_end_write" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0xe3f2b06a, "iomap_readpages" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0xd70459db, "current_time" },
	{ 0x8555211, "fd_install" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb0c44a3, "generic_error_remove_page" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xe157714a, "d_splice_alias" },
	{ 0xb0c5d0c1, "register_shrinker" },
	{ 0xf8780708, "iomap_releasepage" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x597d8587, "iomap_file_dirty" },
	{ 0x863bb91c, "sync_filesystem" },
	{ 0xcf2a6966, "up" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0xf0cabd6f, "__sb_start_write" },
	{ 0xf2ce30fd, "d_make_root" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xa0a127d2, "posix_acl_default_xattr_handler" },
	{ 0xca40fd51, "list_lru_destroy" },
	{ 0x21633fec, "bpf_trace_run6" },
	{ 0xafd30039, "unregister_filesystem" },
	{ 0x8f3f105b, "init_special_inode" },
	{ 0xbcb0fe0d, "evict_inodes" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0x2184426b, "inode_sb_list_add" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x37064f18, "iomap_truncate_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfafa5723, "iomap_file_buffered_write" },
	{ 0x29361773, "complete" },
	{ 0x88d32759, "filemap_map_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xed1a44f3, "__break_lease" },
	{ 0x4d653bd8, "generic_file_splice_read" },
	{ 0xab75123b, "vmalloc_to_page" },
	{ 0x90b9e132, "set_blocksize" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdfe16645, "sysfs_create_file_ns" },
	{ 0xaf5c7282, "__percpu_counter_compare" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x7d584913, "inode_init_always" },
	{ 0x5af1e3b9, "list_lru_del" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xddab9ab2, "bpf_trace_run4" },
	{ 0x47f474f2, "iomap_migrate_page" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x57fc15af, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xdad320ab, "flush_dcache_page" },
	{ 0xee8facf1, "filemap_flush" },
	{ 0xb30b35c6, "vfs_fsync_range" },
	{ 0x2b2b31bf, "setattr_prepare" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x3deb777f, "noop_backing_dev_info" },
	{ 0x1033a7a0, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A08B79E9C65E8A2E489D5DE");
