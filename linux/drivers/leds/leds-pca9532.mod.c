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
	{ 0x84a68123, "input_register_device" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xded99c04, "of_node_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0xb9a21ca3, "of_get_next_child" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x1b861648, "of_match_device" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9530");
MODULE_ALIAS("of:N*T*Cnxp,pca9530C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9531");
MODULE_ALIAS("of:N*T*Cnxp,pca9531C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9532");
MODULE_ALIAS("of:N*T*Cnxp,pca9532C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9533");
MODULE_ALIAS("of:N*T*Cnxp,pca9533C*");
MODULE_ALIAS("i2c:pca9530");
MODULE_ALIAS("i2c:pca9531");
MODULE_ALIAS("i2c:pca9532");
MODULE_ALIAS("i2c:pca9533");

MODULE_INFO(srcversion, "0094A8555062CF64374D78A");
