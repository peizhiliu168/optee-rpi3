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
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x393a770e, "videobuf_queue_vmalloc_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0xdcb764ad, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x715d19ef, "videobuf_read_one" },
	{ 0xba8aff74, "videobuf_streamon" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0x4f7ca22d, "videobuf_queue_is_busy" },
	{ 0xa0e69d6f, "v4l2_fh_release" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x57cd0739, "videobuf_mmap_mapper" },
	{ 0x413e09e1, "videobuf_iolock" },
	{ 0x589aca74, "videobuf_vmalloc_free" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x19eb8d3f, "videobuf_to_vmalloc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x999e8297, "vfree" },
	{ 0xf46bfe0b, "videobuf_mmap_free" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x6a856f14, "videobuf_poll_stream" },
	{ 0x207d5adb, "v4l2_ctrl_poll" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xe16fa625, "videobuf_reqbufs" },
	{ 0x6ff978ec, "videobuf_querybuf" },
	{ 0x364bfc, "videobuf_qbuf" },
	{ 0xd4ecc4e6, "videobuf_dqbuf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe383cd15, "videobuf_streamoff" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xc5850110, "printk" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,videobuf-vmalloc,videobuf-core");

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1DCA7653BF505EB69E8930");
