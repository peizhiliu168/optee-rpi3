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
	{ 0x789b3fa7, "l2tp_session_free" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeece7d42, "l2tp_tunnel_get_nth" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xeca1aa47, "genl_register_family" },
	{ 0x935c2f42, "l2tp_tunnel_get_session" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6e3ec2ae, "l2tp_tunnel_free" },
	{ 0x909aa57c, "genl_unregister_family" },
	{ 0xef29a40e, "l2tp_tunnel_register" },
	{ 0x25087745, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6ee94ecd, "l2tp_tunnel_create" },
	{ 0x7c9417a0, "l2tp_tunnel_get" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xa4e4965e, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0xcbb9fd2e, "l2tp_session_get_by_ifname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xa328010, "genlmsg_multicast_allns" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb629393, "genlmsg_put" },
	{ 0xf3519e02, "l2tp_tunnel_delete" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14ec9e9f, "l2tp_session_set_header_len" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "0C4AD0ACD0CEB9DC5BCAD84");
