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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x97fe5e26, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x79d4ec46, "dev_add_pack" },
	{ 0x21ae7992, "proc_create_seq_private" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xc8c36840, "register_netdevice" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x55347883, "dev_close" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc5850110, "printk" },
	{ 0xe39bff89, "ax25_ip_xmit" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xab423eb0, "skb_clone" },
	{ 0x9553ca85, "netif_rx" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x25087745, "skb_trim" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xc815530c, "init_net" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8ca7ba2c, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "E466A10726C58CAE0A8451C");
