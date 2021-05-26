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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0xedc86eeb, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0xf924e08a, "tty_unlock" },
	{ 0x229b628d, "start_tty" },
	{ 0x349cba85, "strchr" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x44b9814d, "screen_pos" },
	{ 0xf6cd9d8a, "tty_set_ldisc" },
	{ 0x7973a915, "set_selection_kernel" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x38374815, "clear_selection" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x96554810, "register_keyboard_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x55417264, "unregister_vt_notifier" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x556b7f4f, "kobject_create_and_add" },
	{ 0x4f31be8, "vc_cons" },
	{ 0x22b325d5, "kd_mksound" },
	{ 0xc631580a, "console_unlock" },
	{ 0xf51135cb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xb25e26d9, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb11d9000, "tty_dev_name_to_number" },
	{ 0xdcb764ad, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9ed554b3, "unregister_keyboard_notifier" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x21b00716, "tty_ldisc_flush" },
	{ 0x9166fada, "strncpy" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x64bbc288, "string_unescape" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xa61030bb, "stop_tty" },
	{ 0xce2252e9, "tty_write_room" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x58538fa, "tty_kopen" },
	{ 0xb1aec43a, "tty_kclose" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0x87a39647, "set_user_nice" },
	{ 0x96848186, "scnprintf" },
	{ 0xb555309c, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xea63a8d4, "inverse_translate" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x58b582a, "vt_get_leds" },
	{ 0x29361773, "complete" },
	{ 0x683cce8a, "tty_schedule_flip" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x23159f18, "tty_register_ldisc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x25f70e91, "misc_deregister" },
	{ 0x13110126, "request_resource" },
	{ 0x803014e6, "tty_lock" },
	{ 0xbf041102, "register_vt_notifier" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3104b461, "tty_set_termios" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc6874915, "paste_selection" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8DAF0617D2258E11904086C");
