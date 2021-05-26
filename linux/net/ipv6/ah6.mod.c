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
	{ 0x87a09abe, "xfrm6_rcv" },
	{ 0xf669d7f1, "xfrm6_find_1stfragopt" },
	{ 0x9a714c12, "xfrm6_protocol_deregister" },
	{ 0xd8465196, "xfrm_unregister_type" },
	{ 0x2290bca5, "xfrm6_protocol_register" },
	{ 0x3908a997, "xfrm_register_type" },
	{ 0xa07c03a3, "xfrm_input_resume" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xe16d80df, "crypto_ahash_digest" },
	{ 0x5f7d5d67, "skb_to_sgvec_nomark" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xb631105d, "skb_cow_data" },
	{ 0x6246b814, "ip6_redirect" },
	{ 0x62b83a79, "__xfrm_state_destroy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x477023c1, "ip6_update_pmtu" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xae7d6b97, "xfrm_state_lookup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x353d1a68, "crypto_ahash_setkey" },
	{ 0x66a6de53, "crypto_alloc_ahash" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x8ed95cbc, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "7280237730993B640E95D3D");
