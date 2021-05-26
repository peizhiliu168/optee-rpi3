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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x23159f18, "tty_register_ldisc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc83612df, "tty_mode_ioctl" },
	{ 0x24d273d1, "add_timer" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xc8c36840, "register_netdevice" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x55347883, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x4829a47e, "memcpy" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x48bdf939, "tty_hangup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc5850110, "printk" },
	{ 0x52f752c1, "tty_chars_in_buffer" },
	{ 0x781f1afb, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "slhc");


MODULE_INFO(srcversion, "10DFA6B2D989B92197EEC38");
