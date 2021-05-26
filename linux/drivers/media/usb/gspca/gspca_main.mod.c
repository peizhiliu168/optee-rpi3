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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xef07db17, "v4l2_ctrl_g_ctrl" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xddd98de9, "v4l2_ctrl_subscribe_event" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92ff3e4b, "vb2_ioctl_create_bufs" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0x77911767, "__v4l2_ctrl_s_ctrl" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0xae996fe1, "vb2_queue_error" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2f0037d5, "vb2_ioctl_expbuf" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0xd4e37409, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-vmalloc,videobuf2-common");


MODULE_INFO(srcversion, "622BE485A3666FE37396CA5");
