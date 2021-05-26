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
	{ 0xc1e6a70c, "vb2_core_streamoff" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x5e1cd6c2, "vb2_core_dqbuf" },
	{ 0x887494f, "vb2_mmap" },
	{ 0xecac1d4b, "vb2_core_qbuf" },
	{ 0xae2cd066, "vb2_core_querybuf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2a1451c6, "vb2_core_streamon" },
	{ 0x6f796647, "vb2_core_poll" },
	{ 0x5426a39c, "vb2_read" },
	{ 0x80eb7e13, "vb2_core_prepare_buf" },
	{ 0xdcb764ad, "memset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xc3933ab6, "v4l2_event_pending" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa0e69d6f, "v4l2_fh_release" },
	{ 0x6f07f342, "media_request_put" },
	{ 0xaad45394, "vb2_core_queue_release" },
	{ 0xcfd5ed23, "vb2_request_buffer_cnt" },
	{ 0xfbcd23d1, "vb2_write" },
	{ 0x236e26f9, "media_request_get_by_fd" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc37b0933, "vb2_core_create_bufs" },
	{ 0xee6fb810, "vb2_core_expbuf" },
	{ 0x35743298, "vb2_core_reqbufs" },
	{ 0x4b2a0d61, "vb2_verify_memory_type" },
	{ 0xaf2a85f5, "vb2_core_queue_init" },
	{ 0xd903f893, "vb2_buffer_in_use" },
	{ 0x2f548802, "ns_to_timeval" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "AE1BE83CC323581F28910A4");
