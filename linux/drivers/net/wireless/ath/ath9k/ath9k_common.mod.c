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
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x35feaa7b, "ath9k_hw_gettsf64" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x70f515db, "ieee80211_get_hdrlen_from_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xbadc6561, "ath_hw_keyreset" },
	{ 0x8f7938fe, "ath9k_hw_set_txpowerlimit" },
};

MODULE_INFO(depends, "cfg80211,ath9k_hw,ath");


MODULE_INFO(srcversion, "FA7352A2CD8BFE3654DD99F");
