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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x424c5ca6, "xfrm_state_delete_tunnel" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb754ca92, "___pskb_trim" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xb7104837, "crypto_alloc_base" },
	{ 0x23fd3028, "vmalloc_node" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2A6935C6E305885F46AFFE4");
