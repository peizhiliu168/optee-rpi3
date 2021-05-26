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
	{ 0x590eba0f, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3dd2a711, "ip_set_type_register" },
	{ 0x25087745, "skb_trim" },
	{ 0xeef9338c, "ip_set_put_extensions" },
	{ 0x2cebd9ea, "ip_set_name_byindex" },
	{ 0x3a59649d, "ip_set_get_byname" },
	{ 0x4f9a1598, "ip_set_get_extensions" },
	{ 0x24d273d1, "add_timer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0xa09b56e9, "ip_set_extensions" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xed766ef6, "ip_set_elem_len" },
	{ 0x6768a05b, "ip_set_match_extensions" },
	{ 0xe0a55136, "ip_set_test" },
	{ 0x6305d27f, "ip_set_add" },
	{ 0xe39a0a1f, "ip_set_del" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5792f848, "strlcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xf233fcb1, "ip_set_put_byindex" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "5E7F503ADBEF0CC72FFBF73");
