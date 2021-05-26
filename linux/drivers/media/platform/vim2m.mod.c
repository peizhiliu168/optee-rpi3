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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0xd610e8a, "v4l2_m2m_request_queue" },
	{ 0xd3228565, "vb2_request_validate" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x8db1d7ae, "v4l2_m2m_ioctl_streamoff" },
	{ 0x9489c636, "v4l2_m2m_ioctl_streamon" },
	{ 0xfc32ca6, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0xec8b0b12, "v4l2_m2m_ioctl_create_bufs" },
	{ 0x75dfec35, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x8685caeb, "v4l2_m2m_ioctl_expbuf" },
	{ 0x3160cb7b, "v4l2_m2m_ioctl_qbuf" },
	{ 0xa27ec610, "v4l2_m2m_ioctl_querybuf" },
	{ 0x423481b, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x1ef99b8, "v4l2_m2m_fop_mmap" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0xdbe3f8b9, "v4l2_m2m_fop_poll" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x6a0f681d, "platform_device_register" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0xd0158c7b, "v4l2_m2m_ctx_release" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd2ffa7b4, "v4l2_fh_del" },
	{ 0xeb9b614a, "v4l2_fh_exit" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x16d83ec2, "v4l2_fh_add" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6f660515, "v4l2_m2m_ctx_init" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xd8e8bd1e, "v4l2_fh_init" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0x29d88a8c, "v4l2_m2m_job_finish" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa9c00130, "v4l2_m2m_buf_copy_metadata" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x92c99592, "v4l2_ctrl_request_setup" },
	{ 0xb2f3c806, "v4l2_m2m_next_buf" },
	{ 0xd9d444b9, "__media_device_register" },
	{ 0x78fcdc26, "v4l2_m2m_register_media_controller" },
	{ 0xeb7af7d1, "media_device_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xdcb764ad, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x8d053d11, "v4l2_m2m_buf_remove" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xab103d87, "v4l2_m2m_buf_queue" },
	{ 0xd4e37409, "vb2_queue_init" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x932e23e9, "media_device_cleanup" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa7934c59, "v4l2_m2m_get_vq" },
	{ 0xff0f0daf, "v4l2_ctrl_request_complete" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0xf13ff84d, "v4l2_m2m_unregister_media_controller" },
	{ 0x9fd65ad8, "media_device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,videobuf2-common,mc,videobuf2-vmalloc");


MODULE_INFO(srcversion, "80BFC540E8A30572065D21C");
