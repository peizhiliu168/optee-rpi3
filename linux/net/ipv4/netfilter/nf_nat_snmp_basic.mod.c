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
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x30c55569, "nf_conntrack_helper_register" },
	{ 0x7503229d, "nf_conntrack_helper_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xf4fe9b3a, "skb_ensure_writable" },
	{ 0xe0439f14, "nf_nat_snmp_hook" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe52e06f0, "nf_ct_helper_log" },
	{ 0xe113bbbc, "csum_partial" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_snmp");


MODULE_INFO(srcversion, "B44525A3329588C447CB261");
