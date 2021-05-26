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
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x234efd3a, "usb_enable_autosuspend" },
	{ 0xa1368f8, "btbcm_setup_apple" },
	{ 0x3349d621, "btbcm_set_bdaddr" },
	{ 0xa1282407, "btbcm_setup_patchram" },
	{ 0xdab0a866, "btintel_set_diag" },
	{ 0x35e54dd8, "btintel_hw_error" },
	{ 0xf1bb3a74, "btintel_set_bdaddr" },
	{ 0xe2255f7f, "btintel_set_diag_mfg" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0xe8ef6212, "btrtl_shutdown_realtek" },
	{ 0x7fd07fc5, "btrtl_setup_realtek" },
	{ 0x299d5d4e, "usb_match_id" },
	{ 0xdda74f7c, "hci_register_dev" },
	{ 0xdd9970ad, "usb_driver_claim_interface" },
	{ 0xe5ab638a, "of_property_read_variable_u16_array" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xa2dc9df8, "of_irq_get_byname" },
	{ 0x1b861648, "of_match_device" },
	{ 0xb471746, "gpiod_get_optional" },
	{ 0xca96e9cd, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xab6b7c4f, "usb_get_from_anchor" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x8f63fb0, "btintel_set_event_mask" },
	{ 0xe039b104, "btintel_load_ddc_config" },
	{ 0xd557086f, "btintel_send_intel_reset" },
	{ 0xc5c4486e, "btintel_download_firmware" },
	{ 0x322cf36f, "btintel_read_boot_params" },
	{ 0x59c05b91, "btintel_version_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x9561a2bb, "hci_recv_diag" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x14d6fd2b, "hci_recv_frame" },
	{ 0x99cfb896, "skb_put" },
	{ 0x306696a1, "btintel_check_bdaddr" },
	{ 0xd7b84c34, "btintel_set_event_mask_mfg" },
	{ 0xd2f73a39, "btintel_exit_mfg" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc4a990dc, "__hci_cmd_sync_ev" },
	{ 0xf00cc268, "btintel_enter_mfg" },
	{ 0x7b6932b1, "btintel_read_version" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x718b8b7, "bt_info" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x68dab081, "__hci_cmd_sync" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0xf10a24bc, "hci_free_dev" },
	{ 0x20fe06e4, "gpiod_put" },
	{ 0x76a226fa, "hci_unregister_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "btbcm,btintel,btrtl,bluetooth");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FA5A492748AA282A455DEEA");
