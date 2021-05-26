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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xe5137f8, "go7007_read_addr" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x61b716c2, "go7007_update_board" },
	{ 0x96b6ea44, "i2c_smbus_xfer" },
	{ 0x74993a91, "go7007_register_encoder" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe9836b40, "go7007_boot_encoder" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x37123b, "go7007_alloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7981fb45, "go7007_read_interrupt" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4fcbdb4d, "go7007_parse_video_stream" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x6da36835, "go7007_snd_remove" },
	{ 0xd4214195, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8f592ddf, "video_unregister_device" },
	{ 0x16040b55, "v4l2_device_disconnect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "go7007,videodev");

MODULE_ALIAS("usb:v0EB1p7007d0200dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0202dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0204dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0205dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0208dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0209dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA102d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA104d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDpDE00d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2250d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0709d0204dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "327BBC69D9ED04C35818893");
