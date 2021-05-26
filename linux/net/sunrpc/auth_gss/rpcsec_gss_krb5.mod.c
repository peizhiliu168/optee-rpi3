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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x768c8c1a, "crypto_alloc_shash" },
	{ 0xd04ff700, "write_bytes_to_xdr_buf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0x2793d683, "gss_mech_register" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x9972468d, "crypto_ahash_final" },
	{ 0x988be57c, "crypto_alloc_sync_skcipher" },
	{ 0xe16d80df, "crypto_ahash_digest" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0xcf9d5fbf, "xdr_buf_subsegment" },
	{ 0xdcb764ad, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd3ef14cd, "crypto_shash_digest" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x905b7dfa, "crypto_shash_setkey" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xc51d4b1f, "gss_mech_unregister" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x353d1a68, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0x545b789e, "read_bytes_from_xdr_buf" },
	{ 0x732fc900, "xdr_process_buf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8339c0dc, "xdr_buf_trim" },
	{ 0x66a6de53, "crypto_alloc_ahash" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CD4ABD6AB696F007796FF78");
