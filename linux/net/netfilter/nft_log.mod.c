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
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0xeb37101c, "audit_log_end" },
	{ 0xd3bf535, "audit_log_start" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0x54db874d, "nf_log_packet" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe1dcf64a, "audit_log_format" },
	{ 0x7954ed30, "ipv6_skip_exthdr" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xb8cd3a7f, "nf_logger_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1f2eee2, "nf_logger_find_get" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "9C4029720CCC5F04AE3D9FD");
