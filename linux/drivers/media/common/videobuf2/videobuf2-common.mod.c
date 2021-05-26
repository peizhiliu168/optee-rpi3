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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x2f299dff, "dma_buf_fd" },
	{ 0x720c2f6c, "media_request_object_bind" },
	{ 0x88c477cb, "dma_buf_put" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0xf39b7dcb, "dma_buf_get" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6f07f342, "media_request_put" },
	{ 0xe13cc791, "v4l_vb2q_enable_media_source" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9fe2a96, "media_request_object_put" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x87549229, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xea37c028, "media_request_object_unbind" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x730855d0, "media_request_object_init" },
};

MODULE_INFO(depends, "mc,videodev");


MODULE_INFO(srcversion, "5E1EFE2B43950F375F3195B");
