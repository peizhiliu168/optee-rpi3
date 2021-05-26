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
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x5906fe47, "devm_sigmadsp_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "snd-soc-sigmadsp");


MODULE_INFO(srcversion, "77CE636E3AADF30D0C58FC0");