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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x481d6c97, "flow_offload_free" },
	{ 0xc944ae01, "dst_release" },
	{ 0x3f1b1547, "flow_offload_add" },
	{ 0x92eda0eb, "flow_offload_alloc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc5a50a3c, "nf_flow_table_cleanup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc3cd7287, "nf_route" },
	{ 0xa5819fc3, "nf_ct_netns_get" },
	{ 0xf06f022f, "nft_flowtable_lookup" },
	{ 0x9e562fd, "nf_tables_deactivate_flowtable" },
	{ 0xabb134f6, "nf_ct_netns_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");


MODULE_INFO(srcversion, "8D31C01251845E41F9705E7");
