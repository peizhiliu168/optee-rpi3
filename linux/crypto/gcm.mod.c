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
	{ 0xeb33e656, "crypto_unregister_templates" },
	{ 0x77753193, "crypto_register_templates" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeec3ac23, "crypto_ahash_finup" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7a4497db, "kzfree" },
	{ 0x353d1a68, "crypto_ahash_setkey" },
	{ 0x307dabe3, "crypto_req_done" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x498f1fed, "crypto_grab_skcipher" },
	{ 0x1af773e4, "crypto_mod_put" },
	{ 0x8dc3751a, "crypto_init_ahash_spawn" },
	{ 0xb78bfc29, "crypto_find_alg" },
	{ 0x1b2872d4, "crypto_ahash_type" },
	{ 0xf732c0e7, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7fdcf1b7, "crypto_grab_aead" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0xff2993cd, "crypto_drop_spawn" },
	{ 0xb213e2ae, "crypto_get_default_null_skcipher" },
	{ 0x8d6994d2, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x3a4334e3, "crypto_aead_setkey" },
	{ 0x6e16720, "crypto_aead_setauthsize" },
	{ 0xa3ed59c8, "crypto_aead_decrypt" },
	{ 0x26f0923b, "crypto_aead_encrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "133945D489164A71804396D");
