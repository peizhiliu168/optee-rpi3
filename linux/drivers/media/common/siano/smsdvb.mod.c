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
	{ 0x88c56fc6, "smscore_register_hotplug" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x13499b9b, "smscore_get_board_id" },
	{ 0x86361fa3, "sms_board_setup" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xd2078c73, "dvb_unregister_adapter" },
	{ 0xe1e53a8c, "dvb_create_media_graph" },
	{ 0x27e771bd, "sms_board_event" },
	{ 0xfbc250fe, "dvb_register_frontend" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0xb93f6cee, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0x1581dd4c, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x348cd19, "sms_board_lna_control" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xadcb8b00, "smscore_putbuffer" },
	{ 0x932e23e9, "media_device_cleanup" },
	{ 0xd3a55082, "smscore_unregister_hotplug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x7f677d33, "dvb_register_adapter" },
	{ 0xdad9015b, "sms_board_power" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xd20f5ea9, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x5ea18a2b, "smscore_register_client" },
	{ 0x721c1621, "smscore_get_device_mode" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9fd65ad8, "media_device_unregister" },
	{ 0xe75e4602, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "smsmdtv,dvb-core,mc");


MODULE_INFO(srcversion, "8DA3BAA1B84ED234E2EE6A6");
