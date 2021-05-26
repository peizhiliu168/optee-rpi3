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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x4ad9695e, "skb_pull_rcsum" },
	{ 0x7d5a940, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x34ee4918, "llc_sap_close" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x90469b5b, "llc_build_and_send_ui_pkt" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "DFF4361E04DF5209DA25910");
