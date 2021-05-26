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
	{ 0x78095307, "iget_failed" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x42f776d6, "fscrypt_has_permitted_context" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8baac78f, "fscrypt_inherit_context" },
	{ 0xf9fcb5a4, "fscrypt_free_inode" },
	{ 0xf317d94d, "drop_nlink" },
	{ 0x56de68eb, "set_anon_super" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa6e8f9ff, "make_bad_inode" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x2ff5979e, "__mark_inode_dirty" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xd1864aa5, "__set_page_dirty_nobuffers" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x87b8705a, "filemap_fault" },
	{ 0xf438171a, "fscrypt_get_symlink" },
	{ 0x68ff0868, "generic_update_time" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0x68867a1f, "writeback_inodes_sb_nr" },
	{ 0xbedbced7, "kill_anon_super" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x8ba39bc2, "is_bad_inode" },
	{ 0x5bb31d0, "pagecache_get_page" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0xb66178fe, "__lock_page" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x932e09a7, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x5e7ef20d, "ubi_open_volume" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x9e6e55c1, "fscrypt_ioctl_get_policy" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x44e9a829, "match_token" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9908c82f, "inc_nlink" },
	{ 0xe3ceffe5, "fscrypt_fname_disk_to_usr" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x7064ef71, "fscrypt_ioctl_add_key" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa9042230, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xe9eedf75, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x55615ad7, "truncate_setsize" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x17ce6eaa, "end_page_writeback" },
	{ 0xb574230, "fscrypt_drop_inode" },
	{ 0xece784c2, "rb_first" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x861caeb, "__insert_inode_hash" },
	{ 0xf729cb4a, "inode_owner_or_capable" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0x2b31e9b0, "ubi_leb_map" },
	{ 0xe02fa261, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x84952ea5, "ubi_open_volume_nm" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe1988465, "__fscrypt_prepare_symlink" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0x851fab25, "fscrypt_put_encryption_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9e18577c, "write_inode_now" },
	{ 0x58760c89, "ubi_leb_change" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xaa0d0b3d, "sget" },
	{ 0x5e71d44b, "timespec64_trunc" },
	{ 0x4fde7f06, "ubi_leb_write" },
	{ 0xa59ddb57, "__fscrypt_prepare_link" },
	{ 0xef42a493, "__fscrypt_encrypt_symlink" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb7eaff8c, "fscrypt_ioctl_remove_key" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x50b8dc4e, "from_kgid" },
	{ 0xbd6841d4, "crc16" },
	{ 0x7b4b7815, "security_inode_init_security" },
	{ 0x5a921311, "strncmp" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5f19a52f, "set_nlink" },
	{ 0x90f33821, "fscrypt_ioctl_set_policy" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x66011ab6, "ubi_get_device_info" },
	{ 0x16926234, "fscrypt_encrypt_block_inplace" },
	{ 0xaa4b03a8, "__fscrypt_prepare_rename" },
	{ 0xa681fe88, "generate_random_uuid" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x2841ee99, "ubi_leb_read" },
	{ 0x74eb1bb3, "vfs_ioc_setflags_prepare" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8c79bd2b, "unlock_page" },
	{ 0xb4371509, "generic_file_read_iter" },
	{ 0xe3a53f4c, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x654920ed, "migrate_page_move_mapping" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa342f574, "ubi_leb_unmap" },
	{ 0x7176bbe9, "file_write_and_wait_range" },
	{ 0x60504312, "inode_init_once" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x429579cf, "mnt_drop_write_file" },
	{ 0x40db63f4, "ubi_close_volume" },
	{ 0xc6cbbc89, "capable" },
	{ 0x950b411f, "xattr_full_name" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x27eeadbd, "ilookup" },
	{ 0xe042b4a7, "unregister_shrinker" },
	{ 0xb3e6f650, "fscrypt_file_open" },
	{ 0xa916b694, "strnlen" },
	{ 0xc69444bb, "generic_file_mmap" },
	{ 0x4e98ffd1, "wait_for_stable_page" },
	{ 0x3e301499, "truncate_inode_pages_final" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8994f88, "fscrypt_fname_alloc_buffer" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0xa2764a09, "unlock_new_inode" },
	{ 0xd414d833, "mnt_want_write_file" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xa263892b, "fscrypt_fname_free_buffer" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfa2def15, "fscrypt_setup_filename" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x88d6a4e9, "ubi_get_volume_info" },
	{ 0x8e8f81de, "migrate_page_states" },
	{ 0x1d7dfc8d, "clear_page_dirty_for_io" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51a9cc74, "fscrypt_ioctl_get_policy_ex" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x3f3cd7b9, "d_tmpfile" },
	{ 0xc5186841, "register_filesystem" },
	{ 0x2014ea99, "ubi_open_volume_path" },
	{ 0xabd4b475, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x42801d20, "ubi_sync" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb78c5383, "__test_set_page_writeback" },
	{ 0xe25465f6, "iter_file_splice_write" },
	{ 0xb782ddc2, "iput" },
	{ 0xcddf45c2, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8bc9070, "ihold" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd70459db, "current_time" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xe157714a, "d_splice_alias" },
	{ 0xb0c5d0c1, "register_shrinker" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x7d7fbd7c, "ubi_is_mapped" },
	{ 0x863bb91c, "sync_filesystem" },
	{ 0x2fd899c9, "fscrypt_decrypt_block_inplace" },
	{ 0xf2ce30fd, "d_make_root" },
	{ 0x2f9d09f9, "fscrypt_ioctl_get_key_status" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0xd76bd06c, "__fscrypt_prepare_lookup" },
	{ 0xafd30039, "unregister_filesystem" },
	{ 0x8f3f105b, "init_special_inode" },
	{ 0x88d32759, "filemap_map_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x47b36e7c, "new_inode" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x4d653bd8, "generic_file_splice_read" },
	{ 0x8189b3c9, "fscrypt_ioctl_remove_key_all_users" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xe05477cd, "empty_aops" },
	{ 0xb7104837, "crypto_alloc_base" },
	{ 0xfa616612, "grab_cache_page_write_begin" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x382b9b3d, "clear_inode" },
	{ 0x57fc15af, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xdad320ab, "flush_dcache_page" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x2bef112, "clear_nlink" },
	{ 0x631cc9be, "fscrypt_get_encryption_info" },
	{ 0x88617753, "iget_locked" },
	{ 0x2b2b31bf, "setattr_prepare" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xe477ea1b, "migrate_page_copy" },
	{ 0xd4b5aa58, "generic_fillattr" },
	{ 0xf52ca203, "inode_init_owner" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9967531d, "super_setup_bdi_name" },
};

MODULE_INFO(depends, "ubi");


MODULE_INFO(srcversion, "A93EAB9789D22FB42104BB1");