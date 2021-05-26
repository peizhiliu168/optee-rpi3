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
	{ 0x267fbd4d, "param_get_bool" },
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x1691841b, "hid_hw_open" },
	{ 0x8932da54, "hid_add_device" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0xb3eaea63, "hid_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0xd0288e54, "power_supply_powers" },
	{ 0xbeb065ae, "power_supply_register" },
	{ 0x4626fae5, "devm_kasprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0x7aceca9e, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7da99514, "hid_destroy_device" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0xe455993c, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x59ecbf96, "power_supply_changed" },
	{ 0xf51135cb, "input_event" },
	{ 0x5b4d7b61, "hid_input_report" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc89fa0af, "param_set_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd8687eab, "hid_alloc_report_buf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe6e319b3, "power_supply_get_drvdata" },
	{ 0xc5850110, "printk" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x84a68123, "input_register_device" },
	{ 0x65b19e5f, "input_alloc_absinfo" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0x634e201b, "input_set_capability" },
	{ 0x687ead44, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb99f246, "hid_parse_report" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "3F0A07CE8237A1830F0A34C");
