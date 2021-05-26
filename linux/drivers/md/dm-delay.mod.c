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
	{ 0x3faf14ed, "dm_unregister_target" },
	{ 0xae6e97a0, "dm_register_target" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1033a7a0, "bio_associate_blkg" },
	{ 0x81b6edbb, "dm_per_bio_data" },
	{ 0xc5850110, "printk" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b84e4b9, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x59a3a71e, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x809fca8e, "generic_make_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1a6b5ee4, "dm_bio_from_per_bio_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x96848186, "scnprintf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "A239C0131B654EB7DED1C54");
