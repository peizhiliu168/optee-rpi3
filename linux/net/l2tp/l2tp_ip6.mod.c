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
	{ 0x9fa85f6c, "compat_ipv6_getsockopt" },
	{ 0xfcf5e4ce, "compat_ipv6_setsockopt" },
	{ 0x150d5845, "ipv6_getsockopt" },
	{ 0x81f6ee80, "ipv6_setsockopt" },
	{ 0x97aeaf1c, "l2tp_ioctl" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0xbe5a4aa8, "sock_common_recvmsg" },
	{ 0x159d1178, "inet_sendmsg" },
	{ 0x8bd7d4a5, "compat_sock_common_getsockopt" },
	{ 0x89379c8d, "compat_sock_common_setsockopt" },
	{ 0x5c5cff42, "sock_common_getsockopt" },
	{ 0x5feef142, "sock_common_setsockopt" },
	{ 0x5031d1f3, "inet_shutdown" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xce40e5de, "sock_gettstamp" },
	{ 0xc29a763e, "inet6_ioctl" },
	{ 0x80d80186, "datagram_poll" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x2b33e12a, "inet_dgram_connect" },
	{ 0x953d269d, "inet6_bind" },
	{ 0x89c51d1, "inet6_release" },
	{ 0x7649f640, "inet6_del_protocol" },
	{ 0x7844efd1, "inet6_unregister_protosw" },
	{ 0x42526a1, "inet6_register_protosw" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xe8b71420, "inet6_add_protocol" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0xc5850110, "printk" },
	{ 0xbacabd19, "__fl6_sock_lookup" },
	{ 0xec91709, "ip6_push_pending_frames" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xf9abf4bc, "ip6_dst_hoplimit" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0xb0c348d9, "ip6_datagram_send_ctl" },
	{ 0xc944ae01, "dst_release" },
	{ 0x3d6d745a, "ip6_append_data" },
	{ 0x25644b79, "ip_generic_getfrag" },
	{ 0x698ddc73, "ip6_dst_lookup_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0x9578fca4, "fl6_merge_options" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x427e4478, "sk_free" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xd11327cb, "__sk_receive_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x4de75aa5, "__xfrm_policy_check" },
	{ 0x789b3fa7, "l2tp_session_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1eb9b3ec, "l2tp_recv_common" },
	{ 0xc07c234c, "l2tp_session_get" },
	{ 0x83bd53a5, "sk_common_release" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x43a55b8b, "sock_queue_rcv_skb" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb261e6ef, "ipv6_chk_addr" },
	{ 0x21fab3ca, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xde6f81f, "__ip6_datagram_connect" },
	{ 0x1bb02920, "__udp_disconnect" },
	{ 0x6e3264b7, "inet6_destroy_sock" },
	{ 0xf3519e02, "l2tp_tunnel_delete" },
	{ 0x9d0602bf, "release_sock" },
	{ 0x7793fba8, "ip6_flush_pending_frames" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x91f2c68f, "__sock_recv_wifi_status" },
	{ 0xc72e64dd, "ip6_datagram_recv_ctl" },
	{ 0x59961440, "__sock_recv_timestamp" },
	{ 0x6867c232, "ipv6_recv_error" },
	{ 0xb89c42c2, "skb_free_datagram" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ipv6,l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "23763C14F1D2E93A05CFBB6");
