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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xa733650f, "netlink_has_listeners" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xafe6af19, "nlmsg_notify" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6e622ebb, "netlink_kernel_release" },
	{ 0xb3ccbbc2, "netlink_rcv_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x5bee7acd, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x3c46da01, "netlink_ack" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x61221768, "netlink_set_err" },
	{ 0x19315baa, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x12366cf, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "39F861964563C9FDFFC98DE");
