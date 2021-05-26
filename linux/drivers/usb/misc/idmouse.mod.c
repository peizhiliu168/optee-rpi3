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
	{ 0x3b52e4ee, "default_llseek" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x3181ac50, "usb_register_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xf91bd801, "usb_deregister_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8021c692, "usb_find_interface" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0681p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "225562C37DF1789E24C4328");
