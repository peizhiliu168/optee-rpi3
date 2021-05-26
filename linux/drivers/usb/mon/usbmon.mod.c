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
	{ 0x317b9f9b, "usb_mon_register" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0xd679a57f, "cdev_del" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0x58c9b12f, "usb_debug_root" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe5ff260d, "device_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd3bfa753, "usb_bus_idr_lock" },
	{ 0x1b572e30, "debugfs_remove" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1cb9f182, "device_create" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xfed11ed1, "usb_mon_deregister" },
	{ 0xf40e9244, "cdev_add" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2878eef7, "class_destroy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x790be0b9, "usb_bus_idr" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9a775031, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "919DA275607B231672D1FD8");
