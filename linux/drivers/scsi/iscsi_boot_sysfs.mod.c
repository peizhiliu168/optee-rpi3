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
	{ 0x8fab5ad6, "kset_create_and_add" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x731c7044, "firmware_kobj" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0xb8a865a1, "kobject_init_and_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xccff460f, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C20997ECCE1CF436DF99F29");
