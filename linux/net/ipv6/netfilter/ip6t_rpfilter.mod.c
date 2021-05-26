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
	{ 0x1c6c31e8, "xt_unregister_match" },
	{ 0xb6afe7ec, "xt_register_match" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc944ae01, "dst_release" },
	{ 0x60c81ee3, "l3mdev_master_ifindex_rcu" },
	{ 0xeedb8a42, "ip6_route_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables,ipv6");


MODULE_INFO(srcversion, "1842A0AEAEA37EF3566D01C");
