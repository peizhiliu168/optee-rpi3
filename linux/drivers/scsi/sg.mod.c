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
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x5ff7efd2, "class_interface_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xe048a89a, "scsi_register_interface" },
	{ 0x9a775031, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xe7f6f1ef, "blk_trace_startstop" },
	{ 0x51120f4d, "sg_scsi_ioctl" },
	{ 0x73d33cb, "blk_trace_setup" },
	{ 0x4ccd378a, "_raw_write_unlock_irq" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x10175e52, "scsi_ioctl" },
	{ 0x2df1b637, "scsi_ioctl_block_when_processing_errors" },
	{ 0xa67d24e9, "blk_trace_remove" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x27639220, "blk_verify_command" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x541b465f, "blk_rq_map_user_iov" },
	{ 0x6177566e, "import_iovec" },
	{ 0x9144a77e, "blk_execute_rq_nowait" },
	{ 0x69b99ede, "blk_rq_map_user" },
	{ 0x4829a47e, "memcpy" },
	{ 0x736c8f46, "blk_get_request" },
	{ 0x85ccf583, "__module_get" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6e1bf146, "scsi_block_when_processing_errors" },
	{ 0x2523a807, "scsi_autopm_get_device" },
	{ 0x94f27e18, "scsi_device_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x20978fb9, "idr_find" },
	{ 0xe9eedf75, "nonseekable_open" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe5ff260d, "device_destroy" },
	{ 0x54d65f25, "sysfs_remove_link" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcac7ef12, "vmemmap" },
	{ 0x3b1fcc32, "__task_pid_nr_ns" },
	{ 0x5bee7acd, "module_put" },
	{ 0x6adc994f, "scsi_device_put" },
	{ 0x16d05b2c, "blk_rq_unmap_user" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xd679a57f, "cdev_del" },
	{ 0xb1755aef, "sdev_prefix_printk" },
	{ 0x4f2903c8, "sysfs_create_link" },
	{ 0x1cb9f182, "device_create" },
	{ 0xf40e9244, "cdev_add" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc9722c41, "cdev_alloc" },
	{ 0x48e06c7e, "__alloc_disk_node" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67f66b5f, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x20651803, "kill_fasync" },
	{ 0x29d2e9f7, "blk_put_request" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xe8af5e58, "scsi_autopm_put_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd2fbd08, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2daf999, "put_disk" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0B2B2B022EB9DDB7E94D99B");
