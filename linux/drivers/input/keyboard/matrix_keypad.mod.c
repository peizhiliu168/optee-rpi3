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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf51135cb, "input_event" },
	{ 0xae5f8fa1, "gpiod_get_raw_value_cansleep" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x43c0c1ef, "of_get_named_gpio_flags" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x14d91d5f, "of_get_property" },
	{ 0xc38ba97f, "of_count_phandle_with_args" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x84a68123, "input_register_device" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x634e201b, "input_set_capability" },
	{ 0xd09e6b58, "matrix_keypad_build_keymap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2ba32d05, "gpiod_direction_input" },
	{ 0x90629832, "gpiod_set_raw_value_cansleep" },
	{ 0xebbbea1c, "gpiod_direction_output_raw" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Cgpio-matrix-keypad");
MODULE_ALIAS("of:N*T*Cgpio-matrix-keypadC*");

MODULE_INFO(srcversion, "BEECF11A9AAE07F003A4CAE");
