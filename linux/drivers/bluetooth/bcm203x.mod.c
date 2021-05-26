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
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9C9852EFEF82B41D386F0EE");
