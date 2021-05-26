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
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9850ce6, "input_mt_report_pointer_emulation" },
	{ 0xda2dfc35, "touchscreen_report_pos" },
	{ 0xa27c2a09, "input_mt_report_slot_state" },
	{ 0xf51135cb, "input_event" },
	{ 0x84a68123, "input_register_device" },
	{ 0x13960e29, "devm_device_add_group" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x5bcbd09e, "input_mt_init_slots" },
	{ 0x7fb481f2, "touchscreen_parse_properties" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x424b97c4, "devm_add_action" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cilitek,ili210x");
MODULE_ALIAS("of:N*T*Cilitek,ili210xC*");
MODULE_ALIAS("of:N*T*Cilitek,ili251x");
MODULE_ALIAS("of:N*T*Cilitek,ili251xC*");
MODULE_ALIAS("i2c:ili210x");
MODULE_ALIAS("i2c:ili251x");

MODULE_INFO(srcversion, "B9529B03C6E56805AE11438");
