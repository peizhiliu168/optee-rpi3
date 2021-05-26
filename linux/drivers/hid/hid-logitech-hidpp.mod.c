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
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xea564a8e, "input_ff_create" },
	{ 0x7c5f09f8, "devm_kfree" },
	{ 0x6626afca, "down" },
	{ 0xcf2a6966, "up" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x84a68123, "input_register_device" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x4626fae5, "devm_kasprintf" },
	{ 0xd0288e54, "power_supply_powers" },
	{ 0xd5fcd50a, "devm_power_supply_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x327786b7, "devm_kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x8b13a8b8, "hid_snto32" },
	{ 0x44205865, "hid_field_extract" },
	{ 0x9b2b01e3, "input_mt_sync_frame" },
	{ 0xa27c2a09, "input_mt_report_slot_state" },
	{ 0x495cc2c7, "input_mt_get_slot_by_key" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x96050541, "hid_report_raw_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x59ecbf96, "power_supply_changed" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xc310b981, "strnstr" },
	{ 0x5bcbd09e, "input_mt_init_slots" },
	{ 0x634e201b, "input_set_capability" },
	{ 0x65b19e5f, "input_alloc_absinfo" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x96848186, "scnprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0xe6e319b3, "power_supply_get_drvdata" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5495392, "hid_debug" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7aceca9e, "hid_hw_close" },
	{ 0x1691841b, "hid_hw_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0xd653b126, "sched_clock" },
	{ 0xf51135cb, "input_event" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0102v0000046Dp00004011");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004101");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B00C");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00001017");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004010");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004050");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004007");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000402D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406D");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000405E");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000404A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004072");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B013");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B018");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B01F");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000406A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004041");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004060");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004071");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004069");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000101A");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004024");
MODULE_ALIAS("hid:b0003g0102v0000046Dp00004002");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B305");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B309");
MODULE_ALIAS("hid:b0003g0102v0000046Dp0000B30B");
MODULE_ALIAS("hid:b0003g0102v0000046Dp*");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000049");
MODULE_ALIAS("hid:b0003g0104v0000046Dp00000057");
MODULE_ALIAS("hid:b0003g0104v0000046Dp0000005C");
MODULE_ALIAS("hid:b0003g0104v0000046Dp000000FE");
MODULE_ALIAS("hid:b0003g0104v0000046Dp*");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C082");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C087");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C090");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C081");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C086");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C091");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C262");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C088");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B305");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B309");
MODULE_ALIAS("hid:b0005g*v0000046Dp0000B30B");

MODULE_INFO(srcversion, "D603BAD07E9A13DD50EFE9E");
