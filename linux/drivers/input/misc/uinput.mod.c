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
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x25f70e91, "misc_deregister" },
	{ 0xb25e26d9, "misc_register" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd5f1de89, "input_ff_destroy" },
	{ 0x5bcbd09e, "input_mt_init_slots" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x84a68123, "input_register_device" },
	{ 0xea564a8e, "input_ff_create" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf51135cb, "input_event" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0x65b19e5f, "input_alloc_absinfo" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x30980456, "input_ff_flush" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x118fbaa, "stream_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x29361773, "complete" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "957A5BBC5CF6768558AC4C4");
