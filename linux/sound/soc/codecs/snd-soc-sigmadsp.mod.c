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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf6b523a2, "devres_alloc_node" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc2f2d49, "snd_ctl_notify" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xce807a25, "up_write" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdba8bef9, "snd_ctl_new1" },
	{ 0x8eab9994, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x2d988d54, "snd_ctl_add" },
	{ 0x5d4571b, "release_firmware" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "AC6635C45D305D554123928");
