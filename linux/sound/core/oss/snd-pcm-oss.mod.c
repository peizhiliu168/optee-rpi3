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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0xc1a05552, "snd_card_file_remove" },
	{ 0xac0fd63e, "snd_pcm_release_substream" },
	{ 0x66d5896c, "snd_pcm_notify" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x9630cf00, "snd_info_create_card_entry" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x7aa2fce9, "snd_pcm_hw_refine" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe9eedf75, "nonseekable_open" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x52e3e4a5, "snd_pcm_hw_param_value" },
	{ 0xdcb764ad, "memset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8dd1d056, "snd_pcm_hw_param_last" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbb530900, "snd_pcm_mmap_data" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x5bee7acd, "module_put" },
	{ 0x7bdc22f7, "snd_card_file_add" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5eb9889d, "snd_pcm_stream_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xed103de2, "snd_pcm_stream_unlock_irq" },
	{ 0xe9748b3d, "snd_register_oss_device" },
	{ 0xcd00a8d3, "snd_pcm_open_substream" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9f7dfccf, "snd_unregister_oss_device" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x8e8c1fd4, "__snd_pcm_lib_xfer" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x283dfe3, "_snd_pcm_hw_params_any" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x20e5ae24, "snd_info_free_entry" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x239004af, "snd_pcm_kernel_ioctl" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x593a7c7a, "snd_info_register" },
	{ 0x4ca00703, "snd_pcm_hw_param_first" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "CB77A3D1190526271C14A0D");
