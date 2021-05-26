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
	{ 0x9d0602bf, "release_sock" },
	{ 0x46297dd0, "sctp_transport_lookup_process" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xfe0b4046, "inet_diag_unregister" },
	{ 0x56012254, "inet_diag_msg_attrs_fill" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0x8b0ec15d, "nla_reserve_64bit" },
	{ 0x6dd1228d, "inet_diag_msg_common_fill" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xb25489b8, "sctp_for_each_transport" },
	{ 0x312d714d, "sock_diag_check_cookie" },
	{ 0x1ceec852, "sock_diag_save_cookie" },
	{ 0xbd762514, "nla_reserve" },
	{ 0xaa1dee6a, "inet_diag_register" },
	{ 0xb01d38ca, "__nlmsg_put" },
	{ 0x2f643fb3, "sctp_get_sctp_info" },
	{ 0x3dfb6659, "sctp_for_each_endpoint" },
	{ 0x12366cf, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "E77C0C19E2DB0D042E35317");
