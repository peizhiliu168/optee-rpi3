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
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xf1a3d8a7, "snd_timer_global_new" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c11e806, "snd_timer_interrupt" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x432a86c8, "snd_timer_global_register" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0x5a57831b, "snd_timer_global_free" },
};

MODULE_INFO(depends, "snd-timer");


MODULE_INFO(srcversion, "4F6C866295FB5A6FB482C44");
