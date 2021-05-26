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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x61fc71a0, "rc_unregister_device" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xd2078c73, "dvb_unregister_adapter" },
	{ 0xe1e53a8c, "dvb_create_media_graph" },
	{ 0xcb31ecd7, "dvb_frontend_suspend" },
	{ 0xfbc250fe, "dvb_register_frontend" },
	{ 0x495e0737, "dvb_frontend_resume" },
	{ 0x566ba1b4, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xb93f6cee, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x562e4fb1, "rc_allocate_device" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x358c88a8, "dvb_net_release" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x8f68bcf, "dvb_frontend_detach" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3feecaf6, "dvb_dmx_swfilter_raw" },
	{ 0x494547e3, "rc_free_device" },
	{ 0x1581dd4c, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xe27258a7, "dvb_net_init" },
	{ 0xbe57027c, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0x932e23e9, "media_device_cleanup" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x7f677d33, "dvb_register_adapter" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xd9d444b9, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x9fd65ad8, "media_device_unregister" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe75e4602, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core,mc");


MODULE_INFO(srcversion, "E613B09C232368D460779F5");
