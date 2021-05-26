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
	{ 0x348bc71c, "ppp_unregister_compressor" },
	{ 0x1c557980, "ppp_register_compressor" },
	{ 0xc890c008, "zlib_deflateEnd" },
	{ 0x5a0b73d0, "zlib_deflateInit2" },
	{ 0xe9f7149c, "zlib_deflate_workspacesize" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x424d3620, "zlib_inflateIncomp" },
	{ 0x6aeefac4, "zlib_deflateReset" },
	{ 0xf2c43f3f, "zlib_deflate" },
	{ 0xbb0540aa, "zlib_inflateReset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ppp_generic,zlib_deflate");


MODULE_INFO(srcversion, "77A9A897F1C8BA96451F549");
