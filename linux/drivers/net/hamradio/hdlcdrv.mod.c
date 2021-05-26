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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe39bff89, "ax25_ip_xmit" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x4db09129, "__dev_kfree_skb_irq" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8ca7ba2c, "ax25_header_ops" },
};

MODULE_INFO(depends, "ax25,crc-ccitt");


MODULE_INFO(srcversion, "E632EFD23DD55EC1730B88D");
