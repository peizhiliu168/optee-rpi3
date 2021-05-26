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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc8299d74, "freq_reg_info" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xc5850110, "printk" },
	{ 0xbd093a33, "ieee80211_get_channel" },
	{ 0xf658ca70, "wiphy_apply_custom_regulatory" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdba126c1, "reg_initiator_name" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "DDC1D7EDF68EB04D2B8EE13");
