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
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x7db9d591, "pps_register_source" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0xe4bcc913, "devm_gpiod_get" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2dae1556, "pps_event" },
	{ 0xb90110fa, "gpiod_get_value" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe312ae0b, "pps_unregister_source" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "pps_core");

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "2099E891538104A4F9778A1");
