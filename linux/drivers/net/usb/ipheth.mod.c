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
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x8b0ae6e8, "netif_tx_stop_all_queues" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xb3622408, "usb_altnum_to_altsetting" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
	{ 0x9553ca85, "netif_rx" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4829a47e, "memcpy" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "CDE0E520FDE6798B0EBF396");
