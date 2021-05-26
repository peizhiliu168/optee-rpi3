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
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd5f1de89, "input_ff_destroy" },
	{ 0x5d295fe8, "led_set_brightness" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x84a68123, "input_register_device" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x768e4443, "input_ff_create_memless" },
	{ 0x634e201b, "input_set_capability" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0xf51135cb, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic58isc42ip00in*");
MODULE_ALIAS("usb:v0079p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0079p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v056Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v056Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v06A3p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v06A3p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p4540d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v07FFp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v07FFp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v1038p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1038p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v11C9p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v11C9p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1209p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1209p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc47ipD0in*");

MODULE_INFO(srcversion, "220C3F00E22DC3F518E4E67");
