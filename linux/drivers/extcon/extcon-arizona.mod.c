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
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x39fd5c18, "device_property_present" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0xb471746, "gpiod_get_optional" },
	{ 0x84a68123, "input_register_device" },
	{ 0x4b10af2e, "arizona_clk32k_enable" },
	{ 0x1f6e686f, "arizona_request_irq" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0x634e201b, "input_set_capability" },
	{ 0x52cf94c8, "devm_gpio_request_one" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x209ab736, "devm_extcon_dev_register" },
	{ 0x81b66946, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xf51135cb, "input_event" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x414ebb16, "extcon_get_state" },
	{ 0x90629832, "gpiod_set_raw_value_cansleep" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0x3ad2248a, "extcon_set_state_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x56c3ce67, "__pm_runtime_suspend" },
	{ 0x33822237, "regmap_write" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x573aaa1d, "snd_soc_component_disable_pin" },
	{ 0xe145866f, "snd_soc_dapm_sync" },
	{ 0xa94df6c2, "snd_soc_component_force_enable_pin" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0x3fc42712, "arizona_clk32k_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd27c705b, "arizona_free_irq" },
	{ 0x41fb30c2, "arizona_set_irq_wake" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x20fe06e4, "gpiod_put" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "extcon-core,snd-soc-core");


MODULE_INFO(srcversion, "F2D9EB1BD8C1AEA246CE651");
