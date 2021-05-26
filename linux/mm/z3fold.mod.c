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
	{ 0xbedbced7, "kill_anon_super" },
	{ 0x856b7de1, "zpool_unregister_driver" },
	{ 0x16f65d01, "kern_unmount" },
	{ 0xd516460f, "zpool_register_driver" },
	{ 0x3ab5823, "kern_mount" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0xb85c7a57, "__SetPageMovable" },
	{ 0xa9382806, "page_mapping" },
	{ 0x4829a47e, "memcpy" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8c79bd2b, "unlock_page" },
	{ 0x82751b85, "__ClearPageMovable" },
	{ 0xb66178fe, "__lock_page" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xcac1f5b9, "alloc_anon_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4aeaa726, "init_pseudo" },
	{ 0x37a0cba, "kfree" },
	{ 0xb782ddc2, "iput" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DED1883D518C9CEF0E55A28");
