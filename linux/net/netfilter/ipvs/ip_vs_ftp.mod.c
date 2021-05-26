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
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x669fe96d, "param_ops_ushort" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x80220bd8, "ip_vs_conn_in_get" },
	{ 0xf4fe9b3a, "skb_ensure_writable" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x899329c8, "ip_vs_conn_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d873b96, "ip_vs_nfct_expect_related" },
	{ 0xcb8830bc, "__nf_nat_mangle_tcp_packet" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4cfee918, "ip_vs_conn_put" },
	{ 0xb7996ec4, "ip_vs_tcp_conn_listen" },
	{ 0xa82eb427, "ip_vs_conn_out_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xc5850110, "printk" },
	{ 0x7b793db0, "register_ip_vs_app_inc" },
	{ 0x69a750a1, "register_ip_vs_app" },
	{ 0xecd59267, "unregister_ip_vs_app" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "4625A1061038DA4191556E9");
