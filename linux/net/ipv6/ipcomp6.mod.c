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
	{ 0x87a09abe, "xfrm6_rcv" },
	{ 0xf669d7f1, "xfrm6_find_1stfragopt" },
	{ 0x3d8e98dc, "ipcomp_output" },
	{ 0xa5d15d28, "ipcomp_input" },
	{ 0xe0543e27, "ipcomp_destroy" },
	{ 0x9a714c12, "xfrm6_protocol_deregister" },
	{ 0xd8465196, "xfrm_unregister_type" },
	{ 0x2290bca5, "xfrm6_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0x3908a997, "xfrm_register_type" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x76c8ca12, "xfrm_state_insert" },
	{ 0xa359042b, "xfrm_init_state" },
	{ 0xf94597e6, "xfrm6_tunnel_alloc_spi" },
	{ 0xa8f214d2, "xfrm_state_alloc" },
	{ 0xa5695ca0, "xfrm6_tunnel_spi_lookup" },
	{ 0xe366a8a9, "ipcomp_init_state" },
	{ 0x62b83a79, "__xfrm_state_destroy" },
	{ 0x6246b814, "ip6_redirect" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x477023c1, "ip6_update_pmtu" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xae7d6b97, "xfrm_state_lookup" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ipv6,xfrm_ipcomp,xfrm6_tunnel");


MODULE_INFO(srcversion, "3FD06C69DE229434461DF73");
