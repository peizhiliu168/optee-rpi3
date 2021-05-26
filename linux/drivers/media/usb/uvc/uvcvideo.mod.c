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
	{ 0xe0681857, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x130d50fe, "v4l2_event_queue_fh" },
	{ 0x98cf60b3, "strlen" },
	{ 0x887494f, "vb2_mmap" },
	{ 0x58c9b12f, "usb_debug_root" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x39c54e75, "vb2_create_bufs" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x234efd3a, "usb_enable_autosuspend" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x1b5c0864, "v4l2_ctrl_merge" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xf51135cb, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdcb764ad, "memset" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0x81ade87, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xb9d88b15, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xd8e8bd1e, "v4l2_fh_init" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xafdd2ec7, "usb_poison_urb" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xdd9970ad, "usb_driver_claim_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7b09d1b0, "vb2_qbuf" },
	{ 0x9d889a25, "vb2_ioctl_prepare_buf" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x92ff3e4b, "vb2_ioctl_create_bufs" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x19136db7, "vb2_querybuf" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x932e23e9, "media_device_cleanup" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x4b77c88d, "v4l2_ctrl_replace" },
	{ 0x3100b194, "vb2_streamon" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49566ad6, "vb2_expbuf" },
	{ 0x84a68123, "input_register_device" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0xa3a4578, "v4l2_device_register_subdev" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xb9a388a2, "media_create_pad_link" },
	{ 0x9fe0a98f, "vb2_reqbufs" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x91221da3, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0xf955c66a, "v4l2_subdev_init" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0xd9d444b9, "__media_device_register" },
	{ 0x2b792ff7, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0xec44c86f, "usb_match_one_id" },
	{ 0x96848186, "scnprintf" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0x16d83ec2, "v4l2_fh_add" },
	{ 0xd2ffa7b4, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4ff1bf8e, "vb2_poll" },
	{ 0xeb7af7d1, "media_device_init" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa86da832, "usb_get_current_frame_number" },
	{ 0x28b12cc9, "v4l2_format_info" },
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0xf626feb5, "vb2_queue_release" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe40b3709, "vb2_streamoff" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fd65ad8, "media_device_unregister" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x93dbddd9, "usb_put_intf" },
	{ 0xeb9b614a, "v4l2_fh_exit" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0xd4e37409, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc,mc");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "989D8E515BF6041C12EE9A5");
