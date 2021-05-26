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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa1e549e1, "bus_register" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xa4c47b95, "single_open" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8b1f9945, "single_release" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7594e9ec, "kobject_set_name" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x457a3d90, "seq_read" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x66af638d, "bus_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x843b5070, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xc2231be7, "cdev_device_add" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x9f696742, "device_initialize" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c6e704e, "cdev_device_del" },
	{ 0x29361773, "complete" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C9259D241CC8AA9160288D8");
