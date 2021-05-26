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
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7954ed30, "ipv6_skip_exthdr" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc944ae01, "dst_release" },
	{ 0xc3cd7287, "nf_route" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x99cfb896, "skb_put" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x859f350e, "inet_proto_csum_replace4" },
	{ 0xf4fe9b3a, "skb_ensure_writable" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "A7D727BC28D99608B33F6BC");
