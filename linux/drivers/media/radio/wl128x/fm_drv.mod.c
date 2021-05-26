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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xebaf8681, "video_device_release_empty" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8e5116c1, "__video_register_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3796c585, "v4l2_ctrl_new_std_menu" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x6af6fc66, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc975d319, "st_register" },
	{ 0x69de0ba8, "param_ops_byte" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xd445ada7, "st_unregister" },
	{ 0x29361773, "complete" },
	{ 0x99cfb896, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x4517c6c, "video_ioctl2" },
};

MODULE_INFO(depends, "videodev,st_drv");


MODULE_INFO(srcversion, "5F112ADDD5CDCEDA078EB37");
