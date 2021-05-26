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
	{ 0xfe0b4046, "inet_diag_unregister" },
	{ 0xaa1dee6a, "inet_diag_register" },
	{ 0x25087745, "skb_trim" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xc95c03ed, "inet_diag_dump_icsk" },
	{ 0x3bb47799, "inet_diag_dump_one_icsk" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ed90705, "tcp_get_info" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "F6A6B780EA285E138B299C8");
