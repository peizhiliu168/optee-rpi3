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
	{ 0x2626f206, "xfrm_input" },
	{ 0x8085135f, "xfrm4_rcv" },
	{ 0x3d8e98dc, "ipcomp_output" },
	{ 0xa5d15d28, "ipcomp_input" },
	{ 0xe0543e27, "ipcomp_destroy" },
	{ 0xfcb4794e, "xfrm4_protocol_deregister" },
	{ 0xd8465196, "xfrm_unregister_type" },
	{ 0x81b3016c, "xfrm4_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0x3908a997, "xfrm_register_type" },
	{ 0x44f42abd, "ipv4_update_pmtu" },
	{ 0xaf01a92c, "ipv4_redirect" },
	{ 0x62b83a79, "__xfrm_state_destroy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x76c8ca12, "xfrm_state_insert" },
	{ 0xa359042b, "xfrm_init_state" },
	{ 0xa8f214d2, "xfrm_state_alloc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xae7d6b97, "xfrm_state_lookup" },
	{ 0xe366a8a9, "ipcomp_init_state" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "xfrm_ipcomp");


MODULE_INFO(srcversion, "0951BE07630704C8C1376DE");
