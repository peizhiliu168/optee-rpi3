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
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x8932da54, "hid_add_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb3eaea63, "hid_allocate_device" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xcf2a6966, "up" },
	{ 0x1691841b, "hid_hw_open" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x209276c1, "hid_compare_device_paths" },
	{ 0x765b7f6c, "usb_hid_driver" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf9a482f9, "msleep" },
	{ 0x40399a0c, "__hid_request" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x5b4d7b61, "hid_input_report" },
	{ 0xb99f246, "hid_parse_report" },
	{ 0xc5850110, "printk" },
	{ 0x7da99514, "hid_destroy_device" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0x7aceca9e, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5495392, "hid_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C532");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C52F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C534");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C531");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C539");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53F");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C513");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C53A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C517");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C51B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70E");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C70A");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71B");
MODULE_ALIAS("hid:b0003g*v0000046Dp0000C71C");

MODULE_INFO(srcversion, "9CEEBBB8ADF9F2AD877240D");
