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
	{ 0x79fd1a73, "pnfs_unregister_layoutdriver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3e9a511a, "pnfs_generic_pg_init_write" },
	{ 0xc719b19f, "fs_bio_set" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xae70287a, "bio_alloc_bioset" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xdaa04a32, "rpc_unlink" },
	{ 0x16101d2b, "pnfs_ld_write_done" },
	{ 0x1d88c676, "pnfs_error_mark_layout_for_return" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xf9d5f12e, "dput" },
	{ 0xca93221b, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeb42baa9, "nfs4_mark_deviceid_unavailable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x9fb86e83, "rpc_mkpipe_data" },
	{ 0x5dd3b1de, "rpc_mkpipe_dentry" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x35375594, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0xf64ae03c, "rpc_get_sb_net" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x6ae64537, "pnfs_generic_pg_cleanup" },
	{ 0xd468266, "pnfs_generic_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xbcc86f40, "xdr_init_decode_pages" },
	{ 0xa0559a74, "rpc_queue_upcall" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x94dabf74, "bio_add_page" },
	{ 0x91b6b408, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x94feba72, "blkdev_get_by_path" },
	{ 0xbcb23727, "nfs_pageio_reset_write_mds" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xca7665bc, "rpc_d_lookup_sb" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc2bc1201, "blkdev_get_by_dev" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x4f81c4a4, "nfs4_put_deviceid_node" },
	{ 0xdeba06c, "bio_put" },
	{ 0x5bee7acd, "module_put" },
	{ 0x5a50f96d, "rpc_pipe_generic_upcall" },
	{ 0x8c10e750, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x92bd385f, "rpc_destroy_pipe_data" },
	{ 0xf0fccb8d, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xfb8385db, "rpc_put_sb_net" },
	{ 0x1307be6, "pnfs_generic_pg_readpages" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x655b757e, "page_cache_next_miss" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xc382c72f, "pnfs_generic_pg_writepages" },
	{ 0xcddf45c2, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x154e19a1, "pnfs_generic_pg_init_read" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2899fd80, "xdr_inline_decode" },
	{ 0xab75123b, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x73d99ee8, "nfs_pageio_reset_read_mds" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x968a8ede, "nfs4_init_deviceid_node" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xad614eb3, "pnfs_set_lo_fail" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xdfd74f93, "xdr_set_scratch_buffer" },
	{ 0xdad320ab, "flush_dcache_page" },
	{ 0xa11335d2, "pnfs_ld_read_done" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x562596d8, "pnfs_register_layoutdriver" },
	{ 0x1033a7a0, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "131139394D0AA9F9D6CF3C4");
