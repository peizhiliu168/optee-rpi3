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
	{ 0xa1e549e1, "bus_register" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x7594e9ec, "kobject_set_name" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4260eb07, "fput" },
	{ 0x66af638d, "bus_unregister" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x5bee7acd, "module_put" },
	{ 0x5af6c370, "fwnode_graph_parse_endpoint" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc2231be7, "cdev_device_add" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8555211, "fd_install" },
	{ 0x9f696742, "device_initialize" },
	{ 0x8c6e704e, "cdev_device_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xeca389f4, "anon_inode_getfile" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56FB6DA0135A8D8732B3D94");
