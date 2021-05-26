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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5e4c2afe, "scsi_register_driver" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x7247df5a, "__class_register" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x10175e52, "scsi_ioctl" },
	{ 0xdb756b4b, "scsi_cmd_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x2df1b637, "scsi_ioctl_block_when_processing_errors" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x16d05b2c, "blk_rq_unmap_user" },
	{ 0x29361773, "complete" },
	{ 0x6e1bf146, "scsi_block_when_processing_errors" },
	{ 0x94f27e18, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x20978fb9, "idr_find" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x29d2e9f7, "blk_put_request" },
	{ 0x9144a77e, "blk_execute_rq_nowait" },
	{ 0x4829a47e, "memcpy" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x69b99ede, "blk_rq_map_user" },
	{ 0x736c8f46, "blk_get_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x33374716, "blk_put_queue" },
	{ 0x4f2903c8, "sysfs_create_link" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc20fd2a4, "blk_queue_rq_timeout" },
	{ 0x4298d06c, "blk_get_queue" },
	{ 0x48e06c7e, "__alloc_disk_node" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x5a921311, "strncmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdad320ab, "flush_dcache_page" },
	{ 0x58bade09, "get_user_pages_fast" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x67f66b5f, "__scsi_print_sense" },
	{ 0x10d9f885, "scsi_sense_desc_find" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xe8af5e58, "scsi_autopm_put_device" },
	{ 0x6adc994f, "scsi_device_put" },
	{ 0x36f2ec94, "scsi_set_medium_removal" },
	{ 0xb1755aef, "sdev_prefix_printk" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1cb9f182, "device_create" },
	{ 0xf40e9244, "cdev_add" },
	{ 0xc9722c41, "cdev_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2523a807, "scsi_autopm_get_device" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0xd679a57f, "cdev_del" },
	{ 0x54d65f25, "sysfs_remove_link" },
	{ 0xd2daf999, "put_disk" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x96848186, "scnprintf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BC7BF3F0D5C28137E193E3A");
