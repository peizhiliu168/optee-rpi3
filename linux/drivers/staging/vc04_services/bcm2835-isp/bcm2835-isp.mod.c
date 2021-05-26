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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x3d7025f7, "vb2_ioctl_reqbufs" },
	{ 0x89772b3c, "vchiq_mmal_port_set_format" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0x54abb221, "vchiq_mmal_port_disable" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x79ca02c, "media_device_unregister_entity" },
	{ 0xeee36f1d, "media_devnode_create" },
	{ 0xe4545c7d, "vchiq_mmal_port_parameter_set" },
	{ 0x1da45b6c, "vb2_wait_for_all_buffers" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdd66d10c, "media_remove_intf_links" },
	{ 0x69bd79c, "vchiq_mmal_component_finalise" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0xb9d88b15, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x9bde7c27, "vc_sm_cma_import_dmabuf" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x88c477cb, "dma_buf_put" },
	{ 0xf39b7dcb, "dma_buf_get" },
	{ 0x6b333f4a, "vchiq_mmal_component_enable" },
	{ 0x9d889a25, "vb2_ioctl_prepare_buf" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0x92ff3e4b, "vb2_ioctl_create_bufs" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x932e23e9, "media_device_cleanup" },
	{ 0x68366d32, "media_device_register_entity" },
	{ 0x530f3dee, "vchiq_mmal_component_init" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x188ba6eb, "vchiq_mmal_component_disable" },
	{ 0x13e92610, "mmal_vchi_buffer_init" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xb9a388a2, "media_create_pad_link" },
	{ 0x75543d96, "media_entity_remove_links" },
	{ 0x2ea7769b, "media_create_intf_link" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0xad3d0ede, "vchiq_mmal_port_enable" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0xd9d444b9, "__media_device_register" },
	{ 0x53b52981, "vc_sm_cma_free" },
	{ 0xaa4bcdfc, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b156883, "vchiq_mmal_submit_buffer" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb7af7d1, "media_device_init" },
	{ 0x2f0037d5, "vb2_ioctl_expbuf" },
	{ 0x5bc60238, "mmal_vchi_buffer_cleanup" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xf626feb5, "vb2_queue_release" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6fa2a386, "vc_sm_cma_int_handle" },
	{ 0x9fd65ad8, "media_device_unregister" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x4b396dec, "vb2_core_expbuf_dmabuf" },
	{ 0x587c955a, "media_devnode_remove" },
	{ 0x3b2ccf95, "vchiq_mmal_port_parameter_get" },
	{ 0xd4e37409, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,mc,videobuf2-common,vc-sm-cma,videobuf2-dma-contig");


MODULE_INFO(srcversion, "A6FF47E29D2E10C4004D441");
