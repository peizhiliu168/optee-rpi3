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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x84a68123, "input_register_device" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x5bcbd09e, "input_mt_init_slots" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2ba32d05, "gpiod_direction_input" },
	{ 0x4ea3c593, "gpiod_set_raw_value" },
	{ 0xebbbea1c, "gpiod_direction_output_raw" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x43c0c1ef, "of_get_named_gpio_flags" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9850ce6, "input_mt_report_pointer_emulation" },
	{ 0xa27c2a09, "input_mt_report_slot_state" },
	{ 0xf51135cb, "input_event" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ceeti,egalax_ts");
MODULE_ALIAS("of:N*T*Ceeti,egalax_tsC*");
MODULE_ALIAS("i2c:egalax_ts");

MODULE_INFO(srcversion, "C757A10FF0D460470DAE851");
