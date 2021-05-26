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
	{ 0x33264da6, "crypto_alloc_skcipher" },
	{ 0x86c45a46, "vfs_create" },
	{ 0xedc86eeb, "kobject_put" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x1a97c6d9, "kernel_write" },
	{ 0x78095307, "iget_failed" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa4201ba6, "fsstack_copy_inode_size" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x56de68eb, "set_anon_super" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xa6e8f9ff, "make_bad_inode" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x2ff5979e, "__mark_inode_dirty" },
	{ 0x768c8c1a, "crypto_alloc_shash" },
	{ 0xce04be7e, "mntget" },
	{ 0x258d53b1, "inode_permission" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaff32987, "iget5_locked" },
	{ 0xbedbced7, "kill_anon_super" },
	{ 0x5aaa008b, "key_type_user" },
	{ 0xb1613ccc, "dget_parent" },
	{ 0xb8b043f2, "kfree_link" },
	{ 0x30fe6708, "vfs_link" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x2f1a8e4c, "vfs_llseek" },
	{ 0xb66178fe, "__lock_page" },
	{ 0x6afb5b0c, "lookup_one_len_unlocked" },
	{ 0x28241aa0, "filemap_write_and_wait" },
	{ 0x94b20157, "touch_atime" },
	{ 0x932e09a7, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xf9d5f12e, "dput" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0x229398ec, "request_key_tag" },
	{ 0x7b8e35bd, "dentry_open" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x75002656, "vfs_mknod" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x65e29ff5, "vfs_fsync" },
	{ 0xbc134da5, "d_add" },
	{ 0xa757aa0c, "d_instantiate_new" },
	{ 0xa9042230, "generic_read_dir" },
	{ 0x44635330, "igrab" },
	{ 0x83e6d4e3, "super_setup_bdi" },
	{ 0x76252b8b, "vfs_symlink" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x55615ad7, "truncate_setsize" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x556b7f4f, "kobject_create_and_add" },
	{ 0x66258761, "vfs_rmdir" },
	{ 0x279fc521, "unlock_rename" },
	{ 0x2364da19, "key_validate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x854640bd, "kernel_read" },
	{ 0xa9c98ced, "kern_path" },
	{ 0xdcb764ad, "memset" },
	{ 0xe02fa261, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0xaa0d0b3d, "sget" },
	{ 0x2202fc5f, "__vfs_setxattr" },
	{ 0xd3ef14cd, "crypto_shash_digest" },
	{ 0x9166fada, "strncpy" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5a921311, "strncmp" },
	{ 0xfb481954, "vprintk" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0xca62362a, "lock_rename" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5f19a52f, "set_nlink" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8c79bd2b, "unlock_page" },
	{ 0xb4371509, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4260eb07, "fput" },
	{ 0x85c697d7, "vfs_get_link" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x75e60613, "key_put" },
	{ 0x7176bbe9, "file_write_and_wait_range" },
	{ 0x60504312, "inode_init_once" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x7e0826e2, "atomic_dec_and_mutex_lock" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0xc69444bb, "generic_file_mmap" },
	{ 0x75deb00f, "fs_kobj" },
	{ 0x3e301499, "truncate_inode_pages_final" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xa2764a09, "unlock_new_inode" },
	{ 0x32c95621, "d_drop" },
	{ 0xeeaedebe, "inode_newsize_ok" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x170a0d22, "__vfs_removexattr" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xd2f4144c, "vfs_mkdir" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x211741c4, "path_put" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x3d89d973, "vfs_unlink" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xc5186841, "register_filesystem" },
	{ 0x5e62fe7d, "fsstack_copy_attr_all" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xabd4b475, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd6ea749, "__vfs_getxattr" },
	{ 0xb782ddc2, "iput" },
	{ 0xf9c48d97, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x801bf9ae, "param_ops_long" },
	{ 0xe157714a, "d_splice_alias" },
	{ 0xf2ce30fd, "d_make_root" },
	{ 0x7a4497db, "kzfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xeb4edf79, "iterate_dir" },
	{ 0xafd30039, "unregister_filesystem" },
	{ 0x8f3f105b, "init_special_inode" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4d653bd8, "generic_file_splice_read" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x365102e, "vfs_rename" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x983d7a0, "vfs_getattr" },
	{ 0xfa616612, "grab_cache_page_write_begin" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x392d5922, "notify_change" },
	{ 0x1d836ff0, "vfs_setxattr" },
	{ 0x382b9b3d, "clear_inode" },
	{ 0x57fc15af, "d_instantiate" },
	{ 0xdad320ab, "flush_dcache_page" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x2bef112, "clear_nlink" },
	{ 0x2b2b31bf, "setattr_prepare" },
	{ 0xd4b5aa58, "generic_fillattr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8A147A0742DA56E38B349CD");