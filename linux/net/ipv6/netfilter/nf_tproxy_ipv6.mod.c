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
	{ 0xef820849, "inet6_lookup_listener" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0xa337dcc0, "udp6_lib_lookup" },
	{ 0xa481689c, "__inet6_lookup_established" },
	{ 0x427e4478, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7edf0fd0, "inet_twsk_deschedule_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x481c66fc, "skb_copy_bits" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "78B6D521AF07AEC03CA54A4");
