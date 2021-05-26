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
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x111c3b1e, "netif_device_attach" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x99cfb896, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8366596f, "netdev_notice" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4db09129, "__dev_kfree_skb_irq" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x31c82fc2, "netif_device_detach" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EF75BEEA55A90E4552B141B");
