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
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0x604c74cd, "nft_unregister_obj" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0x42cd5da6, "nft_register_obj" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x760a4025, "nf_ct_get_tuplepr" },
	{ 0x88458977, "nf_conncount_add" },
	{ 0xa5819fc3, "nf_ct_netns_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x8c4cb9c3, "nf_conncount_list_init" },
	{ 0xabb134f6, "nf_ct_netns_put" },
	{ 0x3ff55ad3, "nf_conncount_cache_free" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x482f803d, "nf_conncount_gc_list" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_conncount");


MODULE_INFO(srcversion, "D7E725394B22DA331E74722");
