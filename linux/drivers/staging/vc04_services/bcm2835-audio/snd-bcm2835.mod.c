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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa7fc046a, "vchi_msg_dequeue" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xda468542, "vchi_bulk_queue_transmit" },
	{ 0xa711b5b9, "snd_pcm_hw_constraint_step" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x67fa2d43, "snd_pcm_period_elapsed" },
	{ 0x5a1164f6, "devres_find" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0xdaf25f60, "vchi_service_open" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x62fe0b00, "snd_pcm_stream_lock" },
	{ 0xf6b523a2, "devres_alloc_node" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x4390690, "vchi_service_use" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x49a7510f, "vchi_disconnect" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x684e4dae, "snd_pcm_set_ops" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x3ec8e32, "vchi_connect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf90af648, "snd_pcm_lib_free_pages" },
	{ 0x7a44bc6f, "snd_pcm_lib_ioctl" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb664269a, "snd_pcm_lib_malloc_pages" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0x424b97c4, "devm_add_action" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x713e83e8, "snd_pcm_stream_unlock" },
	{ 0xdba8bef9, "snd_ctl_new1" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0x8eab9994, "devres_add" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x391617cc, "rpi_firmware_get" },
	{ 0x18bb8ba7, "vchi_get_peer_version" },
	{ 0x37a0cba, "kfree" },
	{ 0xff48b5b6, "snd_pcm_hw_constraint_minmax" },
	{ 0x9f2d8347, "snd_pcm_stop" },
	{ 0x10290b70, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0x29361773, "complete" },
	{ 0xde3a8302, "snd_pcm_new" },
	{ 0x2d988d54, "snd_ctl_add" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xded99c04, "of_node_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,vchiq,snd");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audio");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audioC*");

MODULE_INFO(srcversion, "DCB4E5FF47AAA2853384673");
