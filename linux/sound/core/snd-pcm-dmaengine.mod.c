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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x67fa2d43, "snd_pcm_period_elapsed" },
	{ 0x7e8fece0, "snd_pcm_hw_constraint_integer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xd121eb9b, "__dma_request_channel" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4e5b63e6, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "snd-pcm");


MODULE_INFO(srcversion, "A1D907FBE641F7F8283D4FB");
