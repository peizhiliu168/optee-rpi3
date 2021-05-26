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
	{ 0x3d7025f7, "vb2_ioctl_reqbufs" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x3ea4f9b2, "v4l2_ctrl_cluster" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0xb3622408, "usb_altnum_to_altsetting" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb2651b71, "v4l2_ctrl_log_status" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x5ff02136, "dma_direct_sync_single_for_cpu" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0xf51135cb, "input_event" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0x81ade87, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x9d63b9a2, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0xd9171401, "dma_direct_unmap_page" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x87fb9360, "v4l2_ctrl_auto_cluster" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x87549229, "event_triggers_call" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xb4923b80, "dma_direct_sync_single_for_device" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0xd4e37409, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "48F758331FE886F4246CE30");
