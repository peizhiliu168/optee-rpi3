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
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xa56d43af, "dlm_posix_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x647d6170, "dlm_lock" },
	{ 0xfc08ce12, "dlm_posix_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xb25e26d9, "misc_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x3b52e4ee, "default_llseek" },
	{ 0xc5850110, "printk" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15adb75f, "ocfs2_stack_glue_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f996098, "ocfs2_stack_glue_register" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x50f6c1b1, "dlm_posix_unlock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xcf9f3328, "dlm_release_lockspace" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b62826c, "dlm_unlock" },
	{ 0xcd224e1d, "dlm_new_lockspace" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x29361773, "complete" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x25f70e91, "misc_deregister" },
};

MODULE_INFO(depends, "dlm,ocfs2_stackglue");


MODULE_INFO(srcversion, "F1AE49B698699B3A0A33E51");
