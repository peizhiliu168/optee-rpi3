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
	{ 0xd679a57f, "cdev_del" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x8d40a73f, "kobject_get" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe5ff260d, "device_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xd2fbd08, "fasync_helper" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1cb9f182, "device_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xf40e9244, "cdev_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x2878eef7, "class_destroy" },
	{ 0x20651803, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9a775031, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3DBFE3792CD5F8CF7F1081B");
