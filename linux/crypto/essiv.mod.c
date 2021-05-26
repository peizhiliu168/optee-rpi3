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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x26f0923b, "crypto_aead_encrypt" },
	{ 0xa3ed59c8, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
	{ 0xf732c0e7, "aead_register_instance" },
	{ 0xc67282a2, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1af773e4, "crypto_mod_put" },
	{ 0xcfe8f49d, "shash_no_setkey" },
	{ 0xa8e239, "crypto_alg_mod_lookup" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7fdcf1b7, "crypto_grab_aead" },
	{ 0xc5850110, "printk" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x498f1fed, "crypto_grab_skcipher" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xd3ef14cd, "crypto_shash_digest" },
	{ 0x3a4334e3, "crypto_aead_setkey" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ca92efd, "crypto_shash_finup" },
	{ 0x1b14ff22, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x8d6994d2, "crypto_spawn_tfm2" },
	{ 0x768c8c1a, "crypto_alloc_shash" },
	{ 0xb7104837, "crypto_alloc_base" },
	{ 0xff2993cd, "crypto_drop_spawn" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0x6e16720, "crypto_aead_setauthsize" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "075FFB328395C9565264369");
