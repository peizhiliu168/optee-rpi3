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
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0x39fd5c18, "device_property_present" },
	{ 0x2ac0c65f, "of_fwnode_ops" },
	{ 0xccc2885a, "fwnode_property_read_string" },
	{ 0x1aa19561, "fwnode_property_read_u32_array" },
	{ 0x2f26f52d, "device_get_next_child_node" },
	{ 0x7640e52a, "device_get_child_node_count" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9632");
MODULE_ALIAS("of:N*T*Cnxp,pca9632C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9633");
MODULE_ALIAS("of:N*T*Cnxp,pca9633C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9634");
MODULE_ALIAS("of:N*T*Cnxp,pca9634C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9635");
MODULE_ALIAS("of:N*T*Cnxp,pca9635C*");
MODULE_ALIAS("i2c:pca9632");
MODULE_ALIAS("i2c:pca9633");
MODULE_ALIAS("i2c:pca9634");
MODULE_ALIAS("i2c:pca9635");

MODULE_INFO(srcversion, "122182FB4EEF190658090F9");
