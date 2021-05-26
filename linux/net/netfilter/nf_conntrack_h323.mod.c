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
	{ 0xa5228762, "nf_ct_remove_expectations" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x69ef5c17, "nf_ct_unexpect_related" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x30c55569, "nf_conntrack_helper_register" },
	{ 0xd65bd301, "__nf_ct_refresh_acct" },
	{ 0x7503229d, "nf_conntrack_helper_unregister" },
	{ 0xc944ae01, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa480866c, "nf_ct_expect_init" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb18328d1, "nf_ip_route" },
	{ 0xdf2abad, "nf_conntrack_helpers_register" },
	{ 0xdcb764ad, "memset" },
	{ 0xa7e86960, "nf_ct_expect_put" },
	{ 0xa34d66f3, "nf_ct_expect_alloc" },
	{ 0xdffb746b, "nf_ct_expect_related_report" },
	{ 0xa19fd42c, "nf_conntrack_helpers_unregister" },
	{ 0xc8562d6d, "__nf_ct_expect_find" },
	{ 0xeba3d5fb, "nf_ipv6_ops" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe52e06f0, "nf_ct_helper_log" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x481c66fc, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "A5BC75D5FDF3ED009BF6294");
