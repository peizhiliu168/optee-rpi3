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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xbd9eba19, "can_rx_register" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x212daac9, "sock_no_setsockopt" },
	{ 0x286208d4, "sock_no_getsockopt" },
	{ 0xce40e5de, "sock_gettstamp" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xefeb32f1, "can_proto_unregister" },
	{ 0xeb39e5ad, "proc_create_net_single" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xeea11058, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x43a55b8b, "sock_queue_rcv_skb" },
	{ 0x7fe689c2, "skb_recv_datagram" },
	{ 0x90b12795, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0xdf6f93e, "PDE_DATA" },
	{ 0xd5c090de, "sock_efree" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x7c94bf92, "sock_no_bind" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xb27d1e7f, "proc_mkdir_data" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x21fab3ca, "dev_get_by_index_rcu" },
	{ 0x427e4478, "sk_free" },
	{ 0x279fd21d, "dev_get_by_index" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x9c74e8f9, "can_send" },
	{ 0x79f872f9, "__sock_recv_ts_and_drops" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x80d80186, "datagram_poll" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x1047bf0, "can_proto_register" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x65ee4f92, "can_rx_unregister" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x99cfb896, "skb_put" },
	{ 0xdcddd379, "_copy_to_iter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb89c42c2, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "43A766B5E768811CA7701A5");
