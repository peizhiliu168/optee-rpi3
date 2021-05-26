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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9e1623af, "securityfs_create_file" },
	{ 0x1ba7c500, "physvirt_offset" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5e498af, "seq_open" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9ebcfe13, "seq_write" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xef71870e, "__compat_only_sysfs_link_entry_to_kobj" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe9e8faeb, "efi_tpm_final_log_size" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x457a3d90, "seq_read" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0x994f623c, "securityfs_remove" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xcd24e146, "hash_digest_size" },
	{ 0x3011f33c, "of_find_property" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x54d65f25, "sysfs_remove_link" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xce807a25, "up_write" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa0f493d9, "efi" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x424b97c4, "devm_add_action" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc2231be7, "cdev_device_add" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x14d91d5f, "of_get_property" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x4d924f20, "memremap" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9f696742, "device_initialize" },
	{ 0xf81c5d15, "securityfs_create_dir" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x2878eef7, "class_destroy" },
	{ 0x8c6e704e, "cdev_device_del" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11151312, "of_property_match_string" },
	{ 0x15a825d3, "seq_release" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9a775031, "__class_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2FB16D0C61C0B5FAD8273C1");
