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
	{ 0x9d0602bf, "release_sock" },
	{ 0x789b3fa7, "l2tp_session_free" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x169300c6, "ip_getsockopt" },
	{ 0x441c65a8, "ip_setsockopt" },
	{ 0x648861b7, "sk_setup_caps" },
	{ 0xce40e5de, "sock_gettstamp" },
	{ 0xc944ae01, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1eb9b3ec, "l2tp_recv_common" },
	{ 0x43a55b8b, "sock_queue_rcv_skb" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0x159d1178, "inet_sendmsg" },
	{ 0xee4c3510, "inet_del_protocol" },
	{ 0x83bd53a5, "sk_common_release" },
	{ 0x89379c8d, "compat_sock_common_setsockopt" },
	{ 0x2b33e12a, "inet_dgram_connect" },
	{ 0xbe5a4aa8, "sock_common_recvmsg" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0x8bd7d4a5, "compat_sock_common_getsockopt" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x628dd829, "compat_ip_getsockopt" },
	{ 0x91f2c68f, "__sock_recv_wifi_status" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xc5850110, "printk" },
	{ 0xabdd6d9d, "inet_addr_type" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0x531cc27a, "__ip_queue_xmit" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x427e4478, "sk_free" },
	{ 0x5031d1f3, "inet_shutdown" },
	{ 0xc7f22fa0, "inet_add_protocol" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x59961440, "__sock_recv_timestamp" },
	{ 0x18f5995e, "inet_ioctl" },
	{ 0xd11327cb, "__sk_receive_skb" },
	{ 0x8b072896, "ip_cmsg_recv_offset" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0xf533e0ea, "__sk_dst_check" },
	{ 0x29f32481, "inet_release" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x80d80186, "datagram_poll" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x7414333c, "compat_ip_setsockopt" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0x5feef142, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4de75aa5, "__xfrm_policy_check" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x463aed72, "inet_register_protosw" },
	{ 0x1bb02920, "__udp_disconnect" },
	{ 0xf3519e02, "l2tp_tunnel_delete" },
	{ 0x6f82b037, "inet_bind" },
	{ 0x5c5cff42, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xbc5177b7, "__ip4_datagram_connect" },
	{ 0x28d1efef, "sock_wmalloc" },
	{ 0xc07c234c, "l2tp_session_get" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x6dfe09f8, "inet_unregister_protosw" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb89c42c2, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "2A6F1C47095F0CB6065A320");
