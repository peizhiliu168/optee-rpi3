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
	{ 0xe27b8379, "icmpv6_send" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xca16c9eb, "inet_frag_kill" },
	{ 0xd3579c0d, "pskb_trim_rcsum_slow" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0xc944ae01, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x3e7dac49, "fqdir_exit" },
	{ 0x8b602cf4, "inet_frag_find" },
	{ 0x61447210, "inet_frag_reasm_prepare" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xb2a2f3ee, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x394d6872, "inet_frags_fini" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x21fab3ca, "dev_get_by_index_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc815530c, "init_net" },
	{ 0x5a405456, "fqdir_init" },
	{ 0xe42eeb37, "nf_register_net_hooks" },
	{ 0xcfa63328, "inet_frag_reasm_finish" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x3175b3cf, "inet_frag_destroy" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ca48fd1, "inet_frag_pull_head" },
	{ 0x9bb26de6, "inet_frags_init" },
	{ 0xbec87d89, "inet_frag_queue_insert" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xaf7db5d1, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x481c66fc, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "529E0694C49601ED89FB521");
