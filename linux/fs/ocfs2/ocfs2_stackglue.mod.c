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
	{ 0x8fab5ad6, "kset_create_and_add" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0x319d493d, "proc_dostring" },
	{ 0x5bee7acd, "module_put" },
	{ 0xa916b694, "strnlen" },
	{ 0x75deb00f, "fs_kobj" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xccff460f, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "740A8A8CCBD55158AE3DFCC");
