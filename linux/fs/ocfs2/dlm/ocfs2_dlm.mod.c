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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xdf88fee7, "o2nm_node_put" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x4ee803fb, "o2hb_unregister_callback" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x58c88ff2, "o2hb_get_all_regions" },
	{ 0xcc7c8898, "o2hb_register_callback" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdd0d8bc0, "seq_release_private" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x696fa2fa, "o2net_register_handler" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xf982e6db, "o2net_send_message" },
	{ 0xf1a5611d, "o2net_unregister_handler_list" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x5e95a4b2, "o2net_send_message_vec" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x457a3d90, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xcf4fdd4d, "_atomic_dec_and_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd76a876f, "__seq_open_private" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x1b572e30, "debugfs_remove" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x70898d37, "o2hb_setup_callback" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa02aa74a, "__cond_resched_lock" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x439f892d, "o2nm_get_node_by_num" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xbd13ee5d, "o2hb_check_node_heartbeating_no_sem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "ocfs2_nodemanager");


MODULE_INFO(srcversion, "23A526815E08B3CA1FB0476");
