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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x23159f18, "tty_register_ldisc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1c266fae, "serio_unregister_port" },
	{ 0xc5850110, "printk" },
	{ 0x2050a0e6, "__serio_register_port" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc2382a7a, "tty_name" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeac3cce, "serio_interrupt" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "serio");


MODULE_INFO(srcversion, "E1AEAB73453EFB96B5C8594");
