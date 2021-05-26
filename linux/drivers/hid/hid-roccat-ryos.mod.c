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
	{ 0x2878eef7, "class_destroy" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x9a775031, "__class_create" },
	{ 0xa6aed984, "roccat_common2_sysfs_read" },
	{ 0x46845517, "roccat_common2_sysfs_write" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x8a7e1857, "roccat_connect" },
	{ 0x6806d2fa, "roccat_common2_device_init_struct" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0x2f622ea1, "roccat_disconnect" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e4427c8, "roccat_report_event" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "hid-roccat-common,hid-roccat");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00003138");
MODULE_ALIAS("hid:b0003g*v00001E7Dp000031CE");
MODULE_ALIAS("hid:b0003g*v00001E7Dp00003232");

MODULE_INFO(srcversion, "4D8B32C4046138CEC2C8C12");
