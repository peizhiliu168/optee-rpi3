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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4d5a9ab1, "sb_min_blocksize" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe8c54221, "unload_nls" },
	{ 0xa6e8f9ff, "make_bad_inode" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x2ff5979e, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaff32987, "iget5_locked" },
	{ 0xbde9b7ce, "from_kuid_munged" },
	{ 0x815b5dd4, "match_octal" },
	{ 0x9c585baa, "seq_escape" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xa5c0210e, "__lock_buffer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x81a59c2b, "block_read_full_page" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9d1809fb, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa9042230, "generic_read_dir" },
	{ 0x44635330, "igrab" },
	{ 0x85bc2b66, "unlock_buffer" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5ad93af1, "set_page_dirty" },
	{ 0x55615ad7, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc7371ca5, "from_kgid_munged" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x861caeb, "__insert_inode_hash" },
	{ 0xdcb764ad, "memset" },
	{ 0xed92d16f, "inode_add_bytes" },
	{ 0x4c969d6b, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9e18577c, "write_inode_now" },
	{ 0xf1e046cc, "panic" },
	{ 0xa862f23e, "mpage_writepages" },
	{ 0x9166fada, "strncpy" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5f19a52f, "set_nlink" },
	{ 0x1b1281f6, "setattr_copy" },
	{ 0xc5f812c5, "sync_dirty_buffer" },
	{ 0x773a3ca0, "truncate_pagecache" },
	{ 0x4e3567f7, "match_int" },
	{ 0xb4371509, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4eff46f8, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x72237b7b, "mark_page_accessed" },
	{ 0x7176bbe9, "file_write_and_wait_range" },
	{ 0x60504312, "inode_init_once" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xc69444bb, "generic_file_mmap" },
	{ 0x4d295d55, "pagecache_write_end" },
	{ 0xff216a81, "block_write_full_page" },
	{ 0xb692cc09, "sync_blockdev" },
	{ 0x3e301499, "truncate_inode_pages_final" },
	{ 0xec536ac8, "try_to_free_buffers" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xf56a8dda, "load_nls" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2fee98c1, "generic_write_end" },
	{ 0xa2764a09, "unlock_new_inode" },
	{ 0x336cd467, "kill_block_super" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xeeaedebe, "inode_newsize_ok" },
	{ 0xbf07d4ab, "inode_set_bytes" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x41814cb8, "dirty_writeback_interval" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xc5186841, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xabd4b475, "generic_file_write_iter" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb782ddc2, "iput" },
	{ 0x898042, "cont_write_begin" },
	{ 0xf9c48d97, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f880abd, "inode_dio_wait" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd70459db, "current_time" },
	{ 0xa6db836c, "load_nls_default" },
	{ 0xe157714a, "d_splice_alias" },
	{ 0x863bb91c, "sync_filesystem" },
	{ 0x5799a392, "sb_set_blocksize" },
	{ 0xf2ce30fd, "d_make_root" },
	{ 0x9b03e032, "__blockdev_direct_IO" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc2d25a1d, "mark_buffer_dirty" },
	{ 0x140c97cc, "ioctl_by_bdev" },
	{ 0xafd30039, "unregister_filesystem" },
	{ 0x47b36e7c, "new_inode" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x4d653bd8, "generic_file_splice_read" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x382b9b3d, "clear_inode" },
	{ 0x57fc15af, "d_instantiate" },
	{ 0x6e0c5237, "pagecache_write_begin" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x51ed91a6, "generic_block_bmap" },
	{ 0x5db7d01e, "generic_listxattr" },
	{ 0x2bef112, "clear_nlink" },
	{ 0x88617753, "iget_locked" },
	{ 0x2b2b31bf, "setattr_prepare" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "42C5A3922FB959897AD219E");
