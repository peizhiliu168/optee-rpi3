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
	{ 0x1e326b5e, "param_array_ops" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0x99c64a74, "em28xx_unregister_extension" },
	{ 0x22fea119, "em28xx_register_extension" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xe1e53a8c, "dvb_create_media_graph" },
	{ 0xe27258a7, "dvb_net_init" },
	{ 0xe75e4602, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xfbc250fe, "dvb_register_frontend" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x7f677d33, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x3602be2a, "em28xx_alloc_urbs" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xe69a0156, "em28xx_setup_xc3028" },
	{ 0xe64f444f, "dev_printk" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x5512298c, "em28xx_init_usb_xfer" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2078c73, "dvb_unregister_adapter" },
	{ 0x8f68bcf, "dvb_frontend_detach" },
	{ 0xb93f6cee, "dvb_unregister_frontend" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x1581dd4c, "dvb_dmxdev_release" },
	{ 0x358c88a8, "dvb_net_release" },
	{ 0xbdc35ac1, "em28xx_uninit_usb_xfer" },
	{ 0xcb31ecd7, "dvb_frontend_suspend" },
	{ 0x495e0737, "dvb_frontend_resume" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xa853f5fe, "em28xx_stop_urbs" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x11dca099, "em28xx_write_reg_bits" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0xdcfd406a, "em28xx_write_reg" },
	{ 0xeda47765, "em28xx_gpio_set" },
	{ 0x4829a47e, "memcpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e4ef55c, "dvb_module_release" },
	{ 0x3ecc078b, "dvb_module_probe" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xefde68f3, "em28xx_set_mode" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "em28xx,dvb-core");


MODULE_INFO(srcversion, "F3DF3D47242A31857C962F0");
