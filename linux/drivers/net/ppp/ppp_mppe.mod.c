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
	{ 0xdcb764ad, "memset" },
	{ 0x34407691, "crypto_has_ahash" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x768c8c1a, "crypto_alloc_shash" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x7a4497db, "kzfree" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xe1c788b5, "crypto_shash_final" },
	{ 0x1b14ff22, "crypto_shash_update" },
	{ 0xc5850110, "printk" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ppp_generic,libarc4");


MODULE_INFO(srcversion, "67E5BD2217191AEC7A591F6");
