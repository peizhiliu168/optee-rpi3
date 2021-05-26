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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x6a5fa363, "sigprocmask" },
	{ 0x4011a3e6, "dma_direct_unmap_sg" },
	{ 0xd679a57f, "cdev_del" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xa4c47b95, "single_open" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x1df60c51, "dma_set_mask" },
	{ 0x8b1f9945, "single_release" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe5ff260d, "device_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3637d228, "devm_ioremap_resource" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbf34e288, "dma_free_attrs" },
	{ 0x5682f894, "platform_device_register_full" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x457a3d90, "seq_read" },
	{ 0x8e3622c3, "of_dma_configure" },
	{ 0x5ad93af1, "set_page_dirty" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x7b8a7ac3, "dma_set_coherent_mask" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0x68710b8b, "of_device_is_available" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x885ac16c, "of_match_node" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xcd3be9f4, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x5e95a8ad, "platform_get_resource" },
	{ 0x1cb9f182, "device_create" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb9c09ddc, "of_get_child_by_name" },
	{ 0xf843c5d1, "flush_signals" },
	{ 0xf40e9244, "cdev_add" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4a53b4a0, "of_find_compatible_node" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x391617cc, "rpi_firmware_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8cec48c, "dma_direct_map_sg" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xcf2a6966, "up" },
	{ 0x87a39647, "set_user_nice" },
	{ 0x96848186, "scnprintf" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9e8fe91f, "dmam_alloc_attrs" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe58cb6ec, "platform_get_irq" },
	{ 0x60f41d0a, "of_find_device_by_node" },
	{ 0xab75123b, "vmalloc_to_page" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xded99c04, "of_node_put" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9a775031, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x58bade09, "get_user_pages_fast" },
	{ 0x22b40ccb, "dmam_pool_create" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vchiq");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vchiqC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2836-vchiq");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2836-vchiqC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vchiq");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-vchiqC*");

MODULE_INFO(srcversion, "3899560287BB4AEE1266FAD");
