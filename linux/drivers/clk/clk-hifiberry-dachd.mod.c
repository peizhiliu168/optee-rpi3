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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd6d8eed4, "of_property_read_variable_u8_array" },
	{ 0xdcb764ad, "memset" },
	{ 0x5f294ac7, "devm_clk_register" },
	{ 0x2493047e, "of_clk_add_provider" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf64d678c, "of_clk_src_simple_get" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x33822237, "regmap_write" },
	{ 0x4ab373e3, "of_clk_del_provider" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("of:N*T*Chifiberry,dachd-clk");
MODULE_ALIAS("of:N*T*Chifiberry,dachd-clkC*");
MODULE_ALIAS("i2c:dachd-clk");

MODULE_INFO(srcversion, "6395C584B36A07A280ABE68");
