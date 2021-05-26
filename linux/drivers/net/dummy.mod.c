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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xbba2b2fc, "ethtool_op_get_ts_info" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xc8c36840, "register_netdevice" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x28bcb54d, "__rtnl_link_unregister" },
	{ 0x3818cd67, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x4f25db23, "skb_tstamp_tx" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8F7329D4C6C1036EB140F20");
