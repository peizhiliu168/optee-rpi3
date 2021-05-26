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
	{ 0xeb33e656, "crypto_unregister_templates" },
	{ 0x77753193, "crypto_register_templates" },
	{ 0xa6bc0180, "skcipher_walk_done" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x1b0b002b, "skcipher_walk_virt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1af773e4, "crypto_mod_put" },
	{ 0x2659c03, "skcipher_alloc_instance_simple" },
	{ 0xc67282a2, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xff2993cd, "crypto_drop_spawn" },
	{ 0x498f1fed, "crypto_grab_skcipher" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x8d6994d2, "crypto_spawn_tfm2" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6CC9FB9A159298A880DF36B");
