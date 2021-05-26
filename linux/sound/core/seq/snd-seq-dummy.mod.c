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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x4aeb43e, "snd_seq_create_kernel_client" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
};

MODULE_INFO(depends, "snd-seq");


MODULE_INFO(srcversion, "419B7F0E27EB7C3B1893826");
