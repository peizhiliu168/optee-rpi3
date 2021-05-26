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
	{ 0xf7acc44b, "input_free_device" },
	{ 0x84a68123, "input_register_device" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0xdd9970ad, "usb_driver_claim_interface" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf51135cb, "input_event" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0471p0602d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1A4FEE5178C8F348C403F42");
