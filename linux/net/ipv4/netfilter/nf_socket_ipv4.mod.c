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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66b447c4, "udp4_lib_lookup" },
	{ 0x54c4f36b, "__inet_lookup_listener" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x5f8aa6be, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC7DED38AA6EEFF6F483733");
