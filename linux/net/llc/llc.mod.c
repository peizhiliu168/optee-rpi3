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
	{ 0xd3579c0d, "pskb_trim_rcsum_slow" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xab423eb0, "skb_clone" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x97fe5e26, "dev_remove_pack" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xc815530c, "init_net" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x79d4ec46, "dev_add_pack" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x29223775, "dev_queue_xmit" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8A4AB9E7090438580206A84");
