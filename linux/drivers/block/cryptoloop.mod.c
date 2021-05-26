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
	{ 0xbfee3ad5, "loop_unregister_transfer" },
	{ 0xc7643a2, "loop_register_transfer" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0xdcb764ad, "memset" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x988be57c, "crypto_alloc_sync_skcipher" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x9166fada, "strncpy" },
	{ 0xc5850110, "printk" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F5E377D4A071E9767DFE2C");
