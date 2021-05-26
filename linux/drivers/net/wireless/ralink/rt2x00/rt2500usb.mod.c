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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x563cafa3, "rt2x00usb_resume" },
	{ 0xe34b2ccf, "rt2x00usb_suspend" },
	{ 0x9d2216f7, "rt2x00usb_disconnect" },
	{ 0x63b79fa3, "rt2x00mac_tx_frames_pending" },
	{ 0xd1806f5, "rt2x00mac_get_ringparam" },
	{ 0xc009b764, "rt2x00mac_get_antenna" },
	{ 0x9cf676a4, "rt2x00mac_set_antenna" },
	{ 0x5b2f54d3, "rt2x00mac_flush" },
	{ 0x881fbbbc, "rt2x00mac_rfkill_poll" },
	{ 0x7e9c8ea5, "rt2x00mac_conf_tx" },
	{ 0x4af18b00, "rt2x00mac_get_stats" },
	{ 0xceb91c56, "rt2x00mac_sw_scan_complete" },
	{ 0xf5d99281, "rt2x00mac_sw_scan_start" },
	{ 0xd3ea0f5b, "rt2x00mac_set_key" },
	{ 0x138b123a, "rt2x00mac_set_tim" },
	{ 0x3fe88595, "rt2x00mac_configure_filter" },
	{ 0xfccf78b0, "rt2x00mac_bss_info_changed" },
	{ 0xeca981f9, "rt2x00mac_config" },
	{ 0xc12bdfe3, "rt2x00mac_remove_interface" },
	{ 0x803608d0, "rt2x00mac_add_interface" },
	{ 0x112cd19e, "rt2x00mac_stop" },
	{ 0x19e850d1, "rt2x00mac_start" },
	{ 0x58c14986, "rt2x00mac_tx" },
	{ 0x4d2f7650, "rt2x00usb_flush_queue" },
	{ 0x7da1e501, "rt2x00usb_kick_queue" },
	{ 0x746dc5c4, "rt2x00usb_watchdog" },
	{ 0x498c8fc, "rt2x00usb_clear_entry" },
	{ 0x2b8f811d, "rt2x00usb_uninitialize" },
	{ 0x247a241a, "rt2x00usb_initialize" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x7ca099ed, "rt2x00lib_set_mac_address" },
	{ 0xb7e0a7a9, "rt2x00usb_disable_radio" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc0da67db, "rt2x00usb_vendor_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa9539110, "rt2x00usb_vendor_req_buff_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x25087745, "skb_trim" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xba57e454, "rt2x00usb_vendor_request_buff" },
	{ 0x6b91200, "rt2x00usb_probe" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "rt2x00usb,rt2x00lib");

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0C9B29288CE51AC926D77AF");
