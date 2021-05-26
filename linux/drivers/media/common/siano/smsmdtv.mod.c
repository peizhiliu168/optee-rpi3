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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x61fc71a0, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbf34e288, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0x562e4fb1, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x494547e3, "rc_free_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a921311, "strncmp" },
	{ 0xcd3be9f4, "dma_alloc_attrs" },
	{ 0xbe57027c, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x373d0909, "ir_raw_event_store" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc1e93586, "ir_raw_event_handle" },
	{ 0x5d4571b, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B977EA1C0DDEBA8F715A624");
