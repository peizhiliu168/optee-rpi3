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
	{ 0xc9eeb2fa, "i2400m_cmd_enter_powersave" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd191bb03, "i2400m_dev_reset_handle" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x5189409c, "debugfs_create_u8" },
	{ 0x27f006ff, "usb_init_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x9f2604e2, "i2400m_tx_msg_get" },
	{ 0x842ac487, "i2400m_rx" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x85df9b6c, "strsep" },
	{ 0x234efd3a, "usb_enable_autosuspend" },
	{ 0xbf35235d, "usb_get_urb" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x63a22796, "param_ops_string" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6fcd518, "i2400m_setup" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd073d5ee, "i2400m_is_boot_barker" },
	{ 0xab2b3d, "i2400m_post_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x8dc5a3b9, "debugfs_create_size_t" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf24c4c4, "i2400m_netdev_setup" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x863b72af, "i2400m_unknown_barker" },
	{ 0x9a3dee1e, "i2400m_pre_reset" },
	{ 0x6561ba51, "usb_queue_reset_device" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb00b793c, "i2400m_bm_cmd_prepare" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd082a2c9, "i2400m_release" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x95c5f042, "i2400m_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2e60ca36, "pm_runtime_set_autosuspend_delay" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd30c43d1, "i2400m_tx_msg_sent" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "i2400m");

MODULE_ALIAS("usb:v8086p0186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8087p07D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0181d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1405d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0182d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1406d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1403d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0234F85B691422B922C97D2");
