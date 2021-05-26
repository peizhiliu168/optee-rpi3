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
	{ 0xedc86eeb, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0x98cf60b3, "strlen" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xb64c2df9, "led_trigger_event" },
	{ 0x65b19e5f, "input_alloc_absinfo" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5a17815d, "sysfs_create_files" },
	{ 0xd0288e54, "power_supply_powers" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x40399a0c, "__hid_request" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x255ae411, "devm_led_trigger_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0xf6b523a2, "devres_alloc_node" },
	{ 0x4626fae5, "devm_kasprintf" },
	{ 0x5b4d7b61, "hid_input_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x556b7f4f, "kobject_create_and_add" },
	{ 0x96050541, "hid_report_raw_event" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xc6cb465a, "__kfifo_max_r" },
	{ 0x59ecbf96, "power_supply_changed" },
	{ 0xf51135cb, "input_event" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x333f0012, "devm_led_classdev_register_ext" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe6e319b3, "power_supply_get_drvdata" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0xbefdfd5e, "devres_open_group" },
	{ 0x7aceca9e, "hid_hw_close" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1691841b, "hid_hw_open" },
	{ 0x634e201b, "input_set_capability" },
	{ 0x765b7f6c, "usb_hid_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x209276c1, "hid_compare_device_paths" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5bcbd09e, "input_mt_init_slots" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x424b97c4, "devm_add_action" },
	{ 0xd8687eab, "hid_alloc_report_buf" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x44205865, "hid_field_extract" },
	{ 0x9674c9bc, "hidinput_calc_abs_res" },
	{ 0xce4e47b6, "__kfifo_skip_r" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0x8eab9994, "devres_add" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xd5fcd50a, "devm_power_supply_register" },
	{ 0x495cc2c7, "input_mt_get_slot_by_key" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6782a7a, "devm_input_allocate_device" },
	{ 0xa27c2a09, "input_mt_report_slot_state" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x9b2b01e3, "input_mt_sync_frame" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x76e43b06, "devres_close_group" },
	{ 0x3bc4d369, "devres_release_group" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x33fcf44a, "__kfifo_out_r" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g0101v0000056Ap00000000");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000003");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000010");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000011");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000012");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000013");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000014");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000015");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000016");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000017");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000018");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000019");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000020");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000021");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000022");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000023");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000024");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000026");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000027");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000028");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000029");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000002A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000030");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000031");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000032");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000033");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000034");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000035");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000037");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000038");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000039");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000003F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000041");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000042");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000043");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000044");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000045");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000047");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000057");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000059");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000005E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000060");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000061");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000062");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000063");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000064");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000065");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000069");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000006A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000006B");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000081");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000084");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000090");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000093");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000097");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000009A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000009F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B1");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000B9");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000BC");
MODULE_ALIAS("hid:b0005g0101v0000056Ap000000BD");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000C7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000CC");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000CE");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D1");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D7");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000D8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DD");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DE");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000DF");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E2");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E3");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E5");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000E6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000EC");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000ED");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000EF");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F0");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F4");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F6");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000F8");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000FA");
MODULE_ALIAS("hid:b0003g0101v0000056Ap000000FB");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000100");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000101");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000010F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000116");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000012C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000300");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000301");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000302");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000303");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000304");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000307");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000309");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000030E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000314");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000315");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000317");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000318");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000319");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000323");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000325");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000326");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000032F");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000331");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000333");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000335");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000336");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033B");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033C");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033D");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000033E");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00000343");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000360");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000361");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000377");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000379");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000037A");
MODULE_ALIAS("hid:b0003g0101v0000056Ap0000037B");
MODULE_ALIAS("hid:b0005g0101v0000056Ap00000393");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00004001");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00004004");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00005000");
MODULE_ALIAS("hid:b0003g0101v0000056Ap00005002");
MODULE_ALIAS("hid:b0003g*v000017EFp00006004");
MODULE_ALIAS("hid:b0003g0101v0000056Ap*");
MODULE_ALIAS("hid:b0018g0101v0000056Ap*");
MODULE_ALIAS("hid:b0005g0101v0000056Ap*");

MODULE_INFO(srcversion, "166EC21FE86F8DEFA394A74");