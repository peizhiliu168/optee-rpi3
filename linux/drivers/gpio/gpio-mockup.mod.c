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
	{ 0x1e326b5e, "param_array_ops" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x8b1f9945, "single_release" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x5682f894, "platform_device_register_full" },
	{ 0xdcb764ad, "memset" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0xc5850110, "printk" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x44b38dbe, "irq_sim_fire" },
	{ 0xd98de7e4, "irq_get_irq_data" },
	{ 0xf9ca2eb4, "kstrtoint_from_user" },
	{ 0xa4c47b95, "single_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x4626fae5, "devm_kasprintf" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xd382ac5d, "devm_gpiochip_add_data" },
	{ 0x1e7f6ced, "devm_irq_sim_init" },
	{ 0x39fd5c18, "device_property_present" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xe61ddb9b, "device_property_read_string" },
	{ 0xbddfa805, "device_property_read_u16_array" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x114022d, "irq_sim_irqnum" },
	{ 0xb9cb5f8, "gpiochip_get_data" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3466B84F2CBEE3AF44F4FB2");
