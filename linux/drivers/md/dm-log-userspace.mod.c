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
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xb6e542fd, "cn_add_callback" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6b84e4b9, "dm_get_device" },
	{ 0xa108e0f1, "dm_dirty_log_type_unregister" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xdcb764ad, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc05a435a, "dm_dirty_log_type_register" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x59a3a71e, "dm_put_device" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "cn,dm-mod,dm-log");


MODULE_INFO(srcversion, "AA8AA2F5EBDB27CDC5B8875");
