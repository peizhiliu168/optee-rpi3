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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1747cc75, "iptun_encaps" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc944ae01, "dst_release" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc06542c4, "dst_cache_get_ip4" },
	{ 0x5eaa01ed, "neigh_destroy" },
	{ 0xd7ae1f2a, "__icmp_send" },
	{ 0x92588d10, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf337059c, "iptunnel_xmit" },
	{ 0x300d2bf8, "gro_cells_receive" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc815530c, "init_net" },
	{ 0xdc9ec6e3, "__skb_get_hash" },
	{ 0x82d149cb, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x4a1309cc, "netdev_state_change" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6ee874e7, "gro_cells_init" },
	{ 0x9cdfb3f7, "sysctl_fb_tunnels_only_for_init_net" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3f98817, "dst_cache_set_ip4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe268b1bf, "dev_set_mtu" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "610DB4030B2815320D45496");
