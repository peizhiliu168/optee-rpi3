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
	{ 0x3d8baf3b, "zs_huge_class_size" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc341ae6d, "zs_map_object" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0xa2f83de, "blk_cleanup_queue" },
	{ 0x572284dd, "blk_queue_io_opt" },
	{ 0x27864d57, "memparse" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc69b7ee5, "zs_destroy_pool" },
	{ 0x6fc718e1, "generic_end_io_acct" },
	{ 0xb29533ee, "zs_malloc" },
	{ 0x11eef4a3, "blk_queue_io_min" },
	{ 0x56470118, "__warn_printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xcc3fed33, "blk_queue_max_write_zeroes_sectors" },
	{ 0x5da67adc, "zs_compact" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x20ece86b, "revalidate_disk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x76584ade, "fsync_bdev" },
	{ 0x48e06c7e, "__alloc_disk_node" },
	{ 0x958df3ac, "zs_free" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xc38ce635, "blk_alloc_queue" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc5850110, "printk" },
	{ 0x23f9ab1f, "blk_queue_max_discard_sectors" },
	{ 0xb4fb1a8f, "del_gendisk" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0x56dbf27e, "__cpuhp_state_add_instance" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbcf1f0e6, "zs_create_pool" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0xce807a25, "up_write" },
	{ 0x7247df5a, "__class_register" },
	{ 0x9e858ae, "generic_start_io_acct" },
	{ 0x57bc19d2, "down_write" },
	{ 0xed8a2d95, "memset64" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x71f95eeb, "blk_queue_flag_clear" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x78d55f48, "blk_queue_flag_set" },
	{ 0xb16cdc80, "blk_queue_make_request" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe5317348, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd2daf999, "put_disk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xe8b3f0d8, "__cpuhp_state_remove_instance" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xcbe56bc2, "zs_get_total_pages" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe071d05d, "zs_pool_stats" },
	{ 0x96848186, "scnprintf" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x25905040, "device_add_disk" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xb7104837, "crypto_alloc_base" },
	{ 0xe0753094, "blk_queue_logical_block_size" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xfc795fdb, "bdget_disk" },
	{ 0x5b047ff7, "bdput" },
	{ 0x924c46f8, "zs_unmap_object" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xdad320ab, "flush_dcache_page" },
	{ 0x84f62e6, "page_endio" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "zsmalloc");


MODULE_INFO(srcversion, "74320660DB5936B392634A5");
