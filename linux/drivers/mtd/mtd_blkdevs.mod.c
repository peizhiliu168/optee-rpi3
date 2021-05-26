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
	{ 0x376eb57, "__blk_mq_end_request" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xa2f83de, "blk_cleanup_queue" },
	{ 0xe62c1ea0, "mtd_table_mutex" },
	{ 0xabc31f1e, "rq_flush_dcache_pages" },
	{ 0x1d15ae6e, "blk_mq_start_request" },
	{ 0x56c98769, "blk_mq_unfreeze_queue" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xafda34f5, "__put_mtd_device" },
	{ 0xaffd994, "blk_mq_freeze_queue" },
	{ 0xa7aa9292, "__get_mtd_device" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x48e06c7e, "__alloc_disk_node" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x23f9ab1f, "blk_queue_max_discard_sectors" },
	{ 0xb4fb1a8f, "del_gendisk" },
	{ 0x91db095c, "blk_mq_free_tag_set" },
	{ 0x575a2028, "register_mtd_user" },
	{ 0x72f5110a, "__mtd_next_device" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xb953ac8, "unregister_mtd_user" },
	{ 0x476e4a2a, "blk_update_request" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x71f95eeb, "blk_queue_flag_clear" },
	{ 0x5bee7acd, "module_put" },
	{ 0x3a7b7b30, "blk_mq_init_sq_queue" },
	{ 0x78d55f48, "blk_queue_flag_set" },
	{ 0xd2daf999, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ccf583, "__module_get" },
	{ 0xb584a25e, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f80ad01, "blk_mq_quiesce_queue" },
	{ 0x4cd015fe, "blk_mq_unquiesce_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x25905040, "device_add_disk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xe0753094, "blk_queue_logical_block_size" },
	{ 0xc3614bd3, "set_disk_ro" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "3561D640AA8701323854A99");
