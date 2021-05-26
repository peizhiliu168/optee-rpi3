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
	{ 0xc5850110, "printk" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xee29d1a8, "desc_to_gpio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4217379f, "i2c_bit_add_numbered_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbac54d44, "gpiod_cansleep" },
	{ 0xe4bcc913, "devm_gpiod_get" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa90ce01, "devm_gpiod_get_index" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x11eda806, "gpiod_get_value_cansleep" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "i2c-algo-bit");

MODULE_ALIAS("of:N*T*Ci2c-gpio");
MODULE_ALIAS("of:N*T*Ci2c-gpioC*");

MODULE_INFO(srcversion, "984FFCF63B026D8C1AFA398");
