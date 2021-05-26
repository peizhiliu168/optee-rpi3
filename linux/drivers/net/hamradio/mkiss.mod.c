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
	{ 0x23159f18, "tty_register_ldisc" },
	{ 0x52f752c1, "tty_chars_in_buffer" },
	{ 0xe39bff89, "ax25_ip_xmit" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x781f1afb, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdcb764ad, "memset" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbd6841d4, "crc16" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x37a68b2a, "tty_unthrottle" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x4ccd378a, "_raw_write_unlock_irq" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc5850110, "printk" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x890d97d, "tty_driver_flush_buffer" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb1e91d54, "netif_schedule_queue" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x29361773, "complete" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x8ca7ba2c, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "D30613825BD448E41B9B235");
