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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xdcb764ad, "memset" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0xaecef912, "kmem_cache_size" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3ACCA4FB23A87AD88E0D314");
