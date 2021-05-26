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
	{ 0x44a2b3a6, "xt_unregister_target" },
	{ 0xd4984feb, "xt_register_targets" },
	{ 0x4f7eab80, "xt_register_target" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6df6b336, "nf_ct_helper_ext_add" },
	{ 0x4592eab0, "nf_conntrack_helper_try_module_get" },
	{ 0xa916b694, "strnlen" },
	{ 0x45fdf7dc, "nf_ct_ext_add" },
	{ 0x71a8cc22, "nf_ct_tmpl_free" },
	{ 0xcdf91aa8, "nf_ct_tmpl_alloc" },
	{ 0xa5819fc3, "nf_ct_netns_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xabb134f6, "nf_ct_netns_put" },
	{ 0x9a9cc3b7, "nf_conntrack_helper_put" },
	{ 0xc5850110, "printk" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "7D4AFAF6904113AA04ED85D");
