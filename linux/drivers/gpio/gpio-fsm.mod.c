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
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xd382ac5d, "devm_gpiochip_add_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb9a21ca3, "of_get_next_child" },
	{ 0x75ad23ba, "gpiod_is_active_low" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x6031ed0c, "devm_gpiod_get_array_optional" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xb90110fa, "gpiod_get_value" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb9cb5f8, "gpiochip_get_data" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crpi,gpio-fsm");
MODULE_ALIAS("of:N*T*Crpi,gpio-fsmC*");

MODULE_INFO(srcversion, "D9DE704CD8036F0F90A8F1E");
