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
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x28bcb54d, "__rtnl_link_unregister" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xc8c36840, "register_netdevice" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x3818cd67, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xb0028e46, "netif_receive_skb" },
	{ 0x4ad9695e, "skb_pull_rcsum" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x21fab3ca, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a0cba, "kfree" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0x8b0ae6e8, "netif_tx_stop_all_queues" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A734F78712E8C29F996B503");
