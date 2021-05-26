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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6b523a2, "devres_alloc_node" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0xdded6c02, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0x8eab9994, "devres_add" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0xbdab8f94, "devres_destroy" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "73D290377644B985766841F");
