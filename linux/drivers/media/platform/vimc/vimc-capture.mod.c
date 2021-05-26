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
	{ 0x4ada82fb, "vb2_ioctl_streamoff" },
	{ 0x2874274d, "vb2_ioctl_streamon" },
	{ 0x9d889a25, "vb2_ioctl_prepare_buf" },
	{ 0x92ff3e4b, "vb2_ioctl_create_bufs" },
	{ 0x2bbc8016, "vb2_ioctl_dqbuf" },
	{ 0x2f0037d5, "vb2_ioctl_expbuf" },
	{ 0x8cf5e603, "vb2_ioctl_qbuf" },
	{ 0x85862abe, "vb2_ioctl_querybuf" },
	{ 0x3d7025f7, "vb2_ioctl_reqbufs" },
	{ 0x377ff669, "vb2_fop_release" },
	{ 0x9fe93a64, "v4l2_fh_open" },
	{ 0x83ffbb37, "vb2_fop_mmap" },
	{ 0x4517c6c, "video_ioctl2" },
	{ 0xc2f711db, "vb2_fop_poll" },
	{ 0x7e2ab67, "vb2_fop_read" },
	{ 0x1e074039, "vimc_link_validate" },
	{ 0xa0b87d25, "vb2_ops_wait_finish" },
	{ 0xc4110d76, "vb2_ops_wait_prepare" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x4526606c, "component_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xd4e37409, "vb2_queue_init" },
	{ 0x4997dad7, "vb2_vmalloc_memops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x80fead7, "vimc_pads_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x19390695, "media_pipeline_start" },
	{ 0xc36cba2e, "media_pipeline_stop" },
	{ 0xcd2fd655, "vimc_streamer_s_stream" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3636a592, "vb2_plane_vaddr" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xcfe2c150, "vimc_pix_map_by_index" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xf541e79b, "vimc_pix_map_by_code" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f919ddf, "vimc_pix_map_by_pixelformat" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0xf626feb5, "vb2_queue_release" },
	{ 0x89f115ee, "component_del" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,vimc,videobuf2-vmalloc,mc,videobuf2-common");

MODULE_ALIAS("platform:vimc-capture");

MODULE_INFO(srcversion, "31DF6D22812B6D90D7C9452");
