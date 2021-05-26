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
	{ 0xedc86eeb, "kobject_put" },
	{ 0xc9722c41, "cdev_alloc" },
	{ 0xd679a57f, "cdev_del" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x7594e9ec, "kobject_set_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x556b7f4f, "kobject_create_and_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x4830eca5, "device_del" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0xd2fbd08, "fasync_helper" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x31faa7fb, "device_add" },
	{ 0x37681475, "kobject_add" },
	{ 0x7247df5a, "__class_register" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xf40e9244, "cdev_add" },
	{ 0x5bee7acd, "module_put" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x49690b22, "remap_pfn_range" },
	{ 0x9f696742, "device_initialize" },
	{ 0x656193ca, "kobject_init" },
	{ 0x20651803, "kill_fasync" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0xab75123b, "vmalloc_to_page" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED0BE67B5E5615CBF59C08E");
