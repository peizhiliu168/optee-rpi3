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
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x5bc4f4c3, "i2c_mux_add_adapter" },
	{ 0x57fd3402, "i2c_root_adapter" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x38e9a1b7, "pinctrl_lookup_state" },
	{ 0x9ba34292, "devm_pinctrl_get" },
	{ 0x96cb70f6, "i2c_mux_alloc" },
	{ 0xded99c04, "of_node_put" },
	{ 0xf789e41, "of_find_i2c_adapter_by_node" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0xb5c74fa7, "of_property_read_string_helper" },
	{ 0x75ea68bf, "pinctrl_select_state" },
	{ 0x61c16d7b, "i2c_put_adapter" },
	{ 0x60376207, "i2c_mux_del_adapters" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrl");
MODULE_ALIAS("of:N*T*Ci2c-mux-pinctrlC*");

MODULE_INFO(srcversion, "43EFAACBE84B0EDD634202A");
