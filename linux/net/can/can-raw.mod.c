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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xbd9eba19, "can_rx_register" },
	{ 0xce40e5de, "sock_gettstamp" },
	{ 0xefeb32f1, "can_proto_unregister" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xab423eb0, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x43a55b8b, "sock_queue_rcv_skb" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0xdcb764ad, "memset" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0xc5850110, "printk" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0x427e4478, "sk_free" },
	{ 0x279fd21d, "dev_get_by_index" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x9c74e8f9, "can_send" },
	{ 0x79f872f9, "__sock_recv_ts_and_drops" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x80d80186, "datagram_poll" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x1047bf0, "can_proto_register" },
	{ 0x3c4df0e8, "sock_alloc_send_skb" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x4d353002, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x65ee4f92, "can_rx_unregister" },
	{ 0x99cfb896, "skb_put" },
	{ 0xdcddd379, "_copy_to_iter" },
	{ 0xb89c42c2, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "62AFAADAE2DE76135AEB15F");
