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
	{ 0x87949f2f, "lib80211_unregister_crypto_ops" },
	{ 0x54aeea3, "lib80211_register_crypto_ops" },
	{ 0x25087745, "skb_trim" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xa3ed59c8, "crypto_aead_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a4497db, "kzfree" },
	{ 0x26f0923b, "crypto_aead_encrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x99cfb896, "skb_put" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x45094dcb, "crypto_alloc_aead" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x3a4334e3, "crypto_aead_setkey" },
	{ 0x6e16720, "crypto_aead_setauthsize" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "843C3708FAD475ADEDDCAA4");
