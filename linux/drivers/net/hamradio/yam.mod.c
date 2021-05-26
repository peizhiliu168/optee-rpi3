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
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x21ae7992, "proc_create_seq_private" },
	{ 0xc815530c, "init_net" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x2cd86719, "consume_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x5682f894, "platform_device_register_full" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe39bff89, "ax25_ip_xmit" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x24d273d1, "add_timer" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x8ca7ba2c, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "19DD65839C12BB08965D8E7");
