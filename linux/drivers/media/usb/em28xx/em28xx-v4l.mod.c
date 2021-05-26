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
	{ 0x24ad04cd, "em28xx_read_reg" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x79ca02c, "media_device_unregister_entity" },
	{ 0x3688aa3d, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0xa530a8dd, "em28xx_write_regs" },
	{ 0x23146d9, "v4l2_ctrl_notify" },
	{ 0xe69a0156, "em28xx_setup_xc3028" },
	{ 0xe64f444f, "dev_printk" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x8a3d92fb, "v4l2_mc_create_media_graph" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x5512298c, "em28xx_init_usb_xfer" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x22fea119, "em28xx_register_extension" },
	{ 0xdd64e639, "strscpy" },
	{ 0x65f6b76a, "media_entity_setup_link" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x99c64a74, "em28xx_unregister_extension" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9d889a25, "vb2_ioctl_prepare_buf" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xbdc35ac1, "em28xx_uninit_usb_xfer" },
	{ 0x92ff3e4b, "vb2_ioctl_create_bufs" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0x68366d32, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xe3ce73f9, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36d34e5, "em28xx_audio_setup" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x94976c65, "v4l2_i2c_subdev_addr" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0xefde68f3, "em28xx_set_mode" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0xa853f5fe, "em28xx_stop_urbs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdcfd406a, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xdbba0ea, "em28xx_audio_analog_set" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0xe04f07b9, "em28xx_init_camera" },
	{ 0xd4e37409, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,em28xx,videodev,mc,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "68717C4A9D9A1C081FF8F20");
