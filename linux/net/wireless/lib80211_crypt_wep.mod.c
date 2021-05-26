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
	{ 0x99cfb896, "skb_put" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x7a4497db, "kzfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25087745, "skb_trim" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x4829a47e, "memcpy" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "lib80211,libarc4");


MODULE_INFO(srcversion, "8B81D22FB9E4D0C18F89E6E");
