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
	{ 0x656e4a6e, "snprintf" },
	{ 0xff2993cd, "crypto_drop_spawn" },
	{ 0x498f1fed, "crypto_grab_skcipher" },
	{ 0x1af773e4, "crypto_mod_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x8dc3751a, "crypto_init_ahash_spawn" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xea78535c, "ahash_attr_alg" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xb213e2ae, "crypto_get_default_null_skcipher" },
	{ 0x8d6994d2, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x353d1a68, "crypto_ahash_setkey" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xe16d80df, "crypto_ahash_digest" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "5FDD8192473912DE9317E23");
