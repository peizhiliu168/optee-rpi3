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
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0xbad23410, "hid_validate_values" },
	{ 0x333f0012, "devm_led_classdev_register_ext" },
	{ 0x1691841b, "hid_hw_open" },
	{ 0xd0288e54, "power_supply_powers" },
	{ 0xd5fcd50a, "devm_power_supply_register" },
	{ 0x4626fae5, "devm_kasprintf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x40399a0c, "__hid_request" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xffb7c514, "ida_free" },
	{ 0x7aceca9e, "hid_hw_close" },
	{ 0x5bcbd09e, "input_mt_init_slots" },
	{ 0x9b2b01e3, "input_mt_sync_frame" },
	{ 0xa27c2a09, "input_mt_report_slot_state" },
	{ 0xf51135cb, "input_event" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0xe6e319b3, "power_supply_get_drvdata" },
	{ 0x65b19e5f, "input_alloc_absinfo" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0x84a68123, "input_register_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");

MODULE_INFO(srcversion, "0C82D9BBFC76D3B6D42BC65");
