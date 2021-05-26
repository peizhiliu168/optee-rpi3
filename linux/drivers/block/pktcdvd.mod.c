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
	{ 0xe9eedf75, "nonseekable_open" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x8b1f9945, "single_release" },
	{ 0x457a3d90, "seq_read" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x25f70e91, "misc_deregister" },
	{ 0x8e48459c, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7e894db6, "proc_mkdir" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xb25e26d9, "misc_register" },
	{ 0x7247df5a, "__class_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xde1cda16, "bioset_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xae70287a, "bio_alloc_bioset" },
	{ 0x328c88e0, "bd_set_size" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0xd85d3841, "bio_list_copy_data" },
	{ 0xece784c2, "rb_first" },
	{ 0x58c05769, "clear_wb_congested" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x809fca8e, "generic_make_request" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x87a39647, "set_user_nice" },
	{ 0x94dabf74, "bio_add_page" },
	{ 0x6fe6e448, "bio_reset" },
	{ 0x7b14b6de, "bio_devname" },
	{ 0x1033a7a0, "bio_associate_blkg" },
	{ 0xd90ff8fe, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x94d79037, "set_wb_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x509b7757, "bio_chain" },
	{ 0x66857cc1, "bio_split" },
	{ 0x15d4075b, "blk_queue_split" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xead53314, "__blkdev_driver_ioctl" },
	{ 0xa2f83de, "blk_cleanup_queue" },
	{ 0xb4fb1a8f, "del_gendisk" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0x1b572e30, "debugfs_remove" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0xca9360b5, "rb_next" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0xdeba06c, "bio_put" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x29d2e9f7, "blk_put_request" },
	{ 0x59e24fa9, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xe7d268f1, "blk_rq_map_kern" },
	{ 0x736c8f46, "blk_get_request" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x5bee7acd, "module_put" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x1cb9f182, "device_create" },
	{ 0x25905040, "device_add_disk" },
	{ 0xac05d0bf, "proc_create_single_data" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x39f12b4d, "blk_queue_max_hw_sectors" },
	{ 0xe0753094, "blk_queue_logical_block_size" },
	{ 0xb16cdc80, "blk_queue_make_request" },
	{ 0x90b9e132, "set_blocksize" },
	{ 0x85ccf583, "__module_get" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xd2daf999, "put_disk" },
	{ 0xf0fccb8d, "blkdev_put" },
	{ 0x14f44669, "blkdev_get" },
	{ 0x9885a00a, "bdget" },
	{ 0xc38ce635, "blk_alloc_queue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x48e06c7e, "__alloc_disk_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xa4c47b95, "single_open" },
	{ 0xedc86eeb, "kobject_put" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0xb8a865a1, "kobject_init_and_add" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xf53f95a3, "bdevname" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "F7ED0C59BE5A77176529C3F");
