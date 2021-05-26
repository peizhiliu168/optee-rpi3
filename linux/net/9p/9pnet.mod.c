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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x1a97c6d9, "kernel_write" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xbc011301, "sock_release" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x44e9a829, "match_token" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x85df9b6c, "strsep" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x2a85771a, "bpf_trace_run3" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x854640bd, "kernel_read" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0xe02fa261, "from_kuid" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf09bcb10, "iov_iter_kvec" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0x50b8dc4e, "from_kgid" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x954f099c, "idr_preload" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf4ef1676, "kmem_cache_create_usercopy" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4e3567f7, "match_int" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4260eb07, "fput" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x5bee7acd, "module_put" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x82e473a6, "sock_alloc_file" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x87549229, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0xbdb8229c, "kernel_bind" },
	{ 0x111e7b23, "fget" },
	{ 0x6c337917, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xddab9ab2, "bpf_trace_run4" },
	{ 0xdcddd379, "_copy_to_iter" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x2ff46e99, "__sock_create" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "51F602CA4AAC777C1FFB416");
