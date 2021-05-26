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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0xa4c47b95, "single_open" },
	{ 0x98cf60b3, "strlen" },
	{ 0x768e4443, "input_ff_create_memless" },
	{ 0x8b1f9945, "single_release" },
	{ 0xe455993c, "power_supply_unregister" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd0288e54, "power_supply_powers" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x457a3d90, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xf51135cb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe6e319b3, "power_supply_get_drvdata" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7aceca9e, "hid_hw_close" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x1b572e30, "debugfs_remove" },
	{ 0x1691841b, "hid_hw_open" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1dd80e82, "simple_open" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0xbeb065ae, "power_supply_register" },
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");

MODULE_INFO(srcversion, "D60DFD02AF7A194956B2AAF");
