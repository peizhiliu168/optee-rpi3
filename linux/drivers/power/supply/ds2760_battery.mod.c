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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x65c15b52, "w1_unregister_family" },
	{ 0x9fcfbb52, "w1_register_family" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbeb065ae, "power_supply_register" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x8af131a9, "_dev_notice" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9db63b5f, "power_supply_am_i_supplied" },
	{ 0x59ecbf96, "power_supply_changed" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xe6e319b3, "power_supply_get_drvdata" },
	{ 0xe455993c, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x509bda77, "w1_write_block" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x259bdf4f, "w1_read_block" },
	{ 0xa3439dc3, "w1_write_8" },
	{ 0x9839611c, "w1_reset_select_slave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "CEBED0968B0BEB73D67F4D8");
