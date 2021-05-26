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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xbd9eba19, "can_rx_register" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x52b07875, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25087745, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xbadc39a7, "rtnl_register_module" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x82d149cb, "__dev_get_by_index" },
	{ 0x9c74e8f9, "can_send" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x909d9587, "netlink_capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4829a47e, "memcpy" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x65ee4f92, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "53431ACAE20BD3345A2CDF9");
