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
	{ 0x33264da6, "crypto_alloc_skcipher" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc66b3534, "ahash_register_instance" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb6ed4618, "shash_attr_alg" },
	{ 0x1af773e4, "crypto_mod_put" },
	{ 0x77f60189, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x873a4f21, "shash_ahash_digest" },
	{ 0x498f1fed, "crypto_grab_skcipher" },
	{ 0xf581a58e, "crypto_unregister_template" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xe1c788b5, "crypto_shash_final" },
	{ 0x49c390d2, "shash_ahash_finup" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc67282a2, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0x7fdcf1b7, "crypto_grab_aead" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x5cf241a0, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x905b7dfa, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0xff2993cd, "crypto_drop_spawn" },
	{ 0x3a4334e3, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xdac98aa5, "crypto_enqueue_request" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x6e16720, "crypto_aead_setauthsize" },
	{ 0x45094dcb, "crypto_alloc_aead" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8d6994d2, "crypto_spawn_tfm2" },
	{ 0x4a69b119, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0xd784f09e, "shash_ahash_update" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xcfe8f49d, "shash_no_setkey" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0xf732c0e7, "aead_register_instance" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x66a6de53, "crypto_alloc_ahash" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B92958244A46F1B5220BCEF");
