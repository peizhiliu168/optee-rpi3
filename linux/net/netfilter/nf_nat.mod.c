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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf857095c, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0xbb533782, "nf_ct_kill_acct" },
	{ 0xc944ae01, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x859f350e, "inet_proto_csum_replace4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5397c6cc, "__skb_checksum" },
	{ 0xb15b4109, "crc32c" },
	{ 0x50160a69, "__put_net" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa3153d0f, "inet_proto_csum_replace16" },
	{ 0x5e31a28c, "nf_ct_iterate_destroy" },
	{ 0xc77c85d4, "nf_ip_checksum" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x5831d6e, "skb_checksum" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb576399b, "inet_select_addr" },
	{ 0xb2a2f3ee, "nf_unregister_net_hooks" },
	{ 0xf4fe9b3a, "skb_ensure_writable" },
	{ 0x53597d7, "nf_hook_entries_delete_raw" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa4b05a51, "ip_route_me_harder" },
	{ 0x2ef8c722, "nf_conntrack_alter_reply" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5bee7acd, "module_put" },
	{ 0xeba3d5fb, "nf_ipv6_ops" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xe42eeb37, "nf_register_net_hooks" },
	{ 0x7954ed30, "ipv6_skip_exthdr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x44cacd61, "nf_ct_iterate_cleanup_net" },
	{ 0xd25bc5d4, "csum_tcpudp_nofold" },
	{ 0x919008e4, "nf_conntrack_tuple_taken" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x619d4dc9, "nf_ct_extend_unregister" },
	{ 0x1870eb6a, "nf_ct_helper_expectfn_register" },
	{ 0xc7d388d3, "nf_ct_extend_register" },
	{ 0xe376cc74, "__xfrm_decode_session" },
	{ 0xc8fb2adc, "nf_ct_helper_expectfn_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x42a67d8, "nf_ct_seqadj_set" },
	{ 0xe32b8232, "xfrm_lookup" },
	{ 0xe8856a3c, "nf_hook_entries_insert_raw" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7b463332, "nf_ip6_checksum" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x4198ca95, "__do_once_done" },
	{ 0x45fdf7dc, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "5E2984B22B80221CC2F89DE");
