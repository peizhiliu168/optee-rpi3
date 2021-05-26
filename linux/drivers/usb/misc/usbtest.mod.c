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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x669fe96d, "param_ops_ushort" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xb856306, "usb_get_descriptor" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xe972806c, "usb_get_status" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x11b148d0, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x904aab40, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xac001c60, "usb_sg_cancel" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E74A530596F7B48338B2CBC");
