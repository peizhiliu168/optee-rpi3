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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x69de0ba8, "param_ops_byte" },
	{ 0x65c15b52, "w1_unregister_family" },
	{ 0x9fcfbb52, "w1_register_family" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0xe914e41e, "strcpy" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xa88a955b, "w1_reset_resume_command" },
	{ 0x259bdf4f, "w1_read_block" },
	{ 0xbd6841d4, "crc16" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0x40b09e15, "w1_touch_bit" },
	{ 0x7c5f09f8, "devm_kfree" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0xe98cfa64, "w1_read_8" },
	{ 0xa3439dc3, "w1_write_8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x509bda77, "w1_write_block" },
	{ 0x9839611c, "w1_reset_select_slave" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "15E89FF0209D7B4579CC792");
