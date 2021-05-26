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
	{ 0xfc32ca6, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x89772b3c, "vchiq_mmal_port_set_format" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0x54abb221, "vchiq_mmal_port_disable" },
	{ 0x75dfec35, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x78fcdc26, "v4l2_m2m_register_media_controller" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x130d50fe, "v4l2_event_queue_fh" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x6f660515, "v4l2_m2m_ctx_init" },
	{ 0xe4545c7d, "vchiq_mmal_port_parameter_set" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1ef99b8, "v4l2_m2m_fop_mmap" },
	{ 0xdd64e639, "strscpy" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x9489c636, "v4l2_m2m_ioctl_streamon" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0xec8b0b12, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x69bd79c, "vchiq_mmal_component_finalise" },
	{ 0xdcb764ad, "memset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xb9d88b15, "v4l2_event_subscribe" },
	{ 0x8db1d7ae, "v4l2_m2m_ioctl_streamoff" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x423481b, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xd8e8bd1e, "v4l2_fh_init" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x88c477cb, "dma_buf_put" },
	{ 0x9166fada, "strncpy" },
	{ 0xf39b7dcb, "dma_buf_get" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x6b333f4a, "vchiq_mmal_component_enable" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x932e23e9, "media_device_cleanup" },
	{ 0xa7934c59, "v4l2_m2m_get_vq" },
	{ 0x530f3dee, "vchiq_mmal_component_init" },
	{ 0xe3ce73f9, "v4l2_ctrl_find" },
	{ 0x3160cb7b, "v4l2_m2m_ioctl_qbuf" },
	{ 0xdbe3f8b9, "v4l2_m2m_fop_poll" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab103d87, "v4l2_m2m_buf_queue" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x188ba6eb, "vchiq_mmal_component_disable" },
	{ 0xa27ec610, "v4l2_m2m_ioctl_querybuf" },
	{ 0x13e92610, "mmal_vchi_buffer_init" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x8685caeb, "v4l2_m2m_ioctl_expbuf" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xad3d0ede, "vchiq_mmal_port_enable" },
	{ 0xd9d444b9, "__media_device_register" },
	{ 0xaa4bcdfc, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b156883, "vchiq_mmal_submit_buffer" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x3fb9dce5, "v4l2_src_change_event_subscribe" },
	{ 0x8d053d11, "v4l2_m2m_buf_remove" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x16d83ec2, "v4l2_fh_add" },
	{ 0xd0158c7b, "v4l2_m2m_ctx_release" },
	{ 0xd2ffa7b4, "v4l2_fh_del" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb7af7d1, "media_device_init" },
	{ 0x5bc60238, "mmal_vchi_buffer_cleanup" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9fd65ad8, "media_device_unregister" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x4b396dec, "vb2_core_expbuf_dmabuf" },
	{ 0x29d88a8c, "v4l2_m2m_job_finish" },
	{ 0x3b2ccf95, "vchiq_mmal_port_parameter_get" },
	{ 0xeb9b614a, "v4l2_fh_exit" },
	{ 0xd4e37409, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,bcm2835-mmal-vchiq,videodev,videobuf2-v4l2,videobuf2-common,mc,videobuf2-dma-contig");


MODULE_INFO(srcversion, "C66A4F67336DE151FBA9FB2");
