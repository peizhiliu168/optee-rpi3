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
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5bc4f4c3, "i2c_mux_add_adapter" },
	{ 0x92f92da6, "mux_control_states" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x96cb70f6, "i2c_mux_alloc" },
	{ 0xb9a21ca3, "of_get_next_child" },
	{ 0xded99c04, "of_node_put" },
	{ 0xf789e41, "of_find_i2c_adapter_by_node" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x14192328, "devm_mux_control_get" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x400354aa, "mux_control_select" },
	{ 0x489ff9da, "mux_control_deselect" },
	{ 0x61c16d7b, "i2c_put_adapter" },
	{ 0x60376207, "i2c_mux_del_adapters" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "i2c-mux,mux-core");

MODULE_ALIAS("of:N*T*Ci2c-mux");
MODULE_ALIAS("of:N*T*Ci2c-muxC*");

MODULE_INFO(srcversion, "04B4CF96CBF4D02755460BC");
