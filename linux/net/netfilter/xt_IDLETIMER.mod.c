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
	{ 0x44a2b3a6, "xt_unregister_target" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xe5ff260d, "device_destroy" },
	{ 0x4f7eab80, "xt_register_target" },
	{ 0x1cb9f182, "device_create" },
	{ 0x9a775031, "__class_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdfe16645, "sysfs_create_file_ns" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbcee111f, "sysfs_notify" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7755396, "sysfs_remove_file_ns" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "623DE23ABAB50F80C9FB4C6");
