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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xa4c47b95, "single_open" },
	{ 0xac05d0bf, "proc_create_single_data" },
	{ 0xba119402, "nvmem_register" },
	{ 0x8b1f9945, "single_release" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x932e09a7, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5a17815d, "sysfs_create_files" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0xe5ff260d, "device_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7bfc26d5, "__register_chrdev" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x457a3d90, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd12edf32, "lookup_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdcb764ad, "memset" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x594f92ee, "bdi_alloc_node" },
	{ 0xc12ad67f, "device_register" },
	{ 0xc5850110, "printk" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x5ac5c1e8, "fixed_size_llseek" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1cb9f182, "device_create" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x252ac553, "of_prop_next_string" },
	{ 0x7247df5a, "__class_register" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb9c09ddc, "of_get_child_by_name" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x5bee7acd, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88ccb32f, "bdi_put" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x85ccf583, "__module_get" },
	{ 0x3f1eb900, "sysfs_remove_files" },
	{ 0x8c6ae2e9, "logfc" },
	{ 0xa15a3662, "of_node_get" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0xee242685, "sget_fc" },
	{ 0x3535f9, "nvmem_unregister" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0xa363acc6, "bdi_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xded99c04, "of_node_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x5b047ff7, "bdput" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x74ed1e7d, "generic_shutdown_super" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4D4FD35376C10334FF925EC");
