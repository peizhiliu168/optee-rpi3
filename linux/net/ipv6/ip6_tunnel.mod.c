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
	{ 0xc8c36840, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xe27b8379, "icmpv6_send" },
	{ 0x7aedefdf, "xfrm6_tunnel_deregister" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc944ae01, "dst_release" },
	{ 0x7ab58541, "metadata_dst_alloc" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x4fd143c5, "dst_cache_set_ip6" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x1e5cdf5b, "skb_set_owner_w" },
	{ 0x5eaa01ed, "neigh_destroy" },
	{ 0xd7ae1f2a, "__icmp_send" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a24a078, "skb_realloc_headroom" },
	{ 0x92588d10, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x6246b814, "ip6_redirect" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xdf38e6ec, "__iptunnel_pull_header" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0x86cd0af0, "dst_cache_get" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x300d2bf8, "gro_cells_receive" },
	{ 0x21fab3ca, "dev_get_by_index_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xab28b2ac, "ipv6_dev_get_saddr" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x20ed1506, "ip_route_input_noref" },
	{ 0xb2becd0b, "ipv6_chk_addr_and_flags" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xf6a849e5, "ip6_route_output_flags" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0xf3509719, "__get_hash_from_flowi6" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x477023c1, "ip6_update_pmtu" },
	{ 0x4a1309cc, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xf885df2a, "iptunnel_handle_offloads" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6ee874e7, "gro_cells_init" },
	{ 0x4de75aa5, "__xfrm_policy_check" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x9fa56520, "rt6_lookup" },
	{ 0xd3ab7b5a, "ip6tun_encaps" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xa5bab0b7, "ip6_local_out" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xf9abf4bc, "ip6_dst_hoplimit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x80451e40, "xfrm6_tunnel_register" },
	{ 0xe32b8232, "xfrm_lookup" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4b1287a9, "ipv6_push_frag_opts" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "EC003C15B9FF5168041CFF4");
