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
	{ 0xedc86eeb, "kobject_put" },
	{ 0xd137f8cf, "blkdev_issue_discard" },
	{ 0x8fab5ad6, "kset_create_and_add" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x1a97c6d9, "kernel_write" },
	{ 0x78095307, "iget_failed" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf317d94d, "drop_nlink" },
	{ 0x56de68eb, "set_anon_super" },
	{ 0xb761737b, "submit_bio_wait" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x53b954a2, "up_read" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xae70287a, "bio_alloc_bioset" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x2ff5979e, "__mark_inode_dirty" },
	{ 0x3f4a2e79, "d_invalidate" },
	{ 0xd1864aa5, "__set_page_dirty_nobuffers" },
	{ 0x768c8c1a, "crypto_alloc_shash" },
	{ 0x27864d57, "memparse" },
	{ 0x87b8705a, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x258d53b1, "inode_permission" },
	{ 0x746cbdde, "__cleancache_get_page" },
	{ 0x734fb146, "generic_write_checks" },
	{ 0x7442f0f9, "percpu_counter_destroy" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x98cf60b3, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x47709e42, "free_anon_bdev" },
	{ 0xaff32987, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xd9f2bdf5, "migrate_page" },
	{ 0x68867a1f, "writeback_inodes_sb_nr" },
	{ 0x30909f84, "find_get_pages_contig" },
	{ 0xbedbced7, "kill_anon_super" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x89a0cd52, "crc32c_impl" },
	{ 0xb1613ccc, "dget_parent" },
	{ 0x98ac0fb6, "bdev_read_only" },
	{ 0xe41476d9, "ZSTD_getParams" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x4ba2654a, "posix_acl_to_xattr" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x30af45a1, "ZSTD_initCStream" },
	{ 0xad8d1d17, "file_ra_state_init" },
	{ 0x9c585baa, "seq_escape" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x8ba39bc2, "is_bad_inode" },
	{ 0x5bb31d0, "pagecache_get_page" },
	{ 0x18888d00, "downgrade_write" },
	{ 0xb275b629, "truncate_inode_pages_range" },
	{ 0x45537529, "generic_file_open" },
	{ 0x8afef384, "page_cache_async_readahead" },
	{ 0x9b900ffe, "posix_acl_access_xattr_handler" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x4b7d693b, "posix_acl_update_mode" },
	{ 0x8d8a3517, "vfs_kern_mount" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xb66178fe, "__lock_page" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0x64b12548, "tag_pages_for_writeback" },
	{ 0x75b3da43, "__srcu_read_unlock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x28241aa0, "filemap_write_and_wait" },
	{ 0x49ed86a0, "ZSTD_endStream" },
	{ 0xa5c0210e, "__lock_buffer" },
	{ 0x94b20157, "touch_atime" },
	{ 0x932e09a7, "deactivate_locked_super" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0xf9d5f12e, "dput" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5a17815d, "sysfs_create_files" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x44e9a829, "match_token" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9908c82f, "inc_nlink" },
	{ 0xa439c87b, "filp_close" },
	{ 0xcba4abe3, "list_sort" },
	{ 0xf6427ef8, "invalidate_inode_pages2" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x961228bd, "bio_trim" },
	{ 0xb48d4d22, "security_sb_eat_lsm_opts" },
	{ 0x7d83fe99, "__percpu_counter_sum" },
	{ 0xde1cda16, "bioset_init" },
	{ 0x7c8040c0, "security_sb_remount" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0x32442844, "add_to_page_cache_lru" },
	{ 0x3a8285c5, "filemap_fdatawait_range" },
	{ 0x364850b1, "down_write_killable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe1c788b5, "crypto_shash_final" },
	{ 0xe4207d66, "bio_advance" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0xa757aa0c, "d_instantiate_new" },
	{ 0xe160a1c5, "kobject_del" },
	{ 0xa9042230, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x37746fde, "ZSTD_initDStream" },
	{ 0xc5d682c8, "__getblk_gfp" },
	{ 0x44635330, "igrab" },
	{ 0x83e6d4e3, "super_setup_bdi" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x85bc2b66, "unlock_buffer" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x1d3a1434, "redirty_page_for_writepage" },
	{ 0xb15b4109, "crc32c" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x7ebd4be4, "trace_print_flags_seq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x21297b25, "pagevec_lookup_range_tag" },
	{ 0x2a85771a, "bpf_trace_run3" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5ad93af1, "set_page_dirty" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd12d7db, "insert_inode_locked4" },
	{ 0xd12edf32, "lookup_bdev" },
	{ 0x7fe32873, "rb_replace_node" },
	{ 0x55615ad7, "truncate_setsize" },
	{ 0x2f8e53f1, "iov_iter_fault_in_readable" },
	{ 0xd5f1db04, "try_to_release_page" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x556b7f4f, "kobject_create_and_add" },
	{ 0x65f131b6, "probe_user_write" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x17ce6eaa, "end_page_writeback" },
	{ 0x878469bd, "ZSTD_decompressStream" },
	{ 0x7dd233c8, "wbc_account_cgroup_owner" },
	{ 0x967763b1, "d_delete" },
	{ 0xfd94814e, "complete_all" },
	{ 0xece784c2, "rb_first" },
	{ 0xaee4c2f, "invalidate_bdev" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6fe6e448, "bio_reset" },
	{ 0x861caeb, "__insert_inode_hash" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf729cb4a, "inode_owner_or_capable" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xb25e26d9, "misc_register" },
	{ 0xad5a7446, "generic_remap_file_range_prep" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5c88c5da, "bio_associate_blkg_from_css" },
	{ 0x2b30f429, "raid6_call" },
	{ 0xdcb764ad, "memset" },
	{ 0xe02fa261, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3af5dc33, "set_task_ioprio" },
	{ 0xf9909686, "bpf_trace_run1" },
	{ 0xed92d16f, "inode_add_bytes" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfc9a61d, "read_cache_page_gfp" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x4c969d6b, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0xb2e1aa46, "posix_acl_chmod" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x5cf16f5a, "d_obtain_alias" },
	{ 0x9fb1a4c5, "__audit_inode_child" },
	{ 0x8a02674a, "cleanup_srcu_struct" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xd8c318e2, "_raw_write_unlock" },
	{ 0x58bbab40, "iov_iter_alignment" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x1b14ff22, "crypto_shash_update" },
	{ 0x94dabf74, "bio_add_page" },
	{ 0xaf75357b, "zero_fill_bio_iter" },
	{ 0xaa0d0b3d, "sget" },
	{ 0xb8a865a1, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0xd90ff8fe, "bio_clone_fast" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0x8f49ad42, "file_remove_privs" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xf31b3fd1, "workqueue_set_max_active" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0x50b8dc4e, "from_kgid" },
	{ 0x94feba72, "blkdev_get_by_path" },
	{ 0x7b4b7815, "security_inode_init_security" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x359ec42f, "_raw_read_trylock" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5f19a52f, "set_nlink" },
	{ 0x2d172d5c, "__wait_on_buffer" },
	{ 0x9c849d12, "file_update_time" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1b1281f6, "setattr_copy" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x65830b6f, "bpf_trace_run5" },
	{ 0x6185b747, "radix_tree_gang_lookup_tag" },
	{ 0x6626afca, "down" },
	{ 0xbc9fad0d, "sysfs_merge_group" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0x218753c5, "wait_on_page_writeback" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xa681fe88, "generate_random_uuid" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x51189699, "kobj_sysfs_ops" },
	{ 0x638e8637, "unlock_two_nondirectories" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x3737d9a9, "ZSTD_DStreamWorkspaceBound" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc5f812c5, "sync_dirty_buffer" },
	{ 0xd9957995, "__srcu_read_lock" },
	{ 0x773a3ca0, "truncate_pagecache" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x2b0635a2, "set_cached_acl" },
	{ 0xb9af1d0d, "__xa_clear_mark" },
	{ 0x74eb1bb3, "vfs_ioc_setflags_prepare" },
	{ 0x54d65f25, "sysfs_remove_link" },
	{ 0x4e3567f7, "match_int" },
	{ 0xae51b3c5, "wait_on_page_bit" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x8c79bd2b, "unlock_page" },
	{ 0xb4371509, "generic_file_read_iter" },
	{ 0xe3a53f4c, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x37681475, "kobject_add" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4260eb07, "fput" },
	{ 0x2fee50fa, "sysfs_unmerge_group" },
	{ 0xda22dc3e, "generic_file_direct_write" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0x7d54e5e, "init_srcu_struct" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0x7b5063cb, "inode_nohighmem" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x6e880674, "posix_acl_create" },
	{ 0x4eff46f8, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x685190b0, "balance_dirty_pages_ratelimited" },
	{ 0xa14f380a, "mount_subtree" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xdeba06c, "bio_put" },
	{ 0x4ea5d10, "ksize" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x72237b7b, "mark_page_accessed" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x769f6e64, "errseq_check" },
	{ 0x8e48459c, "bioset_exit" },
	{ 0x60504312, "inode_init_once" },
	{ 0xc2c5802, "work_busy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x2ee5d6a0, "mntput" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x4f2903c8, "sysfs_create_link" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x429579cf, "mnt_drop_write_file" },
	{ 0x8c10e750, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0xb0aed408, "ZSTD_compressStream" },
	{ 0x950b411f, "xattr_full_name" },
	{ 0x9f984513, "strrchr" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x5e4c9765, "__check_sticky" },
	{ 0xada729e1, "account_page_redirty" },
	{ 0xf0fccb8d, "blkdev_put" },
	{ 0x4d0d163d, "copy_page" },
	{ 0x4e20bcf8, "radix_tree_tag_set" },
	{ 0xa916b694, "strnlen" },
	{ 0x1ddb403d, "simple_dir_operations" },
	{ 0x48fa6f8c, "__filemap_set_wb_err" },
	{ 0x75deb00f, "fs_kobj" },
	{ 0xb692cc09, "sync_blockdev" },
	{ 0xf2dc23a3, "inode_sub_bytes" },
	{ 0x3e301499, "truncate_inode_pages_final" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc8bd84f8, "posix_acl_from_xattr" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa2764a09, "unlock_new_inode" },
	{ 0xd414d833, "mnt_want_write_file" },
	{ 0x9dff05ea, "lock_two_nondirectories" },
	{ 0xeeaedebe, "inode_newsize_ok" },
	{ 0xe4b051cf, "raid6_datap_recov" },
	{ 0x5c8e8570, "add_swap_extent" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0xb20fa1d5, "page_cache_sync_readahead" },
	{ 0xbf07d4ab, "inode_set_bytes" },
	{ 0xd1b0f106, "inode_get_bytes" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x46f03ef3, "d_prune_aliases" },
	{ 0xbaffff96, "ZSTD_CStreamWorkspaceBound" },
	{ 0x93d992ee, "__percpu_counter_init" },
	{ 0xb8a25c55, "vfs_setpos" },
	{ 0x1d7dfc8d, "clear_page_dirty_for_io" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0x4c1fa02f, "submit_bh" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x9d2a6e94, "dio_end_io" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x2d9847bf, "kthread_park" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x89434b4b, "radix_tree_tag_clear" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x3f3cd7b9, "d_tmpfile" },
	{ 0xc5186841, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0x2346dd4b, "synchronize_srcu" },
	{ 0x87549229, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb15364cf, "vfs_ioc_fssetxattr_check" },
	{ 0x3f1eb900, "sysfs_remove_files" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2c06c36f, "__pagevec_release" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0xb78c5383, "__test_set_page_writeback" },
	{ 0xeee91127, "I_BDEV" },
	{ 0x7f77b5e0, "blockdev_superblock" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0x84264ced, "fs_umode_to_ftype" },
	{ 0xccff460f, "kset_unregister" },
	{ 0xb782ddc2, "iput" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9677722, "truncate_pagecache_range" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa741d38a, "generic_permission" },
	{ 0x1f880abd, "inode_dio_wait" },
	{ 0x5eb9a60c, "page_get_link" },
	{ 0xe8bc9070, "ihold" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbd76a03f, "__sb_end_write" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0xd70459db, "current_time" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb0c44a3, "generic_error_remove_page" },
	{ 0xe157714a, "d_splice_alias" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xc37d6a3d, "fsnotify" },
	{ 0xd07f543, "get_anon_bdev" },
	{ 0x656193ca, "kobject_init" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x863bb91c, "sync_filesystem" },
	{ 0x1dfdd782, "refcount_dec_and_mutex_lock" },
	{ 0xcf2a6966, "up" },
	{ 0x33d9fc93, "invalidate_mapping_pages" },
	{ 0x787c882b, "lzo1x_1_compress" },
	{ 0x111e7b23, "fget" },
	{ 0x50a90e8d, "bsearch" },
	{ 0xf0cabd6f, "__sb_start_write" },
	{ 0xf2ce30fd, "d_make_root" },
	{ 0x7a4497db, "kzfree" },
	{ 0x9b03e032, "__blockdev_direct_IO" },
	{ 0x6c337917, "iov_iter_advance" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0x6c3f70e0, "guid_gen" },
	{ 0xf5e66444, "iov_iter_copy_from_user_atomic" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1803a6ed, "raid6_2data_recov" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xe2fd8c50, "filemap_fdatawrite_range" },
	{ 0x3c1eac9f, "__find_get_block" },
	{ 0xa0a127d2, "posix_acl_default_xattr_handler" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0x21633fec, "bpf_trace_run6" },
	{ 0xafd30039, "unregister_filesystem" },
	{ 0x8f3f105b, "init_special_inode" },
	{ 0x8a521482, "security_sb_set_mnt_opts" },
	{ 0x9607b676, "kobject_rename" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7deb653b, "writeback_inodes_sb" },
	{ 0x29361773, "complete" },
	{ 0x88d32759, "filemap_map_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e78d1ad, "fiemap_check_flags" },
	{ 0x47b36e7c, "new_inode" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x4d653bd8, "generic_file_splice_read" },
	{ 0xed899c46, "lookup_one_len" },
	{ 0x90b9e132, "set_blocksize" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xaf5c7282, "__percpu_counter_compare" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf2e5bd87, "security_free_mnt_opts" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xe491eec7, "discard_new_inode" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xbc08ed17, "filemap_range_has_page" },
	{ 0xc3805cd1, "fs_ftype_to_dtype" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa72bc15d, "__cleancache_init_fs" },
	{ 0xddab9ab2, "bpf_trace_run4" },
	{ 0x382b9b3d, "clear_inode" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x25f70e91, "misc_deregister" },
	{ 0x46d42e0, "pagecache_isize_extended" },
	{ 0x5b047ff7, "bdput" },
	{ 0x57fc15af, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xdad320ab, "flush_dcache_page" },
	{ 0xee8facf1, "filemap_flush" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x49fe3014, "file_check_and_advance_wb_err" },
	{ 0x2bef112, "clear_nlink" },
	{ 0x2b2b31bf, "setattr_prepare" },
	{ 0xb30b35c6, "vfs_fsync_range" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xd4b5aa58, "generic_fillattr" },
	{ 0xf52ca203, "inode_init_owner" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3deb777f, "noop_backing_dev_info" },
	{ 0x60277095, "filp_open" },
	{ 0x25288bff, "__page_file_index" },
	{ 0x1033a7a0, "bio_associate_blkg" },
};

MODULE_INFO(depends, "zstd_compress,zstd_decompress,raid6_pq,xor,zlib_deflate");


MODULE_INFO(srcversion, "F92511FB436FB973561DA9E");