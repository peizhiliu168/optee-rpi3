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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x23595bb2, "usb_stor_set_xfer_buf" },
	{ 0xa87ad5e8, "usb_stor_bulk_transfer_buf" },
	{ 0xc592b0ac, "usb_stor_access_xfer_buf" },
	{ 0x1c4c887c, "usb_stor_post_reset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x62da0efe, "usb_stor_disconnect" },
	{ 0xdcb764ad, "memset" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xc79c8bc2, "usb_stor_probe2" },
	{ 0x3725ae41, "fill_inquiry_response" },
	{ 0x61d7ecfd, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbbe75690, "usb_stor_pre_reset" },
	{ 0x7f789d8b, "usb_stor_reset_resume" },
	{ 0xfef1c845, "usb_stor_suspend" },
	{ 0x43da32f5, "usb_stor_probe1" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x95e2e8db, "usb_stor_resume" },
	{ 0x65853570, "usb_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07C4pA103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C4pA109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C0BpA109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v55AApA103d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "377CBC52D4043E021CB1B60");
