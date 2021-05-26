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
	{ 0xe0e1b657, "crypto_unregister_scomp" },
	{ 0x781918df, "crypto_unregister_alg" },
	{ 0x1a0c261d, "crypto_register_scomp" },
	{ 0x2e57d7b9, "crypto_register_alg" },
	{ 0x37a0cba, "kfree" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x578a408b, "ZSTD_initDCtx" },
	{ 0xa5ac3e33, "ZSTD_DCtxWorkspaceBound" },
	{ 0xe27a2dd, "ZSTD_initCCtx" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xefe4f679, "ZSTD_CCtxWorkspaceBound" },
	{ 0x7a4497db, "kzfree" },
	{ 0x999e8297, "vfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a107de2, "ZSTD_compressCCtx" },
	{ 0xe41476d9, "ZSTD_getParams" },
	{ 0x1a1bac9c, "ZSTD_decompressDCtx" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "zstd_decompress,zstd_compress");


MODULE_INFO(srcversion, "C7202986707338D8145923A");
