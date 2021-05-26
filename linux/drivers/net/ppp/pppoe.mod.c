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
	{ 0x286208d4, "sock_no_getsockopt" },
	{ 0x212daac9, "sock_no_setsockopt" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0x9eac5d81, "pppox_compat_ioctl" },
	{ 0xa140665a, "pppox_ioctl" },
	{ 0x80d80186, "datagram_poll" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x7c94bf92, "sock_no_bind" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x97fe5e26, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x79d4ec46, "dev_add_pack" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xc034cae1, "register_pppox_proto" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0x46c503b1, "ppp_register_net_channel" },
	{ 0x29a09ee6, "dev_get_by_name" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x1a65029d, "pppox_unbind_sock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd3579c0d, "pskb_trim_rcsum_slow" },
	{ 0xd11327cb, "__sk_receive_skb" },
	{ 0x4ad9695e, "skb_pull_rcsum" },
	{ 0x558e4b9f, "ppp_input" },
	{ 0x43a55b8b, "sock_queue_rcv_skb" },
	{ 0x2beb8682, "dev_get_by_name_rcu" },
	{ 0x6cd078bb, "proc_create_net_data" },
	{ 0x427e4478, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xab423eb0, "skb_clone" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x9d0602bf, "release_sock" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x99cfb896, "skb_put" },
	{ 0x28d1efef, "sock_wmalloc" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xcb64a971, "skb_copy_datagram_iter" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "pppox,ppp_generic");


MODULE_INFO(srcversion, "C5102176E4C284535947129");
