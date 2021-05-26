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
	{ 0x7b712f1a, "xt_unregister_matches" },
	{ 0xc66de8bf, "xt_register_matches" },
	{ 0xe39045f3, "nf_sk_lookup_slow_v4" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf742d095, "nf_defrag_ipv6_enable" },
	{ 0x84d65965, "nf_defrag_ipv4_enable" },
	{ 0x477d739e, "sock_gen_put" },
	{ 0x64f7e49a, "nf_sk_lookup_slow_v6" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables,nf_socket_ipv4,nf_defrag_ipv6,nf_defrag_ipv4,nf_socket_ipv6");


MODULE_INFO(srcversion, "737B54582F44E4F3FF50FAC");
