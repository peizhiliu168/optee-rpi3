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
	{ 0xd250bd8c, "ieee80211_rx_napi" },
	{ 0x4823d37b, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc3ac59e5, "rtl_fw_cb" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x54e147dd, "rtl_cam_get_free_entry" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc106f0bf, "rtl92c_phy_set_rfpath_switch" },
	{ 0xdc8814a8, "rtl_usb_disconnect" },
	{ 0xe058f417, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x1fde6bdc, "rtl92c_phy_set_txpower_level" },
	{ 0xf596e043, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0xd8ef6464, "rtl92c_dm_check_txpower_tracking" },
	{ 0x9ec06bbf, "rtl_ps_disable_nic" },
	{ 0xc1de89bb, "rtl92c_dm_watchdog" },
	{ 0x2952e4b6, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0xf263738a, "_rtl92c_phy_rf_serial_write" },
	{ 0xd35a3762, "rtl_get_tcb_desc" },
	{ 0x8964cf60, "_rtl92c_phy_rf_serial_read" },
	{ 0x61a43a0e, "rtl92c_phy_set_bw_mode" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2e65c5a2, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf501330d, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4bd2f0a7, "rtl_phy_scan_operation_backup" },
	{ 0x2742863b, "rtl92c_dm_init_edca_turbo" },
	{ 0x390b68e7, "rtl92c_phy_iq_calibrate" },
	{ 0x698d862, "rtl92c_dm_init" },
	{ 0x92944d90, "rtl_usb_probe" },
	{ 0x7916451, "_rtl_dbg_trace" },
	{ 0x8cf94569, "rtl92c_phy_set_bb_reg" },
	{ 0x2437f1a6, "rtl_ps_enable_nic" },
	{ 0xc00b174e, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xb901fa71, "rtl92c_dm_rf_saving" },
	{ 0xb7448af1, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0xbcfe6985, "dm_writepowerindex" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8847af55, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0xf446b72d, "_rtl_dbg_print_data" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x7076b630, "_rtl92c_phy_set_rf_sleep" },
	{ 0x2116d007, "request_firmware_nowait" },
	{ 0x2a7ef800, "rtlwifi_rate_mapping" },
	{ 0x952623a0, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x1f48034, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd1cbe9f6, "rtl_rfreg_delay" },
	{ 0x9c125fb9, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0x1d15c00, "rtl92c_phy_set_io_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3743cdfb, "ieee80211_find_sta" },
	{ 0x1696a95c, "_rtl_dbg_print" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x49fe9816, "rtl_cam_mark_invalid" },
	{ 0xc2df0923, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x4cee5ccf, "rtl_cam_del_entry" },
	{ 0xdd625c4f, "rtl_cam_empty_entry" },
	{ 0xdfd7462a, "rtl92ce_phy_set_rf_on" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x688e12b8, "rtl92c_phy_query_bb_reg" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x1bb4e2a2, "rtl_cam_reset_all_entry" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x74e36e1a, "rtl_process_phyinfo" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x9d84327e, "dm_restorepowerindex" },
	{ 0x27c47fda, "efuse_read_1byte" },
	{ 0xe06d4733, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x9f295cff, "rtl92c_fill_h2c_cmd" },
	{ 0x72504b7d, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x154ce465, "param_ops_ullong" },
};

MODULE_INFO(depends, "mac80211,rtlwifi,rtl8192c-common,rtl_usb");

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7DAAD0893329CD8E8B5343B");
