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
	{ 0x26b57fcc, "ip_tunnel_dellink" },
	{ 0x83e355db, "ip_tunnel_get_iflink" },
	{ 0xf88555b, "ip_tunnel_get_stats64" },
	{ 0x1dbb488b, "ip_tunnel_change_mtu" },
	{ 0xb5fc0f0a, "ip_tunnel_uninit" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0xf4fb2676, "xfrm4_tunnel_deregister" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x7f54f17b, "xfrm4_tunnel_register" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x496cce81, "ip_tunnel_ioctl" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4de75aa5, "__xfrm_policy_check" },
	{ 0x2e3c6d8a, "ip_tunnel_rcv" },
	{ 0x7ab58541, "metadata_dst_alloc" },
	{ 0xdf38e6ec, "__iptunnel_pull_header" },
	{ 0x88822175, "ip_tunnel_init_net" },
	{ 0xe2b24180, "ip_tunnel_delete_nets" },
	{ 0xaf01a92c, "ipv4_redirect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x44f42abd, "ipv4_update_pmtu" },
	{ 0xad294abd, "ip_tunnel_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x602d3761, "ip_tunnel_init" },
	{ 0x4be56cb4, "ip_tunnel_xmit" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x62ff6d63, "ip_md_tunnel_xmit" },
	{ 0xf885df2a, "iptunnel_handle_offloads" },
	{ 0xf114a300, "ip_tunnel_setup" },
	{ 0x1a30f420, "ip_tunnel_newlink" },
	{ 0x8e45ee07, "ip_tunnel_changelink" },
	{ 0x7a6be17, "ip_tunnel_encap_setup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "55E70B4184606B39B33BD93");
