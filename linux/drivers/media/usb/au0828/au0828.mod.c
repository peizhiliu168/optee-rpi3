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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0x34dec82f, "media_device_usb_allocate" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc7103ef5, "__media_pipeline_start" },
	{ 0x1d19546f, "media_device_unregister_entity_notify" },
	{ 0x8b96113c, "_vb2_fop_release" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd2078c73, "dvb_unregister_adapter" },
	{ 0x79ca02c, "media_device_unregister_entity" },
	{ 0x3688aa3d, "v4l2_i2c_new_subdev" },
	{ 0xe1e53a8c, "dvb_create_media_graph" },
	{ 0xb2651b71, "v4l2_ctrl_log_status" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0xcb31ecd7, "dvb_frontend_suspend" },
	{ 0xfbc250fe, "dvb_register_frontend" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x495e0737, "dvb_frontend_resume" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x8a3d92fb, "v4l2_mc_create_media_graph" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x75c9a499, "v4l_disable_media_source" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x3bb031d5, "media_device_delete" },
	{ 0xb93f6cee, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x65f6b76a, "media_entity_setup_link" },
	{ 0xa358de20, "media_get_pad_index" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x358c88a8, "dvb_net_release" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x8f68bcf, "dvb_frontend_detach" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x1581dd4c, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0xe27258a7, "dvb_net_init" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9d889a25, "vb2_ioctl_prepare_buf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9da5cefe, "tveeprom_read" },
	{ 0x92ff3e4b, "vb2_ioctl_create_bufs" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x94f948ce, "v4l_enable_media_source" },
	{ 0x68366d32, "media_device_register_entity" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x9d7febfb, "media_device_register_entity_notify" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x91c68426, "__media_pipeline_stop" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xb9a388a2, "media_create_pad_link" },
	{ 0x7f677d33, "dvb_register_adapter" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0xd9d444b9, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dfe34dc, "__media_entity_setup_link" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2f0037d5, "vb2_ioctl_expbuf" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0xf626feb5, "vb2_queue_release" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe75e4602, "dvb_dmxdev_init" },
	{ 0xd4e37409, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,dvb-core,tveeprom,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9693D097F56F94C07EF0D0C");
