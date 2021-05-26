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
	{ 0x4829a47e, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v086Ap0110d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0186AEE8A144A0A4D68EDB0");
