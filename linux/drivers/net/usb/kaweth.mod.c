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
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6f0fd09c, "usb_reset_configuration" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x4db09129, "__dev_kfree_skb_irq" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x99cfb896, "skb_put" },
	{ 0x4829a47e, "memcpy" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v03E8p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p03E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p11F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E9p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C9pB010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v085Ap0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v087Dp5704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0951p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v095Ap3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10BDp1427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1342p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D2p0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1485p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1645p8005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4000d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "37FCC6F1DA21BDC750C3232");
