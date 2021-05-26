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
	{ 0x63c1180f, "param_ops_charp" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x84a68123, "input_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xf51135cb, "input_event" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0D8Cp000Ed*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "FA94BEBD277D19723113165");
