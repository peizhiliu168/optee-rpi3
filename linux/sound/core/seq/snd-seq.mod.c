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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc0c99561, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0x65a6f443, "snd_register_device" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x626fd7fb, "pid_vnr" },
	{ 0x118fbaa, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1e7c6195, "snd_device_initialize" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x91def1c, "snd_seq_autoload_exit" },
	{ 0xdcb764ad, "memset" },
	{ 0x4ccd378a, "_raw_write_unlock_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0xa855da13, "snd_unregister_device" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2eac3606, "snd_timer_pause" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaa5f61fb, "snd_timer_resolution" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x5bee7acd, "module_put" },
	{ 0xd87e1e99, "snd_timer_start" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x6580cb7a, "snd_timer_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1eb7724a, "snd_timer_close" },
	{ 0xa83b436e, "snd_seq_root" },
	{ 0x20e5ae24, "snd_info_free_entry" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x370a0736, "snd_seq_autoload_init" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2aaf9333, "snd_info_create_module_entry" },
	{ 0x593a7c7a, "snd_info_register" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-seq-device,snd-timer");


MODULE_INFO(srcversion, "39B60B81C8532500E901A94");
