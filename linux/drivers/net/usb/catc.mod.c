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
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BA5A7A34D39E81F002254C9");
