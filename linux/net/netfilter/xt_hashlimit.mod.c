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
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x7b712f1a, "xt_unregister_matches" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xc66de8bf, "xt_register_matches" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x7954ed30, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x21ae7992, "proc_create_seq_private" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x999e8297, "vfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1dfdd782, "refcount_dec_and_mutex_lock" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7e894db6, "proc_mkdir" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf6f93e, "PDE_DATA" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "02B13465C3D0C777E317897");
