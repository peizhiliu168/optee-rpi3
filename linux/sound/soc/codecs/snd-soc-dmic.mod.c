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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84283ea1, "devm_snd_soc_register_component" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xa96f1213, "param_ops_uint" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cdmic-codec");
MODULE_ALIAS("of:N*T*Cdmic-codecC*");

MODULE_INFO(srcversion, "B97B38A4B314B024715FF17");
