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
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xc2c5802, "work_busy" },
	{ 0x4f25db23, "skb_tstamp_tx" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x111c3b1e, "netif_device_attach" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4a73db4b, "dev_set_mac_address" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xb2bd1f24, "skb_checksum_help" },
	{ 0xc8cf84af, "__skb_gso_segment" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x3670a1b8, "usb_autopm_get_interface_async" },
	{ 0xb1e91d54, "netif_schedule_queue" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xbefb941c, "usb_autopm_put_interface_async" },
	{ 0x8366596f, "netdev_notice" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8ca01852, "napi_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1d2ee0f4, "napi_complete_done" },
	{ 0x35daae0d, "skb_add_rx_frag" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x99cfb896, "skb_put" },
	{ 0xe1d17a02, "__napi_alloc_skb" },
	{ 0xd115d6f0, "napi_gro_receive" },
	{ 0xc27bd86c, "__napi_schedule" },
	{ 0x7ae03454, "napi_schedule_prep" },
	{ 0x31c82fc2, "netif_device_detach" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x26d5f526, "usb_enable_lpm" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x61fe4022, "usb_driver_set_configuration" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xd26a07c4, "netif_napi_add" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x126033ef, "netdev_err" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x6561ba51, "usb_queue_reset_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x90cb3a91, "mii_nway_restart" },
	{ 0xfc16b449, "mii_ethtool_get_link_ksettings" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "FA86E4C9EBDCC1E1B2DBB6F");
