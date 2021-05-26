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
	{ 0xa3c19156, "inet_twsk_put" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x427e4478, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7edf0fd0, "inet_twsk_deschedule_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66b447c4, "udp4_lib_lookup" },
	{ 0x54c4f36b, "__inet_lookup_listener" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x5f8aa6be, "__inet_lookup_established" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "696B0B6333AC5FE7C9D8A23");
