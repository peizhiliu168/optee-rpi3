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
	{ 0x9714e0bb, "ktime_get_raw" },
	{ 0xa1e549e1, "bus_register" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xe1dc7e68, "irq_set_chip" },
	{ 0x6cdbb176, "__irq_set_handler" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0xd7b411cb, "__irq_alloc_descs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0xf6b523a2, "devres_alloc_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4830eca5, "device_del" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xffb7c514, "ida_free" },
	{ 0xf08f9d73, "device_property_read_string_array" },
	{ 0x1b572e30, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1cb2c6d8, "kvasprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x31faa7fb, "device_add" },
	{ 0xdee166c3, "bus_find_device" },
	{ 0x1dd80e82, "simple_open" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x66af638d, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x5bee7acd, "module_put" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xee0101fd, "handle_simple_irq" },
	{ 0x1c5b1f28, "irq_free_descs" },
	{ 0x3fa66679, "devres_release" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e75fdf4, "anon_inode_getfd" },
	{ 0x1000e51, "schedule" },
	{ 0xc2231be7, "cdev_device_add" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x14d91d5f, "of_get_property" },
	{ 0x8eab9994, "devres_add" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x85ccf583, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9f696742, "device_initialize" },
	{ 0x96848186, "scnprintf" },
	{ 0x9c1a9d2e, "of_parse_phandle_with_args" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x8c6e704e, "cdev_device_del" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x11151312, "of_property_match_string" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xbcc15e75, "ktime_get_coarse_with_offset" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xded99c04, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5F97EA11E5C30BCAD7FFE98");
