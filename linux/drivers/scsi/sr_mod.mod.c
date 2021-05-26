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
	{ 0x36f2ec94, "scsi_set_medium_removal" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc20fd2a4, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x9af013e8, "cdrom_number_of_slots" },
	{ 0x2df1b637, "scsi_ioctl_block_when_processing_errors" },
	{ 0x4edda5f8, "unregister_cdrom" },
	{ 0x146eca38, "blk_dump_rq_flags" },
	{ 0x87b8798d, "sg_next" },
	{ 0x32841735, "scmd_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9a38d305, "cdrom_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2523a807, "scsi_autopm_get_device" },
	{ 0x48e06c7e, "__alloc_disk_node" },
	{ 0x9d219279, "check_disk_change" },
	{ 0xe03a8f80, "cdrom_release" },
	{ 0xb4fb1a8f, "del_gendisk" },
	{ 0xed887dd3, "__scsi_execute" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x5a921311, "strncmp" },
	{ 0xb1755aef, "sdev_prefix_printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc4d6c20e, "cdrom_get_media_event" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xf25b38c0, "cdrom_check_events" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x19c57e07, "cdrom_get_last_written" },
	{ 0x6adc994f, "scsi_device_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x10175e52, "scsi_ioctl" },
	{ 0xd2daf999, "put_disk" },
	{ 0x5e4c2afe, "scsi_register_driver" },
	{ 0x6e1bf146, "scsi_block_when_processing_errors" },
	{ 0xa910cdb5, "scsi_test_unit_ready" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x806d0c92, "scsi_init_io" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x43d2bb4f, "cdrom_ioctl" },
	{ 0x4649b8af, "blk_pm_runtime_init" },
	{ 0x556bdfbc, "register_cdrom" },
	{ 0x25905040, "device_add_disk" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x94f27e18, "scsi_device_get" },
	{ 0xe8af5e58, "scsi_autopm_put_device" },
	{ 0xe0753094, "blk_queue_logical_block_size" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8061a927, "scsi_mode_sense" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "942D4B22F352236F11A0A76");
