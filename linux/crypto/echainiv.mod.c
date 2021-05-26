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
	{ 0xf581a58e, "crypto_unregister_template" },
	{ 0x5cf241a0, "crypto_register_template" },
	{ 0xf732c0e7, "aead_register_instance" },
	{ 0x3e2e8e86, "aead_exit_geniv" },
	{ 0x9a1e6ea6, "aead_init_geniv" },
	{ 0x9fbbfa49, "aead_geniv_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x26f0923b, "crypto_aead_encrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
	{ 0xa3ed59c8, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xbf5cb521, "aead_geniv_free" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "200E51542A01AF555F4D0F0");
