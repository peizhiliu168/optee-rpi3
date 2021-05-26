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
	{ 0x9561a2bb, "hci_recv_diag" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xdda74f7c, "hci_register_dev" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xca96e9cd, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14d6fd2b, "hci_recv_frame" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x9526a681, "hci_set_fw_info" },
	{ 0x718b8b7, "bt_info" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x68dab081, "__hci_cmd_sync" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xf10a24bc, "hci_free_dev" },
	{ 0x76a226fa, "hci_unregister_dev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7312D0036C6DFD3C9DD3B58");
