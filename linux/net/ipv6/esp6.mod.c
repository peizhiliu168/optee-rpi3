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
	{ 0x2290bca5, "xfrm6_protocol_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb5a19c36, "skb_to_sgvec" },
	{ 0xd8465196, "xfrm_unregister_type" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc88b8d02, "pskb_put" },
	{ 0xd8c3806, "skb_page_frag_refill" },
	{ 0xb631105d, "skb_cow_data" },
	{ 0x6246b814, "ip6_redirect" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xa07c03a3, "xfrm_input_resume" },
	{ 0xdcb764ad, "memset" },
	{ 0x5831d6e, "skb_checksum" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc5850110, "printk" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x26f0923b, "crypto_aead_encrypt" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x3a4334e3, "crypto_aead_setkey" },
	{ 0x3908a997, "xfrm_register_type" },
	{ 0x1ff39bd6, "xfrm_state_mtu" },
	{ 0xf669d7f1, "xfrm6_find_1stfragopt" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x8ed95cbc, "xfrm_output_resume" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x477023c1, "ip6_update_pmtu" },
	{ 0x4ad9695e, "skb_pull_rcsum" },
	{ 0x62b83a79, "__xfrm_state_destroy" },
	{ 0xa3ed59c8, "crypto_aead_decrypt" },
	{ 0x6e16720, "crypto_aead_setauthsize" },
	{ 0x45094dcb, "crypto_alloc_aead" },
	{ 0xae7d6b97, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb754ca92, "___pskb_trim" },
	{ 0x2928635b, "__skb_ext_del" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x87a09abe, "xfrm6_rcv" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0x9a714c12, "xfrm6_protocol_deregister" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "8A2D046861DAEAA77C39D35");
