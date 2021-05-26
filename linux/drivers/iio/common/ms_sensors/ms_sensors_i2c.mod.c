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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x83564cbc, "i2c_smbus_read_i2c_block_data" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc7b64673, "i2c_smbus_read_word_data" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcd9a0191, "i2c_smbus_write_byte" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CDC8CC294DAE9ABE54B4EBF");
