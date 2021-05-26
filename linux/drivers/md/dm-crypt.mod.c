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
	{ 0x3faf14ed, "dm_unregister_target" },
	{ 0xae6e97a0, "dm_register_target" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6b84e4b9, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xde1cda16, "bioset_init" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x93d992ee, "__percpu_counter_init" },
	{ 0xfdf637af, "dm_table_device_name" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x75e60613, "key_put" },
	{ 0x53b954a2, "up_read" },
	{ 0x668b19a1, "down_read" },
	{ 0x229398ec, "request_key_tag" },
	{ 0xc2988c1e, "key_type_logon" },
	{ 0x5aaa008b, "key_type_user" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x11089ac7, "_ctype" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x94dabf74, "bio_add_page" },
	{ 0xae70287a, "bio_alloc_bioset" },
	{ 0x56470118, "__warn_printk" },
	{ 0x26f0923b, "crypto_aead_encrypt" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0xa3ed59c8, "crypto_aead_decrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x6a69e72e, "dm_accept_partial_bio" },
	{ 0xd90ff8fe, "bio_clone_fast" },
	{ 0x7b14b6de, "bio_devname" },
	{ 0x29361773, "complete" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdeba06c, "bio_put" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0xe1c788b5, "crypto_shash_final" },
	{ 0x66a6de53, "crypto_alloc_ahash" },
	{ 0x9166fada, "strncpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x33264da6, "crypto_alloc_skcipher" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
	{ 0x307dabe3, "crypto_req_done" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xcac7ef12, "vmemmap" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x768c8c1a, "crypto_alloc_shash" },
	{ 0x1b14ff22, "crypto_shash_update" },
	{ 0x45094dcb, "crypto_alloc_aead" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x944375db, "_totalram_pages" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x59a3a71e, "dm_put_device" },
	{ 0x7442f0f9, "percpu_counter_destroy" },
	{ 0x7d83fe99, "__percpu_counter_sum" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x8e48459c, "bioset_exit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xaf5c7282, "__percpu_counter_compare" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x809fca8e, "generic_make_request" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x81b6edbb, "dm_per_bio_data" },
	{ 0x1033a7a0, "bio_associate_blkg" },
	{ 0x96848186, "scnprintf" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3a4334e3, "crypto_aead_setkey" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x349cba85, "strchr" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "3625F8ED916B6F4E8405784");
