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
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9ab16bb6, "w1_add_master_device" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x6f0fd09c, "usb_reset_configuration" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfd8505d2, "usb_interrupt_msg" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x3f6d5174, "w1_remove_master_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("usb:v04FAp2490d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A3927E6B35857A1B5A7AA39");
