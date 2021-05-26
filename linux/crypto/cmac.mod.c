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
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x4829a47e, "memcpy" },
	{ 0x634ef362, "shash_free_instance" },
	{ 0x6e17f8d1, "shash_register_instance" },
	{ 0x4f9d78d1, "crypto_init_spawn" },
	{ 0x232a2da6, "crypto_alloc_instance" },
	{ 0x1af773e4, "crypto_mod_put" },
	{ 0x14e67cf9, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x74e9ba21, "crypto_spawn_tfm" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0xdcb764ad, "memset" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FED0BD16DA4F7788278E80D");
