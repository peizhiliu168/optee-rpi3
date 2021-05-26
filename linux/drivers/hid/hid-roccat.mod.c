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
	{ 0xd679a57f, "cdev_del" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe5ff260d, "device_destroy" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7aceca9e, "hid_hw_close" },
	{ 0x1691841b, "hid_hw_open" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0x1cb9f182, "device_create" },
	{ 0xf40e9244, "cdev_add" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7C15FB3DF66CB22532A6105");
