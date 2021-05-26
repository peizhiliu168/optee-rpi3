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
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x67fa2d43, "snd_pcm_period_elapsed" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5682f894, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7e8fece0, "snd_pcm_hw_constraint_integer" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x684e4dae, "snd_pcm_set_ops" },
	{ 0x25949b50, "snd_ctl_boolean_stereo_info" },
	{ 0xc2f2d49, "snd_ctl_notify" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0xf90af648, "snd_pcm_lib_free_pages" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0x7a44bc6f, "snd_pcm_lib_ioctl" },
	{ 0xb664269a, "snd_pcm_lib_malloc_pages" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdba8bef9, "snd_ctl_new1" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xff48b5b6, "snd_pcm_hw_constraint_minmax" },
	{ 0x10290b70, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0xde3a8302, "snd_pcm_new" },
	{ 0x2d988d54, "snd_ctl_add" },
	{ 0x5133306b, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "48FFE10F3744690741515CA");
