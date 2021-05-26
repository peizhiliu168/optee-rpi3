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
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xae0162e7, "put_tty_driver" },
	{ 0xc5ba782a, "tty_unregister_driver" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x99084a5f, "tty_register_driver" },
	{ 0x2441b780, "tty_set_operations" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x68acdcaa, "__tty_alloc_driver" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x45ce904, "tty_port_register_device_attr" },
	{ 0x41faacbe, "tty_port_init" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x677e804a, "tty_unregister_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeee3b1bd, "tty_port_tty_hangup" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb555309c, "tty_kref_put" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x6b912fd1, "tty_insert_flip_string_fixed_flag" },
	{ 0x60ed6fc2, "tty_buffer_request_room" },
	{ 0xa2403464, "tty_port_tty_get" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xe0b63eab, "tty_encode_baud_rate" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0x48daa338, "rfkill_alloc" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x57622d66, "tty_port_tty_wakeup" },
	{ 0xdcb764ad, "memset" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x96382a4a, "tty_port_tty_set" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xf7ea90d7, "tty_port_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x6561ba51, "usb_queue_reset_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "rfkill");

MODULE_ALIAS("usb:v0AF0p6711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6731d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6751d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6771d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6791d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6911d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p6971d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7381d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p7A05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p8900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0p9200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD255d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD157d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pD058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AF0pC100d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EF27B5743731D8328106FF0");
