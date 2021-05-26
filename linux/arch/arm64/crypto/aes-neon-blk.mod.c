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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xa84ce9e0, "crypto_aes_inv_sbox" },
	{ 0x8946ea72, "fpsimd_context_busy" },
	{ 0x768c8c1a, "crypto_alloc_shash" },
	{ 0x2a281132, "crypto_unregister_skciphers" },
	{ 0xefe73979, "simd_skcipher_free" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xa8a8110c, "kernel_neon_end" },
	{ 0x88638552, "simd_skcipher_create_compat" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xa6bc0180, "skcipher_walk_done" },
	{ 0x1334a923, "crypto_register_skciphers" },
	{ 0xd3ef14cd, "crypto_shash_digest" },
	{ 0x8362a554, "crypto_register_shashes" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x1b0b002b, "skcipher_walk_virt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xd9d952d1, "crypto_aes_sbox" },
	{ 0x8fd180e7, "kernel_neon_begin" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xc64d3711, "crypto_unregister_shashes" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
};

MODULE_INFO(depends, "crypto_simd");


MODULE_INFO(srcversion, "18CFD1AA316E0CD3F3E8479");
