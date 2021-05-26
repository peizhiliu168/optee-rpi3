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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x4ffc57e5, "__devm_regmap_init" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0x83564cbc, "i2c_smbus_read_i2c_block_data" },
	{ 0x9ef124fa, "i2c_smbus_write_word_data" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xc7b64673, "i2c_smbus_read_word_data" },
	{ 0x1b08bada, "__regmap_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x540b1235, "regmap_get_val_endian" },
	{ 0x75534cf3, "i2c_smbus_write_i2c_block_data" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B8F46E38E7E7BF22F60F1E4");
