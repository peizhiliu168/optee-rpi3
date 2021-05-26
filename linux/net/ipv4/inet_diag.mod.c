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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x2c5bf82d, "sock_diag_put_meminfo" },
	{ 0x98cf60b3, "strlen" },
	{ 0xbde9b7ce, "from_kuid_munged" },
	{ 0xff01a355, "sock_diag_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x90b12795, "sock_i_ino" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0xa77970b8, "sock_diag_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcd279169, "nla_find" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8b0ec15d, "nla_reserve_64bit" },
	{ 0xf665f74f, "sock_load_diag_module" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa9cd904b, "sock_diag_unregister_inet_compat" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xd18e89ab, "inet6_lookup" },
	{ 0x477d739e, "sock_gen_put" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x312d714d, "sock_diag_check_cookie" },
	{ 0x1ceec852, "sock_diag_save_cookie" },
	{ 0x54c4f36b, "__inet_lookup_listener" },
	{ 0x253625e9, "sock_diag_register_inet_compat" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0xb9a56c02, "sock_i_uid" },
	{ 0x434cff16, "__netlink_dump_start" },
	{ 0x12366cf, "netlink_net_capable" },
	{ 0x5f8aa6be, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7B613E0DC44B9C115592F3C");
