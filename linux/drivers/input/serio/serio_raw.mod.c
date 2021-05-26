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
	{ 0xde0a8051, "noop_llseek" },
	{ 0xab10fc43, "serio_unregister_driver" },
	{ 0x551383ac, "__serio_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb25e26d9, "misc_register" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x42bf4312, "serio_open" },
	{ 0x8c10f4b5, "get_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xd2fbd08, "fasync_helper" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x3340fa76, "serio_close" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x20651803, "kill_fasync" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x25f70e91, "misc_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xdded6c02, "put_device" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "serio");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "EA688D9AD5AEE3436CE2D22");
