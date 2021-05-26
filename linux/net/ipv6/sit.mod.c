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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xc80e901, "ip_tunnel_get_link_net" },
	{ 0x83e355db, "ip_tunnel_get_iflink" },
	{ 0xf88555b, "ip_tunnel_get_stats64" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x7f54f17b, "xfrm4_tunnel_register" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0xf4fb2676, "xfrm4_tunnel_deregister" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0x7a6be17, "ip_tunnel_encap_setup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xc8c36840, "register_netdevice" },
	{ 0xe27b8379, "icmpv6_send" },
	{ 0x3f98817, "dst_cache_set_ip4" },
	{ 0xf337059c, "iptunnel_xmit" },
	{ 0x1747cc75, "iptun_encaps" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1e5cdf5b, "skb_set_owner_w" },
	{ 0x2a24a078, "skb_realloc_headroom" },
	{ 0xc06542c4, "dst_cache_get_ip4" },
	{ 0x5eaa01ed, "neigh_destroy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xf46b87da, "ipv6_chk_custom_prefix" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x21acc456, "ipv6_chk_prefix" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x4a1309cc, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x82d149cb, "__dev_get_by_index" },
	{ 0xc944ae01, "dst_release" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0x4de75aa5, "__xfrm_policy_check" },
	{ 0x2e3c6d8a, "ip_tunnel_rcv" },
	{ 0xdf38e6ec, "__iptunnel_pull_header" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4be56cb4, "ip_tunnel_xmit" },
	{ 0xf885df2a, "iptunnel_handle_offloads" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0xc815530c, "init_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaf01a92c, "ipv4_redirect" },
	{ 0xf06b0b54, "ip6_err_gen_icmpv6_unreach" },
	{ 0x44f42abd, "ipv4_update_pmtu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4,ipv6");


MODULE_INFO(srcversion, "880A85411CC75D53DC091D2");
