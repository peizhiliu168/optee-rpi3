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
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc5850110, "printk" },
	{ 0xace43d77, "l2tp_nl_register_ops" },
	{ 0x2928635b, "__skb_ext_del" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x3632de, "dev_forward_skb" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x5853519d, "l2tp_xmit_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x789b3fa7, "l2tp_session_free" },
	{ 0xa465fbe9, "l2tp_session_delete" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xc944ae01, "dst_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x85ccf583, "__module_get" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xc8c36840, "register_netdevice" },
	{ 0x662d6eb, "l2tp_session_register" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x9d0602bf, "release_sock" },
	{ 0x1adcb30e, "kernel_sock_ip_overhead" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0xf5a8f166, "l2tp_session_create" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5bee7acd, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x162e3cb3, "ether_setup" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "52DA3923CA63FF798CEC380");
