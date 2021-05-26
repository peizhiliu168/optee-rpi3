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
	{ 0xf777be58, "sock_no_mmap" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0x9eac5d81, "pppox_compat_ioctl" },
	{ 0xa140665a, "pppox_ioctl" },
	{ 0x80d80186, "datagram_poll" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x7c94bf92, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xace43d77, "l2tp_nl_register_ops" },
	{ 0xc034cae1, "register_pppox_proto" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x14ec9e9f, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5853519d, "l2tp_xmit_skb" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x99cfb896, "skb_put" },
	{ 0x28d1efef, "sock_wmalloc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x1a65029d, "pppox_unbind_sock" },
	{ 0xa465fbe9, "l2tp_session_delete" },
	{ 0x46c503b1, "ppp_register_net_channel" },
	{ 0xc944ae01, "dst_release" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf3519e02, "l2tp_tunnel_delete" },
	{ 0x935c2f42, "l2tp_tunnel_get_session" },
	{ 0xef29a40e, "l2tp_tunnel_register" },
	{ 0x6ee94ecd, "l2tp_tunnel_create" },
	{ 0x7c9417a0, "l2tp_tunnel_get" },
	{ 0x9d0602bf, "release_sock" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0xbf194e31, "ppp_dev_name" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa4e4965e, "l2tp_session_get_nth" },
	{ 0x427e4478, "sk_free" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x789b3fa7, "l2tp_session_free" },
	{ 0x6e3ec2ae, "l2tp_tunnel_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xeece7d42, "l2tp_tunnel_get_nth" },
	{ 0xc5850110, "printk" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x43a55b8b, "sock_queue_rcv_skb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x558e4b9f, "ppp_input" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6cd078bb, "proc_create_net_data" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x2cbb2b1d, "l2tp_udp_encap_recv" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x662d6eb, "l2tp_session_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf5a8f166, "l2tp_session_create" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core,ppp_generic");


MODULE_INFO(srcversion, "50DD0EB8FFA2D8CD831B777");
