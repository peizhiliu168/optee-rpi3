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
	{ 0x69c407f6, "nf_log_unregister" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x2a0d84b9, "nf_log_register" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xaf6eb68a, "nf_log_dump_vlan" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0x7ae7e422, "nf_log_dump_packet_common" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xc815530c, "init_net" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d89726b, "nf_log_dump_udp_header" },
	{ 0x479874de, "nf_log_dump_sk_uid_gid" },
	{ 0x5d3b92b9, "nf_log_dump_tcp_header" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xd6b82264, "nf_log_set" },
	{ 0x805cb58b, "nf_log_unset" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "D6B7C38BF533052E0E5D435");
