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
	{ 0x681a9fe1, "dev_load" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xff0635f2, "dev_getbyhwaddr_rcu" },
	{ 0xce40e5de, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xc944ae01, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x29a09ee6, "dev_get_by_name" },
	{ 0xeea11058, "sock_no_getname" },
	{ 0x43a55b8b, "sock_queue_rcv_skb" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0x83bd53a5, "sk_common_release" },
	{ 0x89379c8d, "compat_sock_common_setsockopt" },
	{ 0xbe5a4aa8, "sock_common_recvmsg" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0x8bd7d4a5, "compat_sock_common_getsockopt" },
	{ 0xbdd2bc00, "ieee802154_hdr_pull" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x7c94bf92, "sock_no_bind" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xae5f1f14, "ns_capable" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0xee33254, "sock_prot_inuse_add" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x279fd21d, "dev_get_by_index" },
	{ 0x97fe5e26, "dev_remove_pack" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x79f872f9, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0xa8223179, "refcount_dec_checked" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x80d80186, "datagram_poll" },
	{ 0x4528f305, "sock_register" },
	{ 0x4e5f32c2, "dev_getfirstbyhwtype" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x3c4df0e8, "sock_alloc_send_skb" },
	{ 0x1d234956, "put_cmsg" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5feef142, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x5c5cff42, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x79d4ec46, "dev_add_pack" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb89c42c2, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "070FD355343982AE1C48C2A");
