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
	{ 0x3faf14ed, "dm_unregister_target" },
	{ 0xc5850110, "printk" },
	{ 0xae6e97a0, "dm_register_target" },
	{ 0x171e1d31, "bio_endio" },
	{ 0xaf75357b, "zero_fill_bio_iter" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "24C20ECCE9BB4B1521FA095");
