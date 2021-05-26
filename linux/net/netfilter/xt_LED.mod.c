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
	{ 0x44a2b3a6, "xt_unregister_target" },
	{ 0x4f7eab80, "xt_register_target" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7da35597, "led_trigger_blink_oneshot" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb0e61c38, "led_trigger_register" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb64c2df9, "led_trigger_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x784eeb6d, "led_trigger_unregister" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "6053A24C4AE0734123C1C0B");
