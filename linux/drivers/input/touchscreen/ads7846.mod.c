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
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x7c5f09f8, "devm_kfree" },
	{ 0x84a68123, "input_register_device" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x43c0c1ef, "of_get_named_gpio_flags" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x3011f33c, "of_find_property" },
	{ 0xe5ab638a, "of_property_read_variable_u16_array" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x1b861648, "of_match_device" },
	{ 0x40682e62, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x50553b8, "hwmon_device_register_with_groups" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7fb481f2, "touchscreen_parse_properties" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf51135cb, "input_event" },
	{ 0xda2dfc35, "touchscreen_report_pos" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2032c38d, "gpiod_get_raw_value" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x22b7c101, "spi_sync" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c49e4da, "hwmon_device_unregister" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tsc2046");
MODULE_ALIAS("of:N*T*Cti,tsc2046C*");
MODULE_ALIAS("of:N*T*Cti,ads7843");
MODULE_ALIAS("of:N*T*Cti,ads7843C*");
MODULE_ALIAS("of:N*T*Cti,ads7845");
MODULE_ALIAS("of:N*T*Cti,ads7845C*");
MODULE_ALIAS("of:N*T*Cti,ads7846");
MODULE_ALIAS("of:N*T*Cti,ads7846C*");
MODULE_ALIAS("of:N*T*Cti,ads7873");
MODULE_ALIAS("of:N*T*Cti,ads7873C*");

MODULE_INFO(srcversion, "C78A5971FCCC1DF7E9415AE");
