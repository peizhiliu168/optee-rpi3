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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc0c99561, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0x65a6f443, "snd_register_device" },
	{ 0xb8ab70fd, "snd_device_register" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xea124bd1, "gcd" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xc1a05552, "snd_card_file_remove" },
	{ 0xe76ae690, "snd_device_free" },
	{ 0x626fd7fb, "pid_vnr" },
	{ 0x3ffc0723, "dma_mmap_attrs" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa8d47088, "snd_power_wait" },
	{ 0x1e7c6195, "snd_device_initialize" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x9630cf00, "snd_info_create_card_entry" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x28a8c058, "pm_qos_add_request" },
	{ 0xa41935ec, "pm_qos_remove_request" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x4dda0c78, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x662fe39c, "of_gen_pool_get" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xbf34e288, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x66decfd5, "ns_to_timespec" },
	{ 0xe9eedf75, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x9686ee78, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdcb764ad, "memset" },
	{ 0xf46b3315, "snd_device_new" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfcbd62bb, "snd_timer_new" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0xa855da13, "snd_unregister_device" },
	{ 0xd2fbd08, "fasync_helper" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0xcd3be9f4, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x8bc0870, "compat_put_timespec" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xce807a25, "up_write" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4260eb07, "fput" },
	{ 0x6fff261f, "__arch_clear_user" },
	{ 0x5bee7acd, "module_put" },
	{ 0x7bdc22f7, "snd_card_file_add" },
	{ 0xb2c96a8c, "snd_ctl_register_ioctl" },
	{ 0xdded6c02, "put_device" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf00d8213, "pm_qos_request_active" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0xdba8bef9, "snd_ctl_new1" },
	{ 0x486075c8, "gen_pool_dma_alloc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa1188971, "snd_ctl_remove" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0xcddf45c2, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x49690b22, "remap_pfn_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0x20e5ae24, "snd_info_free_entry" },
	{ 0x8c11e806, "snd_timer_interrupt" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x20651803, "kill_fasync" },
	{ 0x24b27cf9, "snd_ctl_get_preferred_subdevice" },
	{ 0x35cc8f5f, "snd_timer_notify" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xab75123b, "vmalloc_to_page" },
	{ 0x2d988d54, "snd_ctl_add" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0xad39b38d, "snd_ctl_unregister_ioctl_compat" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2aaf9333, "snd_info_create_module_entry" },
	{ 0x593a7c7a, "snd_info_register" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xefa9982a, "dma_can_mmap" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "snd,snd-timer");


MODULE_INFO(srcversion, "ADD11076B3BAD7E04B117A8");
