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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x768e4443, "input_ff_create_memless" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x40399a0c, "__hid_request" },
	{ 0x5495392, "hid_debug" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf51135cb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x8cfe71f8, "led_classdev_register_ext" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x52b5b7e8, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbad23410, "hid_validate_values" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C50C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C101");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C704");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C714");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C30A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C512");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C215");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C216");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C294");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C20A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C211");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C219");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C24F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C283");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C286");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C295");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000CA03");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000CA04");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C299");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C298");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C29C");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C20E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C293");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C218");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C287");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C626");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C623");

MODULE_INFO(srcversion, "45735603DCC203768DB4370");
