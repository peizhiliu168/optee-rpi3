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
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xdbfcc69d, "unregister_ip_vs_scheduler" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x8a7424e6, "register_ip_vs_scheduler" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x45b175b9, "ip_vs_scheduler_err" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaf7db5d1, "register_net_sysctl" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc815530c, "init_net" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ip_vs");


MODULE_INFO(srcversion, "23DB53AD2932DEE2CF204B5");
