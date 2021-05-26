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
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0xb2651b71, "v4l2_ctrl_log_status" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0x3d7025f7, "vb2_ioctl_reqbufs" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xd4e37409, "vb2_queue_init" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x77911767, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,videobuf2-v4l2,videobuf2-vmalloc,videobuf2-common");

MODULE_ALIAS("usb:v1943p2255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2257d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "08392B36EC425C6D4EDFAD1");
