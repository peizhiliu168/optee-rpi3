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
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x1f90f2a0, "snd_tea575x_set_freq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x406e48b2, "snd_tea575x_exit" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0xcff0815d, "snd_tea575x_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5805e4d6, "v4l2_device_set_name" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfd8505d2, "usb_interrupt_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "tea575x,videodev");

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "A2D17FB56137A7A22C79EDC");
