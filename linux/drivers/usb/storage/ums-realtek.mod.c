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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa87ad5e8, "usb_stor_bulk_transfer_buf" },
	{ 0x1c4c887c, "usb_stor_post_reset" },
	{ 0x57133a2e, "usb_stor_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x234efd3a, "usb_enable_autosuspend" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x62da0efe, "usb_stor_disconnect" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xbefb941c, "usb_autopm_put_interface_async" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc79c8bc2, "usb_stor_probe2" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x61d7ecfd, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0xbbe75690, "usb_stor_pre_reset" },
	{ 0x7f789d8b, "usb_stor_reset_resume" },
	{ 0x43da32f5, "usb_stor_probe1" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x2e60ca36, "pm_runtime_set_autosuspend_delay" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0184d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B0E8F12EEAEFC82C7E2ECAA");
