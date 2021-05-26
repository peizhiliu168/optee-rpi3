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
	{ 0x1ddea7e3, "snd_soc_register_component" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x2306d84e, "snd_soc_unregister_component" },
	{ 0x5133306b, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Chifiberry,dacplusdsp");
MODULE_ALIAS("of:N*T*Chifiberry,dacplusdspC*");

MODULE_INFO(srcversion, "2AEE241CEBF73DF15C0E946");
