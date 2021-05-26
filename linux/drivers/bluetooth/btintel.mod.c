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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x68dab081, "__hci_cmd_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x7aad008b, "bt_to_errno" },
	{ 0x718b8b7, "bt_info" },
	{ 0x1b08bada, "__regmap_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x3b36c236, "request_firmware_direct" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xd270646, "hci_cmd_sync" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5d4571b, "release_firmware" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "8215D1011CCE561BCB94364");
