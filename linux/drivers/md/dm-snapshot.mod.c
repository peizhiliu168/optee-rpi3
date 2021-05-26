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
	{ 0xa24f23d8, "__request_module" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xcbe65dd9, "dm_bio_get_target_bio_nr" },
	{ 0xcd2ba798, "dm_bufio_forget" },
	{ 0x53b954a2, "up_read" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6b84e4b9, "dm_get_device" },
	{ 0x8ea94f74, "dm_io" },
	{ 0xfc14bb2e, "dm_get_dev_t" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xc420f57c, "dm_table_get_md" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x72f07bf4, "dm_bufio_set_minimum_buffers" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0xc79bcd36, "dm_vcalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xae6e97a0, "dm_register_target" },
	{ 0x4e453f8, "dm_kcopyd_copy" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x70b212eb, "dm_put" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xa378aa0e, "dm_internal_suspend_fast" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xdcb764ad, "memset" },
	{ 0x173a39ce, "dm_kcopyd_zero" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x86f10755, "dm_set_target_max_io_len" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x3faf14ed, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9d1c695b, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xacc0ebb5, "dm_suspended" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x809fca8e, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x171e1d31, "bio_endio" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x5bee7acd, "module_put" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x6a69e72e, "dm_accept_partial_bio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x7880c781, "dm_kcopyd_prepare_callback" },
	{ 0x37a0cba, "kfree" },
	{ 0x85c61c80, "dm_hold" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x2473f47e, "dm_table_get_size" },
	{ 0xca9360b5, "rb_next" },
	{ 0x59a3a71e, "dm_put_device" },
	{ 0x81b6edbb, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b5fd49e, "dm_kcopyd_do_callback" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x155b3c05, "dm_internal_resume_fast" },
	{ 0x1033a7a0, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod,dm-bufio");


MODULE_INFO(srcversion, "D9C9AF795178B12182B9350");
