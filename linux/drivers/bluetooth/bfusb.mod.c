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
	{ 0xdda74f7c, "hci_register_dev" },
	{ 0xca96e9cd, "hci_alloc_dev" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x93007c53, "skb_queue_head" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4829a47e, "memcpy" },
	{ 0x14d6fd2b, "hci_recv_frame" },
	{ 0x99cfb896, "skb_put" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xa356d9f3, "skb_unlink" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xf10a24bc, "hci_free_dev" },
	{ 0x76a226fa, "hci_unregister_dev" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3CF624B3F05A1D418436FDB");
