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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x33264da6, "crypto_alloc_skcipher" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0xd0235c50, "cryptd_free_skcipher" },
	{ 0x2a281132, "crypto_unregister_skciphers" },
	{ 0x362eebe5, "cryptd_free_aead" },
	{ 0x8182c5bb, "cryptd_skcipher_queued" },
	{ 0x1334a923, "crypto_register_skciphers" },
	{ 0x2de2be87, "crypto_unregister_skcipher" },
	{ 0x7ad26ff9, "cryptd_aead_queued" },
	{ 0x26f0923b, "crypto_aead_encrypt" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x89fc531a, "crypto_register_skcipher" },
	{ 0x3a4334e3, "crypto_aead_setkey" },
	{ 0x5d1911b9, "cryptd_alloc_skcipher" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a546dbf, "cryptd_skcipher_child" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0xd2c28fb1, "crypto_unregister_aeads" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xa3ed59c8, "crypto_aead_decrypt" },
	{ 0x6e16720, "crypto_aead_setauthsize" },
	{ 0x45094dcb, "crypto_alloc_aead" },
	{ 0xca26eaa4, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x4f906968, "crypto_unregister_aead" },
	{ 0x929eb3, "crypto_register_aead" },
	{ 0x2b15faef, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b740e62, "cryptd_alloc_aead" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "3305741DF4314BB5351FF6F");
