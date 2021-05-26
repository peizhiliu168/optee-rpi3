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
	{ 0xe374c304, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2b7581a6, "au8522_led_ctrl" },
	{ 0xf8933380, "au8522_writereg" },
	{ 0xa4e86758, "au8522_readreg" },
	{ 0xc5850110, "printk" },
	{ 0x2ece0362, "au8522_i2c_gate_ctrl" },
	{ 0x9ee81b00, "au8522_sleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3701e84b, "au8522_analog_i2c_gate_ctrl" },
	{ 0x43d2fc75, "au8522_get_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb40376c7, "au8522_init" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "0C0FFE37ED9467EA0EDF7FF");
