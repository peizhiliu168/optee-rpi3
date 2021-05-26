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
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0xd679a57f, "cdev_del" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe4fba0f1, "mtd_block_isbad" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5e498af, "seq_open" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x4575f42f, "mtd_get_device_size" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x73debf08, "mtd_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x457a3d90, "seq_read" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x5fc3555b, "mtd_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xb25e26d9, "misc_register" },
	{ 0xa9c98ced, "kern_path" },
	{ 0xdcb764ad, "memset" },
	{ 0xc12ad67f, "device_register" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x4144e2c3, "mtd_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0x6eaac110, "put_mtd_device" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x5ac5c1e8, "fixed_size_llseek" },
	{ 0x5a921311, "strncmp" },
	{ 0x1b572e30, "debugfs_remove" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1dd80e82, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x7247df5a, "__class_register" },
	{ 0x57bc19d2, "down_write" },
	{ 0x441aa4d6, "mtd_block_markbad" },
	{ 0xf40e9244, "cdev_add" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x5bee7acd, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0xc2231be7, "cdev_device_add" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x4352b2c, "get_mtd_device" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x211741c4, "path_put" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xde829861, "get_mtd_device_nm" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0xcddf45c2, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x9f696742, "device_initialize" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0x8c6e704e, "cdev_device_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15a825d3, "seq_release" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x983d7a0, "vfs_getattr" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x25f70e91, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x760a0f4f, "yield" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "AC0546D62EDD5850BDACE0B");
