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
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xff644c66, "generic_file_llseek" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0xa4c47b95, "single_open" },
	{ 0x8b1f9945, "single_release" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x40399a0c, "__hid_request" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x457a3d90, "seq_read" },
	{ 0xe1d2d81e, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0xf51135cb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7aceca9e, "hid_hw_close" },
	{ 0x1b572e30, "debugfs_remove" },
	{ 0x1691841b, "hid_hw_open" },
	{ 0x634e201b, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x96e528b3, "hid_set_field" },
	{ 0x1dd80e82, "simple_open" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0xd8687eab, "hid_alloc_report_buf" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc27e08f9, "hid_output_report" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "BCDA2116D14CA0895F41710");
