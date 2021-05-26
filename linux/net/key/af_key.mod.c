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
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0x286208d4, "sock_no_getsockopt" },
	{ 0x212daac9, "sock_no_setsockopt" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xab090f50, "sock_no_ioctl" },
	{ 0x80d80186, "datagram_poll" },
	{ 0xeea11058, "sock_no_getname" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x4d353002, "sock_no_connect" },
	{ 0x7c94bf92, "sock_no_bind" },
	{ 0xbacb8c0d, "xfrm_register_km" },
	{ 0x4528f305, "sock_register" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x23821810, "xfrm_unregister_km" },
	{ 0xee5ff93c, "xfrm_audit_policy_add" },
	{ 0xff2aeb6b, "xfrm_policy_insert" },
	{ 0x561a582e, "xfrm_policy_alloc" },
	{ 0xed988836, "xfrm_policy_bysel_ctx" },
	{ 0x2bfa6f3c, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0xb12c4d32, "xfrm_find_acq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xde8f8124, "xfrm_find_acq_byseq" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0x52b07875, "skb_copy" },
	{ 0x2782b393, "xfrm_state_walk_init" },
	{ 0x79f872f9, "__sock_recv_ts_and_drops" },
	{ 0xb89c42c2, "skb_free_datagram" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x1cdc9500, "xfrm_policy_destroy" },
	{ 0x67c06b98, "xfrm_audit_policy_delete" },
	{ 0x874b19a7, "xfrm_policy_byid" },
	{ 0x626d04ba, "xfrm_state_flush" },
	{ 0xafb651da, "km_policy_notify" },
	{ 0x1b954f34, "xfrm_policy_flush" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xe2daf9e0, "sock_rfree" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x85de8b45, "xfrm_state_delete" },
	{ 0x69b3e24, "xfrm_audit_state_delete" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x315aa1fa, "xfrm_state_add" },
	{ 0x62b83a79, "__xfrm_state_destroy" },
	{ 0x86b8cc15, "km_state_notify" },
	{ 0x10a26f3b, "xfrm_audit_state_add" },
	{ 0x286c9596, "xfrm_state_update" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa359042b, "xfrm_init_state" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa8f214d2, "xfrm_state_alloc" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xc5850110, "printk" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0xae7d6b97, "xfrm_state_lookup" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdcb764ad, "memset" },
	{ 0x99cfb896, "skb_put" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x90b12795, "sock_i_ino" },
	{ 0xbde9b7ce, "from_kuid_munged" },
	{ 0xb9a56c02, "sock_i_uid" },
	{ 0x6cd078bb, "proc_create_net_data" },
	{ 0x427e4478, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6618286e, "xfrm_state_walk" },
	{ 0xeb079134, "xfrm_state_walk_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b3980e9, "xfrm_policy_walk_done" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0xcd5263b4, "xfrm_policy_walk" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "47C977A73B5D8B4E48836E1");
