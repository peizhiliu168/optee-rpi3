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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1c4c887c, "usb_stor_post_reset" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x62da0efe, "usb_stor_disconnect" },
	{ 0xf51135cb, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc79c8bc2, "usb_stor_probe2" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x61d7ecfd, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0xbbe75690, "usb_stor_pre_reset" },
	{ 0x7f789d8b, "usb_stor_reset_resume" },
	{ 0xfef1c845, "usb_stor_suspend" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x43da32f5, "usb_stor_probe1" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x95e2e8db, "usb_stor_resume" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "AA1C72B24A7B99DC1A5153D");
