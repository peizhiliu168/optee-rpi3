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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0xf88555b, "ip_tunnel_get_stats64" },
	{ 0x83e355db, "ip_tunnel_get_iflink" },
	{ 0xc944ae01, "dst_release" },
	{ 0x7ab58541, "metadata_dst_alloc" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x44f42abd, "ipv4_update_pmtu" },
	{ 0xad294abd, "ip_tunnel_lookup" },
	{ 0xb25990d, "__ip_tunnel_change_mtu" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xd7ae1f2a, "__icmp_send" },
	{ 0x4be56cb4, "ip_tunnel_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xdf38e6ec, "__iptunnel_pull_header" },
	{ 0xf114a300, "ip_tunnel_setup" },
	{ 0x26b57fcc, "ip_tunnel_dellink" },
	{ 0xdcb764ad, "memset" },
	{ 0x5831d6e, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xe2b24180, "ip_tunnel_delete_nets" },
	{ 0x58bf6486, "gre_add_protocol" },
	{ 0x1a30f420, "ip_tunnel_newlink" },
	{ 0xc5850110, "printk" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0xb5fc0f0a, "ip_tunnel_uninit" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xba0c006a, "gre_del_protocol" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x602d3761, "ip_tunnel_init" },
	{ 0xc80e901, "ip_tunnel_get_link_net" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xdc9ec6e3, "__skb_get_hash" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0x496cce81, "ip_tunnel_ioctl" },
	{ 0x62ff6d63, "ip_md_tunnel_xmit" },
	{ 0x8e45ee07, "ip_tunnel_changelink" },
	{ 0xae88244a, "rtnl_configure_link" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xaf01a92c, "ipv4_redirect" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0x88822175, "ip_tunnel_init_net" },
	{ 0xf885df2a, "iptunnel_handle_offloads" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0xb2e0778e, "rtnl_create_link" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0xf06b0b54, "ip6_err_gen_icmpv6_unreach" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb754ca92, "___pskb_trim" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x7a6be17, "ip_tunnel_encap_setup" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x1dbb488b, "ip_tunnel_change_mtu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0xb272cc21, "gre_parse_header" },
	{ 0x2e3c6d8a, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre,ipv6");


MODULE_INFO(srcversion, "456546FFDF3DE62898B566E");
