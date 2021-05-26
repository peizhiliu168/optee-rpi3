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
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xdda74f7c, "hci_register_dev" },
	{ 0xca96e9cd, "hci_alloc_dev" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc975d319, "st_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x14d6fd2b, "hci_recv_frame" },
	{ 0x29361773, "complete" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xf10a24bc, "hci_free_dev" },
	{ 0x76a226fa, "hci_unregister_dev" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xd445ada7, "st_unregister" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "bluetooth,st_drv");


MODULE_INFO(srcversion, "D7F415C343A0B44C969FBA0");
