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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x13f844f6, "nd_tbl" },
	{ 0xb576399b, "inet_select_addr" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x698ddc73, "ip6_dst_lookup_flow" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x97d142d, "nf_hook_slow" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x42f55459, "ip6_dst_alloc" },
	{ 0xf5476fa6, "fib6_new_table" },
	{ 0x88bc8d2f, "rt_dst_alloc" },
	{ 0x3f2a0758, "fib_new_table" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc944ae01, "dst_release" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7a59ae6e, "ipv6_stub" },
	{ 0xf2ab4d6a, "__neigh_create" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1e5cdf5b, "skb_set_owner_w" },
	{ 0x2a24a078, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xabd0f7b5, "arp_tbl" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x87663cf5, "dev_queue_xmit_nit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc8c36840, "register_netdevice" },
	{ 0x132307de, "netdev_master_upper_dev_link" },
	{ 0xc2a6c5dc, "netdev_master_upper_dev_get" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x30776d3e, "netdev_lower_get_next" },
	{ 0x7f0e42d4, "netdev_upper_dev_unlink" },
	{ 0x126033ef, "netdev_err" },
	{ 0x49077ce9, "dev_change_flags" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xd920db8e, "ip6_pol_route" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd58a49c4, "fib_nl_delrule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xcdbbe18, "fib_nl_newrule" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "FB8B3E01882AB610DA97401");
