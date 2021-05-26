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
	{ 0x333f0012, "devm_led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ac0c65f, "of_fwnode_ops" },
	{ 0xccc2885a, "fwnode_property_read_string" },
	{ 0x1aa19561, "fwnode_property_read_u32_array" },
	{ 0x2f26f52d, "device_get_next_child_node" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x7640e52a, "device_get_child_node_count" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9550");
MODULE_ALIAS("of:N*T*Cnxp,pca9550C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9551");
MODULE_ALIAS("of:N*T*Cnxp,pca9551C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9552");
MODULE_ALIAS("of:N*T*Cnxp,pca9552C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9553");
MODULE_ALIAS("of:N*T*Cnxp,pca9553C*");
MODULE_ALIAS("i2c:pca9550");
MODULE_ALIAS("i2c:pca9551");
MODULE_ALIAS("i2c:pca9552");
MODULE_ALIAS("i2c:pca9553");

MODULE_INFO(srcversion, "4FC3BD06E3EE90C16F80E3F");
