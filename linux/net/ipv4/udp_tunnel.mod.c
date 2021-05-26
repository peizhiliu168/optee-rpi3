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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xbc011301, "sock_release" },
	{ 0x7ab58541, "metadata_dst_alloc" },
	{ 0x2a04d77d, "sock_create_kern" },
	{ 0x275ffe03, "kernel_setsockopt" },
	{ 0x5eb830e8, "kernel_connect" },
	{ 0xf337059c, "iptunnel_xmit" },
	{ 0x5dcedb23, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7a59ae6e, "ipv6_stub" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2f9f290c, "udp_set_csum" },
	{ 0xbdb8229c, "kernel_bind" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A315BA6124B0664F4D23FB");
