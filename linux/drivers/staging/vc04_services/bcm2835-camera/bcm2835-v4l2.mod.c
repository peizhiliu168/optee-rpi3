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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xb2651b71, "v4l2_ctrl_log_status" },
	{ 0xe4545c7d, "vchiq_mmal_port_parameter_set" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0x69bd79c, "vchiq_mmal_component_finalise" },
	{ 0xdcb764ad, "memset" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8176862b, "vchiq_mmal_port_connect_tunnel" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x6b333f4a, "vchiq_mmal_component_enable" },
	{ 0x9d889a25, "vb2_ioctl_prepare_buf" },
	{ 0x92ff3e4b, "vb2_ioctl_create_bufs" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0x73577d20, "vchiq_mmal_finalise" },
	{ 0x2c3f93ef, "v4l2_ctrl_new_int_menu" },
	{ 0x530f3dee, "vchiq_mmal_component_init" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x188ba6eb, "vchiq_mmal_component_disable" },
	{ 0x87fb9360, "v4l2_ctrl_auto_cluster" },
	{ 0x13e92610, "mmal_vchi_buffer_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0xad3d0ede, "vchiq_mmal_port_enable" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6192e1a2, "vchiq_mmal_version" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x9b156883, "vchiq_mmal_submit_buffer" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0xaca4dd80, "vchiq_mmal_init" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5bc60238, "mmal_vchi_buffer_cleanup" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x3b2ccf95, "vchiq_mmal_port_parameter_get" },
	{ 0xd4e37409, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,bcm2835-mmal-vchiq,videodev,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "67E6BBA016F68E8879555FE");
