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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4d5a9ab1, "sb_min_blocksize" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0xa6e8f9ff, "make_bad_inode" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x5bb31d0, "pagecache_get_page" },
	{ 0x8bad2ffc, "ll_rw_block" },
	{ 0x1cfb7fd1, "get_tree_bdev" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa9042230, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xc5d682c8, "__getblk_gfp" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x861caeb, "__insert_inode_hash" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x4c969d6b, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5cf16f5a, "d_obtain_alias" },
	{ 0x9166fada, "strncpy" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5f19a52f, "set_nlink" },
	{ 0x2d172d5c, "__wait_on_buffer" },
	{ 0x65dccf13, "xz_dec_end" },
	{ 0x1b26c935, "generic_ro_fops" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8c79bd2b, "unlock_page" },
	{ 0x7b5063cb, "inode_nohighmem" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x60504312, "inode_init_once" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6e5b8651, "xz_dec_run" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa2764a09, "unlock_new_inode" },
	{ 0x336cd467, "kill_block_super" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xc5186841, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x52d717da, "xz_dec_init" },
	{ 0x8c6ae2e9, "logfc" },
	{ 0xb782ddc2, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x5eb9a60c, "page_get_link" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe157714a, "d_splice_alias" },
	{ 0x863bb91c, "sync_filesystem" },
	{ 0xf2ce30fd, "d_make_root" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x81db6ebb, "xz_dec_reset" },
	{ 0xafd30039, "unregister_filesystem" },
	{ 0x8f3f105b, "init_special_inode" },
	{ 0x47b36e7c, "new_inode" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdad320ab, "flush_dcache_page" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x88617753, "iget_locked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DBDE8331AFEEC5DEF0A4938");
