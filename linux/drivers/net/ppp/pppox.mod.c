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
	{ 0x9d0602bf, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xaeaf006b, "ppp_unregister_channel" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0x5bee7acd, "module_put" },
	{ 0x4528f305, "sock_register" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x84fe337e, "ppp_channel_index" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "01B6ECBE6751CB63A1D543B");
