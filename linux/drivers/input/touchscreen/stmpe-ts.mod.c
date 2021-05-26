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
	{ 0x4a741a83, "_dev_err" },
	{ 0x84a68123, "input_register_device" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0x634e201b, "input_set_capability" },
	{ 0x5b6282b3, "stmpe_reg_write" },
	{ 0x5c214615, "stmpe811_adc_common_init" },
	{ 0xb0fd7fb2, "stmpe_enable" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xae5165fe, "platform_get_irq_byname" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x624b4bf7, "stmpe_reg_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf51135cb, "input_event" },
	{ 0x3d45b783, "stmpe_block_read" },
	{ 0x88af3d7e, "stmpe_set_bits" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd27b0d4d, "stmpe_disable" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stmpe-ts");
MODULE_ALIAS("of:N*T*Cst,stmpe-tsC*");

MODULE_INFO(srcversion, "CF501C084AA61B24D42814D");
