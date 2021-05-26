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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x98cf60b3, "strlen" },
	{ 0x79ca02c, "media_device_unregister_entity" },
	{ 0x887494f, "vb2_mmap" },
	{ 0xeee36f1d, "media_devnode_create" },
	{ 0x39c54e75, "vb2_create_bufs" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdc3d70eb, "vb2_request_object_is_buffer" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdd66d10c, "media_remove_intf_links" },
	{ 0xba523f3f, "vb2_prepare_buf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0xc3933ab6, "v4l2_event_pending" },
	{ 0x1d15ec13, "vb2_buffer_done" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b09d1b0, "vb2_qbuf" },
	{ 0x19136db7, "vb2_querybuf" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x68366d32, "media_device_register_entity" },
	{ 0x3100b194, "vb2_streamon" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49566ad6, "vb2_expbuf" },
	{ 0x1000e51, "schedule" },
	{ 0xb9a388a2, "media_create_pad_link" },
	{ 0x9fe0a98f, "vb2_reqbufs" },
	{ 0x75543d96, "media_entity_remove_links" },
	{ 0x2ea7769b, "media_create_intf_link" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x2b792ff7, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf626feb5, "vb2_queue_release" },
	{ 0xe40b3709, "vb2_streamoff" },
	{ 0x587c955a, "media_devnode_remove" },
};

MODULE_INFO(depends, "mc,videobuf2-common,videobuf2-v4l2,videodev");


MODULE_INFO(srcversion, "3CC48B8B21E2CF8276E16D2");
