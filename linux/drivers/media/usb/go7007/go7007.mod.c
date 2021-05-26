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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xe6f8b20e, "v4l2_event_queue" },
	{ 0xb2651b71, "v4l2_ctrl_log_status" },
	{ 0x67fa2d43, "snd_pcm_period_elapsed" },
	{ 0x69c8e36a, "v4l2_subdev_call_wrappers" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xef07db17, "v4l2_ctrl_g_ctrl" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xee3a52f8, "snd_card_disconnect" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xdcb764ad, "memset" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0xf46b3315, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0xb9d88b15, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x684e4dae, "snd_pcm_set_ops" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x38dc0293, "snd_card_free_when_closed" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0x7a44bc6f, "snd_pcm_lib_ioctl" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0xc9a66e0f, "__v4l2_ctrl_grab" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0x1c4864d1, "v4l2_i2c_new_subdev_board" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0xde3a8302, "snd_pcm_new" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xab75123b, "vmalloc_to_page" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0xd4e37409, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,snd-pcm,snd,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "CAB68B3B1765DEE024C60DA");
