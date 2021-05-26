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
	{ 0xf59de741, "crypto_unregister_shash" },
	{ 0x10af2619, "crypto_register_shash" },
	{ 0x5a4d313e, "gf128mul_4k_lle" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x83581089, "gf128mul_init_4k_lle" },
	{ 0x7a4497db, "kzfree" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "gf128mul");


MODULE_INFO(srcversion, "5083B449BE1B93B17ADF785");
