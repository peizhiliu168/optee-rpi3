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
	{ 0x7299044b, "xt_unregister_targets" },
	{ 0xd4984feb, "xt_register_targets" },
	{ 0xd5a8f46a, "nf_tproxy_handle_time_wait4" },
	{ 0xbed055fc, "nf_tproxy_laddr4" },
	{ 0x2db5574c, "nf_tproxy_get_sock_v4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x44b0333d, "nf_tproxy_handle_time_wait6" },
	{ 0xf39f7bfe, "sock_edemux" },
	{ 0x477d739e, "sock_gen_put" },
	{ 0xca02e549, "nf_tproxy_laddr6" },
	{ 0xf2d2a367, "nf_tproxy_get_sock_v6" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x13359ce0, "ipv6_find_hdr" },
	{ 0x84d65965, "nf_defrag_ipv4_enable" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf742d095, "nf_defrag_ipv6_enable" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables,nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "D7DB050158C2CB7B3B5305A");
