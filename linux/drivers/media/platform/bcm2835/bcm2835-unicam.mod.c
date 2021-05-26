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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0x9d889a25, "vb2_ioctl_prepare_buf" },
	{ 0x92ff3e4b, "vb2_ioctl_create_bufs" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0x2f0037d5, "vb2_ioctl_expbuf" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0x3d7025f7, "vb2_ioctl_reqbufs" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xd87fd63e, "__v4l2_device_register_subdev_nodes" },
	{ 0x1efb98c8, "v4l2_subdev_alloc_pad_config" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb9a388a2, "media_create_pad_link" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xcd3be9f4, "dma_alloc_attrs" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0xd4e37409, "vb2_queue_init" },
	{ 0xaa4bcdfc, "vb2_dma_contig_memops" },
	{ 0x6c4916a0, "v4l2_ctrl_add_handler" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x75b0ce72, "vb2_plane_cookie" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x25379e73, "clk_set_min_rate" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb9d88b15, "v4l2_event_subscribe" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0xded99c04, "of_node_put" },
	{ 0x12afdbab, "v4l2_async_notifier_register" },
	{ 0x2632ac91, "v4l2_async_notifier_add_subdev" },
	{ 0xc006bc06, "v4l2_async_notifier_init" },
	{ 0x83e42aab, "v4l2_fwnode_endpoint_parse" },
	{ 0x467811fe, "of_graph_get_remote_port_parent" },
	{ 0x3729fb45, "of_graph_get_next_endpoint" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xd9d444b9, "__media_device_register" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xeb7af7d1, "media_device_init" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0xe58cb6ec, "platform_get_irq" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x84f4659b, "devm_platform_ioremap_resource" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x50d65b11, "v4l2_subdev_free_pad_config" },
	{ 0x932e23e9, "media_device_cleanup" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xa0e69d6f, "v4l2_fh_release" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8b96113c, "_vb2_fop_release" },
	{ 0x7ff2e31d, "v4l2_fh_is_singular" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x21166b6, "v4l2_g_parm_cap" },
	{ 0xb2115ee1, "v4l2_s_parm_cap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xe6f8b20e, "v4l2_event_queue" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x9fd65ad8, "media_device_unregister" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x3f7bed98, "v4l2_async_notifier_unregister" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0xbf34e288, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69c8e36a, "v4l2_subdev_call_wrappers" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,videobuf2-v4l2,mc,videobuf2-dma-contig,videobuf2-common,v4l2-fwnode,v4l2-dv-timings");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicam");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-unicamC*");

MODULE_INFO(srcversion, "FE3BFBA10797FB387DC7442");
