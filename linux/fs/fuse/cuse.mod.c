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
	{ 0xfdf2b03a, "fuse_file_poll" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0x25f70e91, "misc_deregister" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xb25e26d9, "misc_register" },
	{ 0x9a775031, "__class_create" },
	{ 0x4829a47e, "memcpy" },
	{ 0x77abd2e9, "fuse_dev_operations" },
	{ 0x9f323cba, "fuse_dev_free" },
	{ 0xf04458c1, "fuse_simple_background" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xc8d8d54, "fuse_dev_alloc_install" },
	{ 0x4fff2dde, "fuse_conn_init" },
	{ 0x3e59dac0, "fuse_dev_fiq_ops" },
	{ 0xc5850110, "printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0xf40e9244, "cdev_add" },
	{ 0xc9722c41, "cdev_alloc" },
	{ 0x31faa7fb, "device_add" },
	{ 0xdded6c02, "put_device" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x9f696742, "device_initialize" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f494a67, "fuse_direct_io" },
	{ 0x279d3d43, "fuse_do_ioctl" },
	{ 0xf05947b8, "fuse_do_open" },
	{ 0xaccde3ce, "fuse_conn_get" },
	{ 0x2bf171dc, "fuse_sync_release" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xb260b069, "fuse_dev_release" },
	{ 0xfeb34640, "fuse_conn_put" },
	{ 0xd679a57f, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0be1dbf, "fuse_abort_conn" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "fuse");


MODULE_INFO(srcversion, "63F704B6A417BF402870705");
