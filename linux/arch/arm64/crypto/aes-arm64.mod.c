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
	{ 0xa84ce9e0, "crypto_aes_inv_sbox" },
	{ 0x1a10c32b, "crypto_ft_tab" },
	{ 0x2e57d7b9, "crypto_register_alg" },
	{ 0xe3555fb3, "crypto_aes_set_key" },
	{ 0x56054c05, "crypto_it_tab" },
	{ 0x781918df, "crypto_unregister_alg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A6CA16DC52CB2417ADA202E");
