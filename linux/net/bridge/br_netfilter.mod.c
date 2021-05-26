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
	{ 0xd3579c0d, "pskb_trim_rcsum_slow" },
	{ 0xd58d51ff, "skb_ext_add" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa66ded4f, "ip_do_fragment" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc944ae01, "dst_release" },
	{ 0x2c7ac55c, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5eaa01ed, "neigh_destroy" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x97d142d, "nf_hook_slow" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x44479936, "br_dev_queue_push_xmit" },
	{ 0xc5850110, "printk" },
	{ 0xb2a2f3ee, "nf_unregister_net_hooks" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0x9c1fddb0, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x20ed1506, "ip_route_input_noref" },
	{ 0xeba3d5fb, "nf_ipv6_ops" },
	{ 0xe42eeb37, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4ad9695e, "skb_pull_rcsum" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfa353c2c, "nf_br_ops" },
	{ 0x2928635b, "__skb_ext_del" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x94afe6b, "br_handle_frame_finish" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xaf7db5d1, "register_net_sysctl" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "bridge,ipv6");


MODULE_INFO(srcversion, "041BAB90EEB7CF362FC3507");
