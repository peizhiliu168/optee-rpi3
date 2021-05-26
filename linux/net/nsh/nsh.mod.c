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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xac759263, "dev_add_offload" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x42b2fa8c, "dev_remove_offload" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x90253222, "skb_mac_gso_segment" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x4ad9695e, "skb_pull_rcsum" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe113bbbc, "csum_partial" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E4F6C8CC2CE322FCF066423");
