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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0x5b9c946a, "sockfd_lookup" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xf31f4d3e, "udp6_set_csum" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xbc011301, "sock_release" },
	{ 0xc944ae01, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2a04d77d, "sock_create_kern" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x528b3178, "inet6_csk_xmit" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd60b04a1, "udp_sock_create6" },
	{ 0xe8a92a93, "setup_udp_tunnel_sock" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x5eb830e8, "kernel_connect" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0x531cc27a, "__ip_queue_xmit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5dcedb23, "kernel_sock_shutdown" },
	{ 0x427e4478, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4260eb07, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2f9f290c, "udp_set_csum" },
	{ 0xbdb8229c, "kernel_bind" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xe4891b12, "udp_sock_create4" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "ipv6,ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "30C1B90993BD3EF29F6894D");
