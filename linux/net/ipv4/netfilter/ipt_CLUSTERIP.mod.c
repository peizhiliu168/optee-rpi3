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
	{ 0x457a3d90, "seq_read" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x44a2b3a6, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4f7eab80, "xt_register_target" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xcd6b74d8, "proc_create_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa5819fc3, "nf_ct_netns_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x29a09ee6, "dev_get_by_name" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xabb134f6, "nf_ct_netns_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x15a825d3, "seq_release" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7e894db6, "proc_mkdir" },
	{ 0x639f5d00, "nf_register_net_hook" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xdf6f93e, "PDE_DATA" },
	{ 0x5e498af, "seq_open" },
	{ 0xd3e23a83, "nf_unregister_net_hook" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbe112120, "proc_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xdefea55e, "dev_mc_add" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xbf2bd1d6, "dev_mc_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables,nf_conntrack");


MODULE_INFO(srcversion, "CE25B1F6189CD89DA7E9946");
