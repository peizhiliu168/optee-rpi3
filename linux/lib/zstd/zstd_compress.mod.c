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
	{ 0x3f0eabd2, "xxh64_update" },
	{ 0x658ce1a8, "xxh64_reset" },
	{ 0xdcb764ad, "memset" },
	{ 0xe32ab4d8, "xxh64_digest" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "xxhash");


MODULE_INFO(srcversion, "9D3CB10700B5827BEAE4C4B");
