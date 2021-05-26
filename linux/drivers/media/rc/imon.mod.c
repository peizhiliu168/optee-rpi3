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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x494547e3, "rc_free_device" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x3181ac50, "usb_register_dev" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0xbe57027c, "rc_register_device" },
	{ 0x562e4fb1, "rc_allocate_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x84a68123, "input_register_device" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x29ed58ba, "rc_keyup" },
	{ 0x38eeb66b, "rc_keydown" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf51135cb, "input_event" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x61fc71a0, "rc_unregister_device" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8021c692, "usb_find_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x29361773, "complete" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x6fa5f867, "rc_g_keycode_from_table" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc5850110, "printk" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F3B6BBB89337C1129902B18");
