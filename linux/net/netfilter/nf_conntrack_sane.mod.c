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
	{ 0xc5850110, "printk" },
	{ 0xdf2abad, "nf_conntrack_helpers_register" },
	{ 0x19c2107e, "nf_ct_helper_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xa19fd42c, "nf_conntrack_helpers_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe52e06f0, "nf_ct_helper_log" },
	{ 0xa7e86960, "nf_ct_expect_put" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0xa480866c, "nf_ct_expect_init" },
	{ 0xa34d66f3, "nf_ct_expect_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "C9D461C8140818DAE8609B0");
