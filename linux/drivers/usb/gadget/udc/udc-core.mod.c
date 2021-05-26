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
	{ 0x4011a3e6, "dma_direct_unmap_sg" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x4de17ab3, "usb_state_string" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a85771a, "bpf_trace_run3" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0xdcb764ad, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x4830eca5, "device_del" },
	{ 0xc5850110, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0x9d63b9a2, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x31faa7fb, "device_add" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd9171401, "dma_direct_unmap_page" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcee111f, "sysfs_notify" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x87549229, "event_triggers_call" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8cec48c, "dma_direct_map_sg" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0x9f696742, "device_initialize" },
	{ 0x96848186, "scnprintf" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x9a775031, "__class_create" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2B89CB2C652BAEC5CF8896F");
