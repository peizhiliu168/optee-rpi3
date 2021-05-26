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
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x67fa2d43, "snd_pcm_period_elapsed" },
	{ 0x27f006ff, "usb_init_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x61e4ac4b, "snd_rawmidi_set_ops" },
	{ 0xee3a52f8, "snd_card_disconnect" },
	{ 0x4fbc6d29, "snd_rawmidi_new" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xf51135cb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x81ade87, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x684e4dae, "snd_pcm_set_ops" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x1a133dba, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7a44bc6f, "snd_pcm_lib_ioctl" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xcb213e60, "snd_card_set_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd2b45b8e, "usb_urb_ep_type_check" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x41540992, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x84a68123, "input_register_device" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xdba8bef9, "snd_ctl_new1" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0x1cfbe51c, "snd_pcm_limit_hw_rates" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xde3a8302, "snd_pcm_new" },
	{ 0xc46a4a04, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0x2d988d54, "snd_ctl_add" },
	{ 0x613591f1, "snd_rawmidi_transmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x143eb036, "snd_rawmidi_receive" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F759D6A3FBC8A3314E7EB77");
