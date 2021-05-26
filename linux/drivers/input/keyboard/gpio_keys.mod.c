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
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x96848186, "scnprintf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd61eeee, "__bitmap_subset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xccc2885a, "fwnode_property_read_string" },
	{ 0x5157ca12, "irq_of_parse_and_map" },
	{ 0x1ccbd29c, "fwnode_property_present" },
	{ 0x1aa19561, "fwnode_property_read_u32_array" },
	{ 0x2ac0c65f, "of_fwnode_ops" },
	{ 0xe61ddb9b, "device_property_read_string" },
	{ 0x39fd5c18, "device_property_present" },
	{ 0x7640e52a, "device_get_child_node_count" },
	{ 0x40682e62, "gpiod_set_debounce" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x75ad23ba, "gpiod_is_active_low" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0x52cf94c8, "devm_gpio_request_one" },
	{ 0xfbf70d51, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x2f26f52d, "device_get_next_child_node" },
	{ 0x84a68123, "input_register_device" },
	{ 0xcc9c220f, "fwnode_handle_put" },
	{ 0xa9fb7635, "devm_request_any_context_irq" },
	{ 0x424b97c4, "devm_add_action" },
	{ 0x634e201b, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf51135cb, "input_event" },
	{ 0x11eda806, "gpiod_get_value_cansleep" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-keys");
MODULE_ALIAS("of:N*T*Cgpio-keysC*");

MODULE_INFO(srcversion, "AEB794702F49A782EE87AD6");
