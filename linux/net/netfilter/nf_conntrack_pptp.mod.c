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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x69ef5c17, "nf_ct_unexpect_related" },
	{ 0x30c55569, "nf_conntrack_helper_register" },
	{ 0xa4e2172d, "nf_ct_gre_keymap_add" },
	{ 0x7503229d, "nf_conntrack_helper_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa480866c, "nf_ct_expect_init" },
	{ 0xdeed3fd4, "nf_ct_delete" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xc56165bb, "nf_ct_expect_find_get" },
	{ 0xa7e86960, "nf_ct_expect_put" },
	{ 0xa34d66f3, "nf_ct_expect_alloc" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0xa37ba5ef, "nf_ct_gre_keymap_destroy" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xd9c09bcd, "nf_conntrack_find_get" },
	{ 0x45fdf7dc, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "AEED208630413F2054480D8");
