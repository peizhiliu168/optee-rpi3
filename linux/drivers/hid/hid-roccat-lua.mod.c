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
	{ 0xe3470b13, "roccat_common2_send" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9ec3b9c2, "roccat_common2_receive" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x64b4f375, "sysfs_create_bin_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd55682d, "sysfs_remove_bin_file" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "hid-roccat-common");

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002C2E");

MODULE_INFO(srcversion, "EA565E7834061F10C5E5D90");
