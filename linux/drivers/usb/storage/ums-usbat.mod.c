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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x23595bb2, "usb_stor_set_xfer_buf" },
	{ 0xc592b0ac, "usb_stor_access_xfer_buf" },
	{ 0x1c4c887c, "usb_stor_post_reset" },
	{ 0x62da0efe, "usb_stor_disconnect" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc79c8bc2, "usb_stor_probe2" },
	{ 0x3725ae41, "fill_inquiry_response" },
	{ 0x61d7ecfd, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbbe75690, "usb_stor_pre_reset" },
	{ 0x7f789d8b, "usb_stor_reset_resume" },
	{ 0x4d1b3447, "usb_stor_ctrl_transfer" },
	{ 0xfef1c845, "usb_stor_suspend" },
	{ 0xb4872e62, "usb_stor_CB_reset" },
	{ 0xa4df73af, "usb_stor_clear_halt" },
	{ 0x43da32f5, "usb_stor_probe1" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x95e2e8db, "usb_stor_resume" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x5cc0979b, "usb_stor_bulk_transfer_sg" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v03F0p0207d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0307d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0005d0005dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "25B0CFBE94AEA955D90D48F");
