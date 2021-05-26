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
	{ 0x65a6f443, "snd_register_device" },
	{ 0xc1a05552, "snd_card_file_remove" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1e7c6195, "snd_device_initialize" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4dda0c78, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x9686ee78, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xf46b3315, "snd_device_new" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa855da13, "snd_unregister_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x5bee7acd, "module_put" },
	{ 0x7bdc22f7, "snd_card_file_add" },
	{ 0xb2c96a8c, "snd_ctl_register_ioctl" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe9748b3d, "snd_register_oss_device" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9f7dfccf, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x20e5ae24, "snd_info_free_entry" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0xce07cfe2, "__arch_copy_in_user" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xad39b38d, "snd_ctl_unregister_ioctl_compat" },
	{ 0x2aaf9333, "snd_info_create_module_entry" },
	{ 0x593a7c7a, "snd_info_register" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "7B688A7B03FDC55C2BF0C26");
