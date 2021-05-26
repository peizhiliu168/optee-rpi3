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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x67fa2d43, "snd_pcm_period_elapsed" },
	{ 0xd041387, "_snd_pcm_stream_lock_irqsave" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x684e4dae, "snd_pcm_set_ops" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x30a598e3, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x9d889a25, "vb2_ioctl_prepare_buf" },
	{ 0xf90af648, "snd_pcm_lib_free_pages" },
	{ 0x7a44bc6f, "snd_pcm_lib_ioctl" },
	{ 0x92ff3e4b, "vb2_ioctl_create_bufs" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0xb664269a, "snd_pcm_lib_malloc_pages" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0x10290b70, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xde3a8302, "snd_pcm_new" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0xf626feb5, "vb2_queue_release" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xd4e37409, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,videobuf2-vmalloc,videobuf2-common,snd");

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3306d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1D0742B56C94B6D8812F2D8");
