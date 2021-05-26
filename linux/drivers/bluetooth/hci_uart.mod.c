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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x93007c53, "skb_queue_head" },
	{ 0x9561a2bb, "hci_recv_diag" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x68dab081, "__hci_cmd_sync" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xf25f102a, "__pm_runtime_use_autosuspend" },
	{ 0xdda74f7c, "hci_register_dev" },
	{ 0x56c3ce67, "__pm_runtime_suspend" },
	{ 0x71574184, "btbcm_patchram" },
	{ 0xfe50b6cf, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9ede93af, "hci_reset_dev" },
	{ 0x37a68b2a, "tty_unthrottle" },
	{ 0x3349d621, "btbcm_set_bdaddr" },
	{ 0x78698547, "btbcm_write_pcm_int_params" },
	{ 0x1df0afa0, "__percpu_down_read" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x667f0bf4, "serdev_device_close" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x14d6fd2b, "hci_recv_frame" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x76a226fa, "hci_unregister_dev" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76592879, "serdev_device_write_buf" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xae996fad, "serdev_device_set_tiocm" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x4a226164, "device_get_match_data" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf3387f88, "__serdev_device_driver_register" },
	{ 0x67d084fc, "__percpu_init_rwsem" },
	{ 0x21b00716, "tty_ldisc_flush" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0xd7eb2b04, "n_tty_ioctl_helper" },
	{ 0xca96e9cd, "hci_alloc_dev" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1fa65493, "serdev_device_write_flush" },
	{ 0x6712bc68, "devm_clk_put" },
	{ 0x1713ef0c, "device_property_read_u8_array" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9d75034d, "percpu_up_write" },
	{ 0xeb506479, "btbcm_read_pcm_int_params" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0x890d97d, "tty_driver_flush_buffer" },
	{ 0x801fbd02, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb8a8f92d, "__pm_runtime_set_status" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x89c6a139, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d76a1fe, "__percpu_up_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0x2901b131, "serdev_device_set_flow_control" },
	{ 0x5dd844ca, "btbcm_initialize" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x2e60ca36, "pm_runtime_set_autosuspend_delay" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x44eaa75f, "btbcm_finalize" },
	{ 0xe58cb6ec, "platform_get_irq" },
	{ 0xf10a24bc, "hci_free_dev" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0xbd517cd4, "serdev_device_set_baudrate" },
	{ 0x23159f18, "tty_register_ldisc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x99cfb896, "skb_put" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x1d0b59ba, "percpu_down_write" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x3104b461, "tty_set_termios" },
	{ 0x3a85a912, "percpu_free_rwsem" },
};

MODULE_INFO(depends, "bluetooth,btbcm");

MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0C*");

MODULE_INFO(srcversion, "CB6222061469C60DCAEBADE");
