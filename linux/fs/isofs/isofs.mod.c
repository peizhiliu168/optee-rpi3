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
	{ 0xe8c54221, "unload_nls" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaff32987, "iget5_locked" },
	{ 0xbde9b7ce, "from_kuid_munged" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x5bb31d0, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x8bad2ffc, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9d1809fb, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x1815d174, "page_symlink_inode_operations" },
	{ 0xa9042230, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0xc5d682c8, "__getblk_gfp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc7371ca5, "from_kgid_munged" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0x7b2897f1, "mpage_readpages" },
	{ 0xdcb764ad, "memset" },
	{ 0xdccb45c9, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4c969d6b, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x5cf16f5a, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x5a921311, "strncmp" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x5f19a52f, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2d172d5c, "__wait_on_buffer" },
	{ 0xa07a37f0, "memchr" },
	{ 0x1b26c935, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8c79bd2b, "unlock_page" },
	{ 0x7b5063cb, "inode_nohighmem" },
	{ 0x4eff46f8, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x60504312, "inode_init_once" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xf56a8dda, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa2764a09, "unlock_new_inode" },
	{ 0x336cd467, "kill_block_super" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xc5186841, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb782ddc2, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa6db836c, "load_nls_default" },
	{ 0xe157714a, "d_splice_alias" },
	{ 0x863bb91c, "sync_filesystem" },
	{ 0x5799a392, "sb_set_blocksize" },
	{ 0xf2ce30fd, "d_make_root" },
	{ 0x140c97cc, "ioctl_by_bdev" },
	{ 0xafd30039, "unregister_filesystem" },
	{ 0x8f3f105b, "init_special_inode" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdad320ab, "flush_dcache_page" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x51ed91a6, "generic_block_bmap" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CFE935A48F43241EC039673");
